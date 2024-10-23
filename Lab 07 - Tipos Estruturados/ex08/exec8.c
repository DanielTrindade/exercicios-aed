#include <stdio.h>
#include <stdlib.h>
unsigned char meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
typedef struct
{
    unsigned char dia, mes;
    short unsigned ano;
} Data;
int diasInicio(Data *data)
{
    int dias = data->dia;
    for (int i = 0; i < data->mes - 1; ++i)
    {
        dias += meses[i];
    }
    return dias + (365 * data->ano);
}
int diferenca(Data *data1, Data *data2) 
{ 
    return abs(diasInicio(data1) - diasInicio(data2)); 
}
int main(void)
{
    int tam, operacoes;
    Data *datas;
    scanf("%d", &tam);
    datas = malloc(sizeof(tam) * tam);
    for (int i = 0; i < tam; ++i)
    {
        scanf("%hhu/%hhu/%hu", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }
    scanf("%d", &operacoes);
    while (operacoes)
    {
        int pos1, pos2;
        scanf("%d %d", &pos1, &pos2);
        printf("%d\n", diferenca(&datas[pos1], &datas[pos2]));
        operacoes--;
    }
    free(datas);
    return 0;
}