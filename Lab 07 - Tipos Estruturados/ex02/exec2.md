# Retângulos e Círculos

Defina estruturas para representar retângulos (dados a base e a altura) e círculos (dado o raio), e implemente as funções a seguir:

## (a) Retângulo Circunscrito
Dado um círculo, crie e retorne o maior retângulo circunscrito de altura h; considere que h é menor do que o diâmetro do círculo:

```c
Ret* ret_circunscrito (Circ* c, float h);
```

## (b) Círculo Interno
Dado um retângulo, crie e retorne o maior círculo interno ao retângulo:

```c
Circ* circ_interno (Ret *r);
```

## Dicas
* Os valores lidos devem ser do tipo float
* Leia o raio do círculo, base e altura do retângulo nessa ordem (raio, base, altura)
* h (altura) deve ser menor do que o diâmetro do círculo
* Observe o padrão de saída:
  * Primeira linha: raio do maior círculo em um retângulo
  * Segunda linha: base e altura do maior retângulo em um círculo