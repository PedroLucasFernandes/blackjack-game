# Jogo Blackjack (vinte-e-um) desenvolvido em C
Blackjack ou também conhecido como vinte-e-um estilo jogador contra máquina.

***

## Autor
Pedro Lucas Fernandes Ferreira

## Proposta
Programar um Jogo Blackjack funcional e intuitivo, com o objetivo educativo de colocar em prática meus conhecimentos de Programação em C.

## Como utilizar o sistema
Insira o código em um compilador ou IDE que trabalhe com C (Dev C++ foi a IDE escolhida para o desenvolvimento), após isso compile e execute o programa.

Blackjack é um jogo simples de baralho, onde seu objetivo é ter mais pontos que o adversário, mas sem ultrapassar 21, se ultrapassar, você "estourou" e perdeu o jogo. Sua pontuação será a soma dos seus números.

Inicialmente, a aplicação irá sortear dois números (duas cartas) para você e para a máquina. Logicamente, não sabemos a pontuação atual do PC, só veremos ao final da partida. Temos a opção de sortear mais uma carta para cada, ou encerrar o jogo e ver os resultados, basta seguir as instruções abaixo. <br>
![Tela inicial](https://i.imgur.com/FBZMdl3.png)

Podemos solicitar no máximo mais 3 cartas, totalizando 5 com as duas iniciais. Após 3 sorteios, o jogo já será finalizado informando o vencedor, veja o exemplo: <br>
![Sorteando Cartas](https://i.imgur.com/uIZ17dc.png)

Mas claro, também é possível encerrar antes, se você sentir que está perto de estourar. <br>
![Encerrando o jogo](https://i.imgur.com/IagWZjJ.png)

Você deve ter percebido a mensagem "Deseja jogar mais uma vez?" ao final dos dois exemplos. Temos essa opção para o usuário não precisar reabrir o arquivo toda vez que quiser jogar. Basta digitar "1" para curtir o Blackjack mais uma vez!