#include <unity.h>
#include <unity_internals.h>
#include "DeleteRecords.h"
#include "AddRecords.h"

#define PROJECT_NAME "Telephone_Bill"

/* Prototypes for all the test functions */

void test_AddRecords(void);
void test_DeleteRecords(void);

/* Required by the unity test framework */
void setUp(void) 
{
}
/* Required by the unity test framework */
void tearDown(void)
 {
 }

void test_AddRecords(void)
{
    TEST_ASSERT_EQUAL("9346112345 Nimitha 555",addrecords);
}
void test_DeleteRecords(void)
{
    TEST_ASSERT_EQUAL("9346112345",deleterecords);
} 
int main(void)
{
    UNITY_BEGIN();
     RUN_TEST(test_AddRecords);
    RUN_TEST(test_DeleteRecords);
 
    return UNITY_END();
}