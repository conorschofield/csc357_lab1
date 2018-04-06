#include <stdio.h>

#include "checkit.h"
#include "part4.h"

void test_strlower_1(void)
{
    char buffer1[5];
    char expec[] = "test";
    checkit_string(strlower("TEST", buffer1), expec);
}

void test_strlowermutate_1(void){
    char ex[] = "test";
    checkit_string(str_lower_mutate("TEST"), ex);
}

void test_strlower(void)
{
    test_strlower_1();
}

void test_strlowermutate(void){
    test_strlowermutate_1();
}

int main(void)
{
    test_strlower();
    test_strlowermutate();

    return 0;
}
