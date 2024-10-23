#include <stdio.h>
typedef struct
{
    int x;
    int y;
    int z;
} Vetor;
float escalar(Vetor *v1, Vetor *v2)
{
    float produto_escalar;
    produto_escalar = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
    return produto_escalar;
}
int main(void)
{
    Vetor v1, v2;
    float produto;
    scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
    scanf("%d %d %d", &v2.x, &v2.y, &v2.z);
    produto = escalar(&v1, &v2);
    printf("%.2f\n", produto);
    return 0;
}