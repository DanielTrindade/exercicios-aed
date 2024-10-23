#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x, y;
} Ponto;
int dentroRet(Ponto *v1, Ponto *v2, Ponto *p)
{
    return !(p->x < v1->x || p->x > v2->x || (p->y < v1->y || p->y > v2->y));
}
int main(void)
{
    Ponto pontoIE, pontoSD, ponto;
    scanf("%d %d", &pontoIE.x, &pontoIE.y);
    scanf("%d %d", &pontoSD.x, &pontoSD.y);
    scanf("%d %d", &ponto.x, &ponto.y);
    printf("%d\n", dentroRet(&pontoIE, &pontoSD, &ponto));
    return 0;
}