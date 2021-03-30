# Exercicios Basicos
Complete os seguintes códigos. Lembre-se de que os códigos não são necessariamente iguais aos originais.

## Como executar o código
Altere o arquivo `.replit`alterando o nome do arquivo que quer compilar e executar:

### Lenguagem C
```
language = "c"
run = "rm *.o;gcc ex1.c -o ex.o;./ex.o"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.c**.

### Lenguagem C++
```
language = "c++"
run = "rm *.o;g++ ex1.cpp -o ex.o;./ex.o"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.cpp**.

### Lenguagem Java
```
language = "java"
run = "rm *.class;javac ex1.java;java ex1"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.java**.

### Lenguagem C#
```
language = "c#"
run = "rm *.exe;mcs -out:o.exe  ex1.cs;mono o.exe"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.cs**.

### Lenguagem python 
```
language = "python"
run = "python ex1.py"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.py**.

## Exercicio 01: Primos
Programar em C
Arquivo a editar e modificar `ex01.c`

### Descrição
Número primo é qualquer número p cujo conjunto dos divisores não inversíveis não é vazio, e todos os seus elementos são produtos de p por números inteiros inversíveis. De acordo com esta definição, 0, 1 e -1 não são números primos.

### Input
A entrada representa varios casos de teste, seguidos de uma linha contendo **0 0**.
Cada caso de teste tem dois numeros inteiros positivos `a e b aonde (a<b)`

### Output
Para cada linha de entrada, produce uma linha de saida. A linha deve conter a soma de todos os numeros primos existentes entre a e b, incluindo-lhes.
Por exemplo, se a fosse 2 e b fosse 10, a saida seria 17 producido de somar(2+3+5+7).

### Sample Input
```
2 10
0 10
0 0

```

### Sample Output
```
17
17

```

## Exercicio 02: Fatorial 
Programar em C++
Arquivo a editar e modificar `ex02.cpp`

### Descrição
Na matemática, o fatorial de um número natural n, representado por n!, é o produto de todos os inteiros positivos menores ou iguais a n. A notação n! foi introduzida por Christian Kramp em 1808.

```
n! = n*(n-1)!
0! = 1
1! = 1 * 0! = 1
2! = 2 * 1! = 2
3! = 3 * 2! = 6
```

### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`.

### Output
Para cada linha de entrada, produce uma linha de saida. A linha deve conter o n-essimo numero fatorial.
Se o valor `a` fosse negativo, deveria terminar o programa.


### Sample Input
```
0
5
-1

```

### Sample Output
```
1
120

```
## Exercicio 03: Fibonacci 
Programar em Java
Arquivo a editar e modificar `ex03.java`

### Descrição
Na matemática, a sucessão de Fibonacci (ou sequência de Fibonacci), é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual cada termo subsequente corresponde à soma dos dois anteriores.

![](img/fibonacci.png)

```
f(0) = 0
f(1) = 1
f(2) = f(1) + f(0) = 1
f(3) = f(2) + f(1) = 2
f(4) = f(3) + f(2) = 3
```

### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`.

### Output
Para cada linha de entrada, produce uma linha de saida. A linha deve conter o n-essimo numero da sequencia de fibonacci.
Se o valor `a` fosse negativo, deveria terminar o programa.


### Sample Input
```
0
5
-1

```

### Sample Output
```
0
5
```
## Exercicio 04: Numero Harmônico
Programar em C#
Arquivo a editar e modificar `ex04.cs`

### Descrição
Os números harmônicos têm sido estudados desde os tempos antigos e são importantes em muitos ramos da teoria dos números. Às vezes, é vagamente chamada de série harmônica.

Em matemática, o enésimo número harmônico é definido como a soma dos recíprocos dos primeiros n números naturais:

![](img/armonico.png)

```
H1 = 1/1
H2 = 1/1 + 1/2
H3 = 1/1 + 1/2 + 1/3
Hn = 1/1 + 1/2 + 1/3 + ... + 1/n
```

### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`.

### Output
Para cada linha de entrada, produce uma linha de saida. A linha deve conter a soma dos primeiros numero armonicos mostrando com 2 decimais. 
Se o valor `a` fosse negativo, deveria terminar o programa.


### Sample Input
```
1
2
-1

```

### Sample Output
```
1.00
2.50

```

## Exercicio 05: Quadrado
Programar em Python
Arquivo a editar e modificar `ex05.py`

### Descrição
O quadrado é um quadrilátero regular, ou seja, uma figura geométrica com quatro lados de mesmo comprimento e quatro ângulos retos. 
Vamos a desenhar um quadrado em saida padrao.

### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`. A entrada finaliza quando o valor `a` seja zero ou negativo

### Output
Para cada linha de entrada, produce um conjunto de linhas de saida. Cada conjunto de linhas deve Representar visualmente um quadrado composto por o character`#`.
Se o valor `a` fosse zero ou negativo, deveria terminar o programa.

### Sample Input
```
2
4
0
```

### Sample Output
```
##
##
####
####
####
####
```

## Exercicio 06: Borda
Programar em C
Arquivo a editar e modificar `ex06.c`

### Descrição
Vamos a desenhar um padrao de borda de um quadrado em saida padrao.

### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`. A entrada finaliza quando o valor `a` seja zero ou negativo

### Output
Para cada linha de entrada, produce um conjunto de linhas de saida. Cada conjunto de linhas deve Representar visualmente uma borda composto por o character`#`.
Se o valor `a` fosse zero ou negativo, deveria terminar o programa.

### Sample Input
```
2
4
0
```

### Sample Output
```
##
##
####
#  #
#  #
####
```

## Exercicio 07: Egito
Programar em C++
Arquivo a editar e modificar `ex07.cpp`

### Descrição
Há muito tempo, os egípcios descobriram que um triângulo com lados de comprimento 3, 4 e 5 tinha um ângulo reto como seu maior ângulo. Você deve determinar se outros triângulos têm uma propriedade semelhante.
![](https://pt-static.z-dn.net/files/d03/4d404b36f1418336b994e3ed7febcc90.png)
### Input
A entrada representa vários casos de teste, seguidos por uma linha contendo '0 0 0'. Cada caso de teste tem três inteiros positivos, denotando os comprimentos dos lados de um triângulo.

### Output
Para cada caso de entrada, mostrara uma linha contendo **certo** se for um triângulo retângulo e uma linha contendo **errado** se o triângulo não for retângulo.

### Sample Input
```
6 8 10
25 52 60
5 12 13
0 0 0

```

### Sample Output
```
certo
errado
certo

```
## Exercicio 08: Operador Relacional
Programar em Java
Arquivo a editar e modificar `ex08.java`

### Descrição
Alguns operadores verificam a relação entre dois valores numericos que são chamados de operadores relacionais. Dados dois valores numéricos, seu trabalho é apenas descobrir a relação entre eles que é (i) o primeiro é maior que o segundo (ii) o primeiro é menor que o segundo ou (iii) o primeiro e o segundo são iguais.

### Input
A primeira linha do arquivo de entrada é um inteiro `t` que denota quantos conjuntos de entradas existem.
Cada uma das próximas t linhas contém dois inteiros `a` e `b`.


### Output
Para cada linha de entrada, produza uma linha de saída. Esta linha contém qualquer um dos operadores relacionais **>**, **<** ou **=**, o que indica a relação que é apropriada para os dois números dados.

### Sample Input
```
3
10 20
20 10
10 10

```

### Sample Output
```
<
>
=

```
## Exercicio 09: Soma dos impares
Programar em C#
Arquivo a editar e modificar `ex09.cs`

### Descrição
Dado um intervalo [a, b], você deve encontrar a soma de todos os inteiros ímpares neste intervalo. Por exemplo, a soma de todos os inteiros ímpares no intervalo [3, 9] é 3 + 5 + 7 + 9 = 24.

### Input
Pode haver vários casos de teste. A primeira linha de entrada fornece o número de casos de teste, `T`. Em seguida, os casos de teste `T` seguem. Cada caso de teste consiste em 2 inteiros `a` e `b` separados por um espaco na mesma linha.


### Output
Para cada caso de teste, você deve imprimir uma linha de saída - o número de série do caso de teste seguido pela soma dos inteiros ímpares no intervalo [a, b].

### Sample Input
```
2
1 5
3 5

```

### Sample Output
```
Teste 1: 9
Teste 2: 8

```


## Exercicio 10: Reducao de costos
Programar em python
Arquivo a editar e modificar `ex10.py`

### Descrição
A empresa Yura foi duramente atingida pela recessão e está tomando várias medidas de corte de custos.
Eles têm três (3) funcionários trabalhando na área de contabilidade e vão demitir dois (2) deles. Depois de uma série de reuniões, eles decidiram desalojar quem ganha mais e quem ganha menos. Essa geralmente é a tendência geral durante crises como esta.
Você receberá os salários desses 3 funcionários que trabalham no departamento de contabilidade. Você tem que descobrir o salário da pessoa que sobreviveu.


### Input
A primeira linha de entrada é um inteiro `T`que indica o número de casos de teste. Cada caso consiste em uma linha com 3 inteiros positivos distintos. Esses 3 inteiros representam os salários dos três funcionários.

### Output
Para cada caso, imprima o salário da pessoa que sobreviveu.


### Sample Input
```
3
1000 2000 3000
3000 2500 1500
1500 1200 1800

```

### Sample Output
```
2000
2500
1500

```
## Exercicio 11:  Mario 1
Programar em C
Arquivo a editar e modificar `ex11.c`

### Descrição
Perto do final do Mundo 1-1 no Super Mario Bros, Mario deve ascender a pirâmide de blocos alinhada à direita.
![](img/mario1.png)
Vamos recriar essa pirâmide como texto, usando hashes (#)para os tijolos. Cada hash é um pouco mais alto do que largo, então a pirâmide em si também é mais alta do que larga.
```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```
### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`. A entrada finaliza quando o valor `a` seja zero ou negativo

### Output
Para cada linha de entrada, produce um conjunto de linhas de saida. Cada conjunto de linhas deve representar visualmente uma pirâmide composto por hashes `#`.
Se o valor `a` fosse zero ou negativo, deveria terminar o programa.


### Sample Input
```
2
4
0

```

### Sample Output
```
 #
##
   #
  ##
 ###
####
```
## Exercicio 12: Mario 2
Programar em C++
Arquivo a editar e modificar `ex12.cpp`

### Descrição
Perto do final do Mundo 1-1 no Super Mario Bros,Mario deve pular sobre as pirâmides de blocos adjacentes.
![](img/mario2.png)
Vamos recriar essas pirâmides em texto, usando hashes (#) para tijolos, a la a seguir. Cada hash é um pouco mais alto do que largo, então as pirâmides em si também são mais altas do que largas.
```
   #  #
  ##  ##
 ###  ###
####  ####
```
### Input
A entrada representa varios casos de teste, cada caso de teste tem um numero inteiro positivo `a`. A entrada finaliza quando o valor `a` seja zero ou negativo

### Output
Para cada linha de entrada, produce um conjunto de linhas de saida. Cada conjunto de linhas deve representar visualmente uma pirâmide composto por hashes `#`.
Se o valor `a` fosse zero ou negativo, deveria terminar o programa.


### Sample Input
```
2
4
0

```

### Sample Output
```
 # #
## ##
   # #
  ## ##
 ### ###
#### ####
```

## Exercicio 13: 
Programar em Java
Arquivo a editar e modificar `ex13.java`

### Descrição
Ao fazer o troco, é provável que você queira minimizar o número de moedas que está devolvendo para cada cliente, para que não acabe (ou irrite o cliente!). 

No Brasil, existem moeadas de 1 real,50 centavos, 25 centavos, 10centavos e 5 centavos.

Imaginemos que temos moeadas infintas com todos os valores mencionados anteriormente e precisamos um algoritmo que determine quantas moedas se dara de troco.

Imaginemos que o cliente quer comprar uma bolacha que custa R$ 1,30. O clinete paga com R$ 2,00. Ele receberia R$ 0,70 de troco com uma moeda de 50 centavos e duas de 10 centavos. Em total 3 moeadas. 


### Input
A entrada representa varios casos de teste, cada caso de teste esta composto por dois numero flotantes positivos `a` e `b`.O primeiro valor `a` representa o valor do produto que o cliente quer comprar e `b` representa o dinheriro que o cliente utiliza para pagar. A entrada finalizara quando tanto `a` quanto `b` seriam zeros. 

### Output
Para cada linha de entrada, produce uma saida composta de 2 numero separados por um espaco. O primeiro numero seria um inteiro positivo representaria o numero de moedas que o cliente recebera de troco. O segundo numero seria um numero flotante com 2 decimais que representaria o valor do troco em formato de moeda brasileira (R$)


### Sample Input
```
1.3 2
1 2
0 0

```

### Sample Output
```
3 R$0.70
1 R$1.00
```
## Exercicio 14: O Troco
Programar em Python
Arquivo a editar e modificar `ex14.py`

### Descrição
Ao fazer o troco, é provável que você queira minimizar o número de moedas que está devolvendo para cada cliente, para que não acabe (ou irrite o cliente!). 

No Brasil, existem moeadas de 1 real,50 centavos, 25 centavos, 10centavos e 5 centavos.

Imaginemos que temos moeadas infintas com todos os valores mencionados anteriormente e precisamos um algoritmo que determine quantas moedas se dara de troco.

Imaginemos que o cliente quer comprar uma bolacha que custa R$ 1,30. O clinete paga com R$ 2,00. Ele receberia R$ 0,70 de troco com uma moeda de 50 centavos e duas de 10 centavos. Em total 3 moeadas. 


### Input
A entrada representa varios casos de teste, cada caso de teste esta composto por dois numero flotantes positivos `a` e `b`.O primeiro valor `a` representa o valor do produto que o cliente quer comprar e `b` representa o dinheriro que o cliente utiliza para pagar. A entrada finalizara quando tanto `a` quanto `b` seriam zeros. 

### Output
Para cada linha de entrada, produce 5 linhas de saida. Que representaria o numero de moedas para os tipos existentes de moedas que o cliente recebera de troco. 
Seguindo o seguinte formato:
```
R$1.00 : A
R$0.50 : B
R$0.25 : C
R$0.10 : D
R$0.05 : E
```
Onde A,B,C,D,E sao valores inteiros maiores o iguais a 0. Que indicam a quantidade de moedas que o cliente recebe de troco

### Sample Input
```
1.3 2
0 0

```

### Sample Output
```
R$1.00 : 0
R$0.50 : 1
R$0.25 : 0
R$0.10 : 2
R$0.05 : 0
```
## Exercicio 15: Validando CPF
Programar em C#
Arquivo a editar e modificar `ex15.cs`

### Descrição
O CPF é um número formado por 11 dígitos dos quais os dois últimos são chamados de dígitos verificadores (**DV**). Cada DV é calculado com base nos dígitos anteriores e juntos servem para validar o número do CPF como um todo.
![](https://www.serasa.com.br/ensina/wp-content/uploads/2017/10/18105213/o-que-e-cpf-1-768x490.jpg)

Para exemplificar o algoritmo de verificação do CPF será utilizado como exemplo o CPF número ``546.471.429-49``.

O cálculo dos DVs é executado em duas etapas usando para isto o módulo de divisão 11 (módulo de divisão é a parte inteira do resultado de uma divisão):

#### Para calcular o 1º dígito verificador
Cada um dos nove primeiros números do CPF é multiplicado por um peso que começa de 10 e que vai sendo diminuido de 1 a cada passo, somando-se as parcelas calculadas:
```
sm = (5*10)+(4*9)+(6*8)+(4*7)+(7*6)+(1*5)+(4*4)+(2*3)+(9*2) 
sm = 249;
```
O próximo passo da verificação também é simples, basta multiplicarmos esse resultado por 10 e calcular o resto da divisao por 11.
```
(sm*10)%11
(249*10)%11
4
```
#### Para calcular o 2º dígito verificador
Cada um dos dez primeiros números do CPF, considerando-se aqui o primeiro DV, é multiplicado por um peso que começa de 11 e que vai sendo diminuido de 1 a cada passo, somando-se as parcelas calculadas:
```
sm = (5*11)+(4*10)+(6*9)+(4*8)+(7*7)+(1*6)+(4*5)+(2*4)+(9*3)+(4*2) 
sm = 299;
```
Seguindo o mesmo processo da primeira verificação, multiplicamos por 10 e dividimos por 11.
```
(sm*10)%11
(299*10)%11
9
```
Existe alguns casos de CPFs que passam nessa validação que expliquei, mas que ainda são inválidos. É os caso dos CPFs com dígitos repetidos (111.111.111-11, 222.222.222-22, ...)

Esses CPF atendem à validação, mas ainda são considerados inválidos.
### Input
A entrada representa varios casos de teste, cada caso de teste esta composto por um numero `a`que representa o numero CPF. A entrada finalizara quando tanto `a` seja zero. 

### Output
Para cada linha de entrada, mostrara um texto **VALIDO** ou **INVALIDO** que seria a comprovacao de validez do cpf digitado

### Sample Input
```
54647142949
11111111111
0
```

### Sample Output
```
VALIDO
INVALIDO
```