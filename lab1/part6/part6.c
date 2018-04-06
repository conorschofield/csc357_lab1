#include "part6.h"

struct point create_point(double x, double y)
{
   struct point p = {x, y};
   return p;
}

struct rectangle create_rectangle(struct point tl, struct point br){
	struct rectangle r = {tl, br};
	return r;
}

int is_a_square(struct rectangle rect){
	int width = rect.bottomRight.x - rect.topLeft.x;
	int height = rect.topLeft.y - rect.bottomRight.y;
	if (width == height){
		return 1;
	}
	else{
		return 0;
	}
}
