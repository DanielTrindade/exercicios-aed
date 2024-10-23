#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct ponto Ponto;
struct ponto
{
    float x, y;
};
typedef struct circulo Circulo;
struct circulo
{
    Ponto c;
    float r;
};
float dist(Ponto p1, Ponto p2)
{
    float distancia;
    distancia = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return distancia;
}
float comprimento(int n, Ponto *v)
{
    float comp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        comp += dist(v[i], v[i + 1]);
    }
    return comp;
}
int main(void)
{
    int tam;
    scanf("%d", &tam);
    Ponto *pontos;
    pontos = malloc(sizeof(Ponto) * tam);
    for (int i = 0; i < tam; i++)
    {
        scanf("%f %f", &pontos[i].x, &pontos[i].y);
    }
    printf("%.2f\n", comprimento(tam, pontos));
    free(pontos);
    return 0;
}