#ifndef PART5_H
#define PART5_H

struct point
{
   double x;
   double y;
};

struct rectangle
{
    struct point topLeft;
    struct point bottomRight;
};

int is_a_square(struct rectangle rect);
struct rectangle create_rectangle(struct point tl, struct point br);
struct point create_point(double x, double y);

#endif
