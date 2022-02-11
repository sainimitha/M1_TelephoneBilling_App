#TargetName : Dependencies
#<TAB>commands

PROJ_NAME=Telephone_Bill
SRC=src/TelephoneBill.c src/AddRecords.c src/DeleteRecords.c src/payment.c src/SearchRecords.c src/unity.c

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
   cppcheck --enable=all $(SRC)

dynamic_analysis: Build
   valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a src/TelephoneBill.c src/AddRecords.c src/payment.c src/DeleteRecords.c src/SearchRecords.c 
Clean:
	$(RM) $(call FixPath,*.out)