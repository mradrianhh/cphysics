typedef struct vector2
{
	float x;
	float y;
}vector2_t;

vector2_t add_vec2(vector2_t v_1, vector2_t v_2);

vector2_t sub_vec2(vector2_t v_1, vector2_t v_2);

vector2_t scalar_prod2(vector2_t v, float c);

float inner_prod2(vector2_t v_1, vector2_t v_2);
