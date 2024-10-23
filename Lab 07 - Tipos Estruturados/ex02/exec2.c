#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    float radius;
} Circ;
typedef struct
{
    float base;
    float height;
} Ret;
Circ *circ_interno(Ret *r)
{
    Circ *circ;
    float radius = ((r->base < r->height) ? r->base : r->height) / 2.0;
    circ = malloc(sizeof(Circ));
    circ->radius = radius;
    return circ;
}
Ret *ret_circunscrito(Circ *c, float h)
{
    Ret *ret = malloc(sizeof(Ret));
    ret->height = h;
    ret->base = sqrt((4 * c->radius * c->radius) - (ret->height * ret->height));
    return ret;
}
int main(void)
{
    float raio, base, altura;
    Circ circunferencia;
    Ret retangulo;
    Ret *ret;
    Circ *circ;
    scanf("%f%f%f", &raio, &base, &altura);
    circunferencia.radius = raio;
    retangulo.base = base;
    retangulo.height = altura;
    circ = circ_interno(&retangulo);
    ret = ret_circunscrito(&circunferencia, retangulo.height);
    printf("%.2f\n", circ->radius);
    printf("%.2f %.2f\n", ret->base, ret->height);
    free(circ);
    free(ret);
    return 0;
}