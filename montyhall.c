#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int portavazia, portapremiada, portaescolhida;

   printf("Bem vindo aojogo Monty Hall!\n");
   printf("escolha uma porta 1, 2 ou 3!\n");
   scanf("%d%*c", &portaescolhida);

   srand(time(NULL));
   portapremiada=rand()%3+1;
   printf("%d\n", portapremiada);

   do{
    portavazia=rand()%3+1;
    printf("portavazia %d\n", portavazia);
    printf("portaescolhida %d\n", portaescolhida);
    printf("portapremiada %d\n", portapremiada);
    }while(portavazia == portapremiada || portavazia == portaescolhida);

    printf("O apresentador abriu a porta vazia de numero : %d!\n", portavazia);

    char opt;
    printf("Voce gostaria de trocar de porta?\n");
    scanf("%c");
    if(opt=='s'){
        int temp = portaescolhida;
            do{
                portaescolhida=rand()%3+1;
                printf("portavazia %d\n", portavazia);
                printf("portaescolhida %d\n", portaescolhida);
                printf("portapremiada %d\n", portapremiada);
                printf("temp %d\n", temp);
            }while(portaescolhida!=temp || portaescolhida==portavazia);

        printf("trocaste\n");

    }
    if (portapremiada==portaescolhida){
        printf("voce ganhou com a porta %d!\n", portapremiada);
    }
    else{
        printf("voce perdeu a porta era a de numero %d!", portapremiada);
    }

    return 0;
}
