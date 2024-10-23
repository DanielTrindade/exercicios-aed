#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float a, b, c;
} Triangulo;
int ehTriangulo(Triangulo *t);
int ehTrianguloIsosceles(Triangulo *t);
int ehTrianguloEquilatero(Triangulo *t);
int ehTriangulo(Triangulo *t)
{
    int triangulo = 1;
    if (t->a >= t->b + t->c || t->b >= t->c + t->a || t->c >= t->b + t->a)
        triangulo = 0;
    return triangulo;
}
int ehTrianguloEquilatero(Triangulo *t)
{
    int equilatero = 0;
    if (t->a == t->b && t->b == t->c)
        equilatero = 1;
    return equilatero;
}
int ehTrianguloIsosceles(Triangulo *t)
{
    int isosceles = 0;
    if (t->a == t->b || t->b == t->c || t->a == t->c)
        isosceles = 1;
    return isosceles;
}
int verifica_triangulo(Triangulo *t)
{
    int tipo = 0;
    if (ehTriangulo(t))
    {
        if (ehTrianguloEquilatero(t))
        {
            tipo = 1;
        }
        else if (ehTrianguloIsosceles(t))
        {
            tipo = 2;
        }
        else
        {
            tipo = 3;
        }
    }
    return tipo;
}
int main(void)
{
    Triangulo t;
    while (scanf("%f %f %f", &t.a, &t.b, &t.c) != EOF)
    {
        switch (verifica_triangulo(&t))
        {
        case 0:
            printf("triangulo inexistente\n");
            break;
        case 1:
            printf("triangulo equilatero\n");
            break;
        case 2:
            printf("triangulo isosceles\n");
            break;
        default:
            printf("triangulo escaleno\n");
            break;
        }
    }
    return 0;
}