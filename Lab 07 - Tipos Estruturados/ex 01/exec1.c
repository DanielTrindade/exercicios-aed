#include <stdio.h>
#include <math.h>
typedef struct
{
    float x, y;
} Ponto;
typedef struct
{
    Ponto c;
    float r;
} Circulo;
float distanciaOrigem(Circulo *c1, Circulo *c2)
{
    float distancia;
    distancia = sqrt(pow((c2->c.x - c1->c.x), 2) - pow((c2->c.y - c1->c.y), 2));
    return distancia;
}
int intersecao(Circulo *a, Circulo *b)
{
    float distancia = distanciaOrigem(a, b);
    float somaRaio = a->r + b->r;
    int tocam = 1;
    if (distancia > somaRaio)
    {
        tocam = 0;
    }
    return tocam;
}
int main(void)
{
    Circulo c1, c2;
    int tocam;
    scanf("%f %f %f", &c1.c.x, &c1.c.y, &c1.r);
    scanf("%f %f %f", &c2.c.x, &c2.c.y, &c2.r);
    tocam = intersecao(&c1, &c2);
    printf("%d\n", tocam);
}