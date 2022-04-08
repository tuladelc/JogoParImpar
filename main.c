#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//Função verificadora de par ou impar
bool ePar(int x){
bool retorno = false;

if (x % 2 == 0)
{
    retorno = true;
}

return(retorno);

}

int main(){

int maoComputador = 0;
int maoJogador = 0;
int jogadorParImpar = 0;
bool par = true;

//gera um conjunto de numeros baseado no tempo
srand(time(0));
//Mao do computador recebe os numeros recebidos de 0 a 10
maoComputador = rand() % 10;

printf("\t \t  /////////JOGO PAR OU IMPAR////////////");
printf("\n\n Jogador digite um numero de 0-9 \n ");
scanf("\n %i", &maoJogador);

printf("\n Jogador escolha [1] para par e [2] para impar \n");
scanf("\n %i", &jogadorParImpar);

if (jogadorParImpar == 1)
{
    par = true;
}
else{
    par = false;

}

printf("\n mao do jogador = %i", maoJogador);
printf("\n Mao do computador = %i", maoComputador);

if ((ePar(maoJogador + maoComputador) && par) || (!ePar(maoJogador + maoComputador) && !par))
{
    printf("\n Jogador venceu");


}

else {
    printf("\n Voce perdeu");
}

}