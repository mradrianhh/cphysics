#include "vector2.h"

vector2_t add_vec2(vector2_t v_1, vector2_t v_2)
{
	vector2_t result = {v_1.x + v_2.x, v_1.y + v_2.y};
	return result;
}

vector2_t sub_vec2(vector2_t v_1, vector2_t v_2)
{
	vector2_t result = {v_1.x - v_2.x, v_1.y - v_2.y};
	return result;
}

vector2_t scalar_prod2(vector2_t v, float c)
{
	vector2_t result = {v.x * c, v.y * c};
	return result;
}

float inner_prod2(vector2_t v_1, vector2_t v_2)
{
	return v_1.x * v_2.x + v_1.y * v_2.y;
}




