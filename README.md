# Jogo Blackjack (vinte-e-um) desenvolvido em C
Blackjack ou também conhecido como vinte-e-um estilo jogador contra máquina.

***

## Autor
Pedro Lucas Fernandes Ferreira

## Proposta
Programar um Jogo Blackjack funcional e intuitivo, com o objetivo educativo de colocar em prática meus conhecimentos de Programação em C.

## Como utilizar o sistema
Insira o código em um compilador ou IDE que trabalhe com C (Dev-C++ foi a IDE escolhida para o desenvolvimento), após isso compile e execute o programa.

Blackjack é um jogo simples de baralho, onde seu objetivo é ter mais pontos que o adversário, mas sem ultrapassar 21, se ultrapassar, você "estourou" e perdeu o jogo. Sua pontuação será a soma dos seus números.

Inicialmente, a aplicação irá sortear dois números (duas cartas) para você e para a máquina. Logicamente, não sabemos a pontuação atual do PC, só veremos ao final da partida. Temos a opção de sortear mais uma carta para cada, ou encerrar o jogo e ver os resultados, basta seguir as instruções abaixo. <br>
![Tela inicial](https://i.imgur.com/FBZMdl3.png)

Podemos solicitar no máximo mais 3 cartas, totalizando 5 com as duas iniciais. Após 3 sorteios, o jogo já será finalizado informando o vencedor, veja o exemplo: <br>
![Sorteando Cartas](https://i.imgur.com/uIZ17dc.png)

Mas claro, também é possível encerrar antes, se você sentir que está perto de estourar. <br>
![Encerrando o jogo](https://i.imgur.com/IagWZjJ.png)

Você deve ter percebido a mensagem "Quer jogar mais uma vez?" ao final dos dois exemplos. Temos essa opção para o usuário não precisar reabrir o arquivo toda vez que quiser jogar. Basta digitar "1" para curtir o Blackjack mais uma vez!

## Como foi desenvolvido
A linguagem C foi a única a ser utilizada para o desenvolvimento, utilizando a IDE Dev-C++.

### Bibliotecas
Algumas bibliotecas foram necessárias para o funcionamento do Blackjack:

- ``#include<stdio.h>``: Responsável pelos comandos ``printf()`` e ``scanf()``, o input e output da aplicação.
- ``#include<time.h>``: Possibilita o comando ``time(NULL)`` para conceder uma semente aleatória nos sorteios.
- ``#include<stdlib.h>``: Disponibiliza as funções ``srand()`` e ``rand()``, que permitem o sorteio dos números no jogo.
- ``#include<string.h>``: Responsável pelo ``strcat()``, que faz a concatenação de uma string no código.

### Verificações e laços de repetição
Uma variável de controle ``i`` foi feita com o valor "4" para ser condição em um laço de repetição além de uma verificação.

Todo o processo de sorteio de cartas ocorre dentro de um ``while(i > 0)`` onde no final temos um ``i --`` para ter certeza que este sorteio ocorrerá apenas 4 vezes, a inicial mais as outras 3 restantes.

Mas temos uma diferença entre o sorteio inicial dos outros, já que o primeiro seleciona duas cartas para os jogadores, e os posteriores apenas 1. Isso se dá por um ``if(i == 4)`` quando este if tem sua condição aceita (apenas na primeira vez), sorteamos dois números, caso contrário, apenas um será disponibilizado.

Nos próximos sorteios temos o seguinte trecho de código:

``bash
voce[j] = (rand() % 10) + 1;
pc[j] = (rand() % 10) + 1;
		
while(voce[j] == voce[0] || voce[j] == voce[1]){
	voce[j] = (rand() % 10) + 1;
}
				
while(pc[j] == pc[0] || pc[j] == pc[1]){
	pc[j] = (rand() % 10) + 1;
}
``

Seu papel é evitar a duplicação de números, pois sabemos que em um baralho existem apenas 4 cartas de um mesmo número.

Por fim, temos algumas verificações para divulgar os resultados, pois você pode perder, empatar, ou vencer. Sem contar que este resultado pode ser justificado por motivos diferentes, você pode vencer por ter mais pontos, ou por seu adversário ter "estourado".

Confira as possíveis respostas:

- "Voce Ganhou! Voce maior que PC"
- "Voce Ganhou! PC passou de 21 e estourou!"
- "Empate! Os dois tiveram a mesma pontuacao!"
- "Empate! Voce maior que PC"
- "PC Ganhou! Os dois passaram de 21!"
- "PC Ganhou! Voce passou de 21 e estourou!"