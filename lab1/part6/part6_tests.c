#include <stdio.h>

#include "checkit.h"
#include "part6.h"

/* define testing functions */
void test_create_point1(void)
{
   struct point p = create_point(1.9, -2.7);

   checkit_double(p.x, 1.9);
   checkit_double(p.y, -2.7);
}

void test_create_point2(void)
{
   struct point p = create_point(0.2, 12.1);

   checkit_double(p.x, 0.2);
   checkit_double(p.y, 12.1);
}

void test_is_a_square1(void)
{
   struct point tl = create_point(0.0, 4.0);
   struct point br = create_point(4.0, 0.0);
   struct point tl1 = create_point(2.0, 8.0);
   struct point br1 = create_point(9.0, 4.0);
   struct rectangle r = create_rectangle(tl, br);
   struct rectangle r1 = create_rectangle(tl1, br1);
   checkit_boolean(is_a_square(r), 1);
   checkit_boolean(is_a_square(r1), 0);
}

void test_create_point(void)
{
   test_create_point1();
   test_create_point2();
}

void test_is_a_square(void){
   test_is_a_square1();
}

int main(int arg, char *argv[])
{
   /* call testing function(s) here */
   test_create_point();


   return 0;
}
