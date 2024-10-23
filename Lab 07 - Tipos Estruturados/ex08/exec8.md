# Cálculo de Distância entre Datas

Faça um programa que leia um número N seguido de N datas, no formato dia/mes/ano (utilize uma struct para as datas). Em seguida, seu programa deve ler um número M, seguido de M operações no formato:
```
A B
C D
```
Onde A, B, C e D são números inteiros representando quais datas serão usadas. O seu programa deve imprimir quantos dias de distância existem entre as duas datas.

## Exemplo

### Entrada
```
3
10/10/17
15/10/17
2/11/17
4
0 1
0 2
2 1
2 0
```

### Saída
```
5
23
18
23
```

## Dicas

* Considere que nenhum ano bissexto será passado
* Para ler uma data no formato DD/MM/AAAA utilize a seguinte string no scanf:
```c
"%hhu/%hhu/%hu"
```

* Utilize o vetor:
```c
unsigned char meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
```

* Utilize a struct:
```c
typedef struct{
    unsigned char dia, mes;
    short unsigned ano;
} Data;
```