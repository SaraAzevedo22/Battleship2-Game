Jogo battleship

Comandos para executar e compilar com a Quad Tree:
$ gcc -o main main.c battleship.c
$ gcc -Wall -o battleship main.c battleship.c -DQUAD
$ ./main


Comandos para executar e compilar com Matrizes:
$ gcc -o main main.c battleship.c
$ gcc -Wall -o battleship main.c battleship.c
$ ./main


Comando para fazer make:
$make all

Comando para limpar:
$ make clean


FUNCIONAMENTO DO JOGO:

O jogo inicia-se pedindo ao utilizador(es) um tamanho para o tabuleiro.
De seguida é pedido, apenas uma vez, o número de cada tipo de barcos que pretendem.
Para este trabalho, implentamos 5 tipos, todos com tamanhos predifinidos:
-Barcos em forma da letra "C"
-Barcos quadrados
-Barcos em forma da letra "X"
-Barcos em forma da letra "L"
-Barcos horizontais 


No fim da introdução de barcos, verificamos através de uma formula se o número introduzido cabe dentro do tabuleiro e também se este número é "aceitável" para que o jogo seja competitivo o suficiente.
Ambos os jogadores tem a possibilidade de colocar os barcos no tabuleiro de forma automática ou aleatória.
Se o jogador decidir fazer este processo de forma manual, tem ainda a possibilidade de escolher uma rotação para cada tipo de barco


Antes do começo do jogo, o utilizador confirma que quer começar o jogo, e ao fazer esta confirmação. A shell é limpa para que ambos os jogadores não possam ter acesso de modo algum ao tabuleiro do adversário e saber o posicionamento dos barcos adversários.

Durante o jogo, ambos os jogadores, tentam descobrir aonde se encontram os barcos adversários.
Quanto o jogador em questão acert num barco, este é avisado, bem como quando falha e quando afunda um barco.

O jogo termina quando um dos jogadores afunda todos os barcos do seu oponente!


CÓDIGO:
Em cima de cada construtor/função, está explicado o que a mesma faz. 
O nome das variáveis que escolhemos faz também com que o código se torne mais legível
