#include <stdio.h>
struct vetor
{
    float x, y, z;
} typedef Vetor;
float escalar(Vetor *v1, Vetor *v2)
{
    float produto;
    produto = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
    return produto;
}
int main(void)
{
    Vetor v1, v2;
    float produto_escalar;
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    produto_escalar = escalar(&v1, &v2);
    printf("%.2f\n", produto_escalar);
    return 0;
}