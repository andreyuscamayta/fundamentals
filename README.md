# Pratica de Condicionais e Loops(Laços)
Complete os seguintes códigos. Lembre-se de que os códigos não são necessariamente iguais aos originais.

### Como executar o código
Altere o arquivo `.replit`alterando o nome do arquivo que quer compilar e executar:

```
language = "c"
run = "rm *.o;gcc ex1.c -o ex.o;./ex.o"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **ex1.c**.

## Exercicio 1 : Jogo Mata morcego
Arquivo a editar e modificar `ex1.c`

### Descrição
Jogo básico onde o desafio é bater ao morcego para poder ganhar. Para poder desenvolver no sistema web [SCRATCH](https://scratch.mit.edu)
## Actividades para programar
1. **Cadastrar:** Utilizar o seguinete [link para cadastro](http://scratch.mit.edu/signup/vx5hwtnf9) para poder acessar e pegar o projeto com os recursos fazendo um **REMIX**
2. **Voar sem sair da tela:** Fazer que o morcego se movimente constantemente, mas quando chegue no limite da tela ele voe em um sentido aleatorio sem sair da tela.
3. **Simular voo do morcego:** Existem 4 fantasias correlativas do morcego para poder simular o movimento, realizar troca entre todas as imagens cada certo tempo para simular voo com o *proxima fantasias*.
4. **Vasoura seguir ao mouse:** Fazer que apareca a vasoura, e que se movimente conforme ao movimento do mouse.
5. **Matar morcego:** Cada vez que o jogados faza clic, se valide se o clic foi feito sobre o morcego ou nao. Caso que seja batido o morcego, toque o som `bate` e que o morcego apareca em algum outro lugar da tela Aleatoriamente. 
6. **Contabilizar pontos:** Criar um contador de quantas vezes matou o morcego e mostrar na tela.
7. **Agregar o Projeto em Scratch:** Agregar o projeto dentro do apartado `Condicionais e Loops` dentro de SCRATCH.
8. **Mudar o ex1.c :** compartilhar o projeto e botar o link dentro do arquivo `ex1.c`


## Exercicio 2 : Trocar o if por switch
Arquivo a editar e modificar `ex2.c`
O codigo esta funcionado, se solicita mudar o codigo e que siga funcionado igualmente.
Trocar a cadeia de if pelo switch.

### Input
A primeira linha do arquivo de entrada é um inteiro **t** que denota número de casos de teste. Cada caso de teste contém um numero inteiro em cada linha que esteja entre 1 d 7. 

### Output
Para cada linha de entrada imprima o dia da semana que corresponde, `1-Segunda,2-Terca,...,7-Domingo`. Caso que a entrada seja um valor no valido, imprima a palavra *Invalido*.

### Sample Input
```
2
9
1

```

### Sample Output
```
Invalido
Segunda

```

## Exercicio 3 : Trocar for por while e viceversa
Arquivo a editar e modificar `ex3.c`

O codigo esta funcionado, se solicita mudar o codigo e que siga funcionado igualmente.
Cada vez que ache uma estrutura for, while, do-while, por outra. Por exemplo se achar um for, trocar por while ou por do-while.

### Input
A primeira linha do arquivo de entrada é um inteiro **t** que denota número de casos de teste. Cada caso de teste contém um numero inteiro em cada linha. 

### Output
Para cada linha de entrada imprima um conjunto de characteres **#** dependendo do valor de entrada.

### Sample Input
```
2
5
20

```

### Sample Output
```
###
######

```

## Exercicio 4: Tabua de Multiplicar
Arquivo a editar e modificar `ex4.c`

### Descrição
Criar a tabua de multiplicar com os primeiros 12 numeros. 


### Input
A primeira linha do arquivo de entrada é um inteiro **t** que denota número que sera utilizado para criar a tabua de multiplicacao.

### Output
A linha de entrada gerara um a tabua de multiplicar dos primeiros 12 valores **c** iniciando de 1 ate 12, seguindo o formato `  c x t = d` aonde, **d** seria o valor da multiplicacao entre *c* e *t*.


### Sample Input
```
3

```

### Sample Output
```
Tabua de multiplicar do 3
    1 x 3 = 3
    2 x 3 = 6
    3 x 3 = 9
    4 x 3 = 12
    5 x 3 = 15
    6 x 3 = 18
    7 x 3 = 21
    8 x 3 = 24
    9 x 3 = 27
    10 x 3 = 30
    11 x 3 = 33
    12 x 3 = 36
```
## Exercicio 5: Paridade
Arquivo a editar e modificar `ex5.c`

### Descrição
Um número inteiro qualquer é dito par se, ao ser dividido pelo número dois, resulta em um número inteiro, caso contrário esse número é dito ímpar.

Guilherme, precisa achar um jeito para saber se um número é par ou ímpar. 


### Input
A primeira linha do arquivo de entrada é um inteiro **t** que denota número de casos de teste. Cada caso de teste contém um numero inteiro em cada linha. 

### Output
Para cada linha de entrada imprima um caracter em uma linha com a palavra *PAR* ou *IMPAR* segundo o que corresponde.

### Sample Input
```
2
4
5

```

### Sample Output
```
PAR
IMPAR

```
