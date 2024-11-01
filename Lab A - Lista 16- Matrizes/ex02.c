#include <stdio.h>
#define VAZIO 0
#define MOEDA 1
#define ZUMBI 5
void proximoMovimento(char mov, int *posX, int *posY)
{
    switch (mov)
    {
    case 'A':
        *posY = *posY - 1;
        break;
    case 'S':
        *posX = *posX + 1;
        break;
    case 'D':
        *posY = *posY + 1;
        break;
    case 'W':
        *posX = *posX - 1;
        break;
    }
}
void jogarManoJoe(int m, int mapa[][m], char *movs, int *posX, int *posY, int *vida, int *moedas)
{
    char *mov = movs;
    if (mapa[*posX][*posY] == ZUMBI)
    {
        *vida -= 5;
        if (*vida < 0)
        {
            *vida = 0;
        }
    }
    else if (mapa[*posX][*posY] == MOEDA)
    {
        mapa[*posX][*posY] = 0;
        *moedas += 1;
    }
    while (*mov != 0 && *vida > 0)
    {
        proximoMovimento(*mov, posX, posY);
        if (mapa[*posX][*posY] == ZUMBI)
        {
            *vida -= 5;
            if (*vida < 0)
            {
                *vida = 0;
            }
        }
        else if (mapa[*posX][*posY] == MOEDA)
        {
            mapa[*posX][*posY] = 0;
            *moedas += 1;
        }
        mov++;
    }
}
int main(void)
{
    int moedas, vida;
    int posX, posY;
    int n, m;
    int jogo = 1;
    while (scanf("%d %d", &n, &m), n != 0 || m != 0)
    {
        int mapa[n][m];
        char movs[201];
        posX = posY = moedas = 0;
        vida = 42;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &mapa[i][j]);
            }
        }
        scanf("%s", movs);
        jogarManoJoe(m, mapa, movs, &posX, &posY, &vida, &moedas);
        printf("Jogo %d\n", jogo);
        printf("pos: %d, %d\n", posX, posY);
        printf("moedas: %d\n", moedas);
        printf("vida: %d\n", vida);
        jogo++;
    }
    return 0;
}