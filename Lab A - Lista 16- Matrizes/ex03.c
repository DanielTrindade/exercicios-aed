#include <stdio.h>
int main(void)
{
    // Uma matriz de caracteres ou um vetor de strings contendo o tabuleiro inicialmente vazio.
    // Observe que ela possui 22 linhas e 13 colunas. Isso é porque o tabuleiro do Tetris
    // possui 22 linhas e 12 colunas. A estrutura de dados requer uma coluna a mais para que
    // cada linha da matriz funcione como uma string (contém o byte 0 no final).
    char tabuleiro[22][13] = {
        "+----------+",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "|..........|",
        "+----------+",
    };
    int pos;
    while (scanf("%d", &pos), pos != 0)
    {
        int i = 1;
        while (tabuleiro[i][pos] == '.' && tabuleiro[i + 1][pos] == '.' && tabuleiro[i][pos + 1] == '.' && tabuleiro[i + 1][pos + 1] == '.')
        {
            i += 2;
        }
        i -= 2;
        tabuleiro[i][pos] = '#';
        tabuleiro[i][pos + 1] = '#';
        tabuleiro[i + 1][pos] = '#';
        tabuleiro[i + 1][pos + 1] = '#';
    }
    for (int i = 0; i < 22; i++)
    {
        printf("%s\n", tabuleiro[i]);
    }
}