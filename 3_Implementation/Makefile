#TargetName : Dependencies
#<TAB>commands

# Name of the project
PROJECT_NAME = Telephone Bill

# Output directory
BUILD = build


#All Source code file
SRC =src/TelephoneBill.c\ src/AddRecords.c\ src/DeleteRecords.c\ src/payment.c\ src/SearchRecords.c\

# All test source files
TEST_SRC = Test/Test_TelePhoneBill.c\
Unity/unity.c\

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
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