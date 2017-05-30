#include "../thirdparty/ctest.h"
#include <stdio.h>
#include "../src/deposit.h"

CTEST(suite1, test1)
{
    const int real = 81000;
    printf("Минус 10 процентов для вклада до 100000:");
    int days = 10;
    int sum = 90000; 
  	int result = sum_time_of_expiry(days, sum);
  	ASSERT_EQUAL(real, result);
    
}

CTEST(suite1, test2)
{
    const int real = 360000;
    printf("Минус 10 процентов для вклада от 100000:");
    int days = 20;
    int sum = 400000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test1)
{
    const int real = 81600;
    printf("Плюс 2 процента:");
    int days = 40;
    int sum = 80000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test2)
{
    const int real = 927000;
    printf("Плюс 3 процента:");
    int days = 50;
    int sum = 900000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test1)
{
    const int real = 74200;
    printf("Плюс 6 процентов:");
    int days = 122;
    int sum = 70000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test2)
{
    const int real = 756000;
    printf("Плюс 8 процентов:");
    int days = 135;
    int sum = 700000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test1)
{
    const int real = 98560;
    printf("Плюс 12 процентов:");
    int days = 340;
    int sum = 88000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test2)
{
    const int real = 690000;
    printf("Плюс 15 процентов:");
    int days = 300;
    int sum = 600000;
    int result = sum_time_of_expiry(days, sum);
    ASSERT_EQUAL(real, result);
}