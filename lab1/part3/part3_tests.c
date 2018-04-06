#include <stdio.h>

#include "checkit.h"
#include "part3.h"

void test_sum_1()
{
   int arr1[] = {5, 5, 1, 3, 4, 7};
   int arr2[] = {0, 8, 9};
   checkit_int(sum(arr1, 6), 25);
   checkit_int(sum(arr2, 0), 0);
}

void test_sum()
{
   test_sum_1();
}

int main(void)
{
   test_sum();

   return 0;
}
