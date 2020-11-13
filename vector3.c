#include "vector3.h"

vector3_t add_vec3(vector3_t v_1, vector3_t v_2)
{
	vector3_t result = {v_1.x + v_2.x, v_1.y + v_2.y, v_1.z + v_2.z};
	return result;
}

