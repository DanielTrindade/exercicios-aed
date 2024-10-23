# Interseção de Círculos

Considere as estruturas de *Ponto* e *Círculo* dadas a seguir:

```c
typedef struct ponto Ponto;

struct ponto {
    float x, y;
};

typedef struct circulo Circulo;

struct circulo {
    Ponto c;  // centro do circulo
    float r;  // raio
};
```

Implemente uma função que determine se dois círculos se interceptam. A função deve retornar 1, se houver interseção, ou 0, caso contrário, seguindo o protótipo:

```c
int intersecao(Circulo* a, Circulo* b);
```

## Entrada
A entrada é composta duas linhas:
* Primeira linha: c(x1,y1), r1
  * Coordenadas do centro do círculo 1 e seu respectivo raio
* Segunda linha: c(x2,y2), r2
  * Coordenadas do centro do círculo 2 e seu respectivo raio

## Saída
Como saída imprima o resultado da função *intersecao*.