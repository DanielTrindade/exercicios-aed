# Produto Escalar de Vetores 3D

Considerando uma estrutura para representar um vetor no espaço 3D, implemente uma função que calcule o produto escalar de dois vetores. Essa função deve obedecer ao protótipo:

```c
float escalar(Vetor* v1, Vetor* v2);
```

## Entrada
A entrada consiste das componentes dos dois vetores v1(x,y,z) e v2(x,y,z).

## Saída
A saída corresponde a saída da função escalar.

## Dicas

* Utilize a struct:
```c
typedef struct {   
    int x;
    int y;
    int z;
} Vetor;
```