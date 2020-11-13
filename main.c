#include <stdio.h>
#include "vector2.h"
#include "vector3.h"

int main()
{
	vector2_t v = {5, 10};
	printf("%f, %f\n", v.x, v.y);
	vector3_t v3 = {5, 10, 15};
	printf("%f, %f, %f\n", v3.x, v3.y, v3.z);
	return 0;
}
