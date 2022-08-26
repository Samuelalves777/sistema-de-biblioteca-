#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
struct livro{
    char autor[20]  ;
    char titulo[20] ;
    char editora[20];
    int  codigo     ;
};
int	main(){
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    struct livro ficha[5];
    int op,i,cod=1,l=0;
    char opc;
    do{
        do{
            system("cls");
            printf("\n****  Cadastro de Livros  ****\n");
            printf(" Selecione uma op%c%co do Menu: \n\n",135,198);
            printf(" 1 - Insira um novo cadastro    \n");
            printf(" 2 - Mostrar todos os cadastros \n");
            printf(" 0 - Sair                       \n");
            printf(" *******************************\n");
            printf("     Digite a op%c%co desejada : ",135,198);
            fflush(stdin);               /* limpar o buffer do teclado antes de usar a função scanf */
            op = getch()-48;                     /* pega opção sem teclar enter                     */
            printf("\a");                        /* faz um bip                                      */
        }while(op<0 || op>2);
        system("cls");
        switch(op){
        case 0:                                  /* aqui não faz nada , mas precisa para func bem   */
            break;
        case 1:
            do{
                 if( l > 4 ){
                    printf("\n\nLISTA LOTADA\n\n");
                    system("pause"           );
                    system("cls"             );
                    break;                                    /* sair desse loop do/while                 */
                }
                system("cls");
                /*cod = rand()%100+1;                         /* gera um núnero de 1 até 100        */
                printf("Insira os dados do livro -:\n\n");
                printf("C%cdigo -------------------: %d\n",162,cod);

                ficha[l].codigo = cod;                        /* código do livro                    */

                printf("Digite o autor -----------: ");
                fflush(stdin);
                gets(ficha[l].autor);                         /* gets para pegar nome separados     */
                ficha[l].autor[strlen(ficha[l].autor)]='\0';  /* retira o newline ou quebra de linha*/

                printf("Digite o t%ctulo ----------: ",161);
                fflush(stdin);
                gets(ficha[l].titulo);                        /* gets para pegar nome separados     */
                ficha[l].titulo[strlen(ficha[l].titulo)]='\0';

                printf("Digite o nome da editora -: ");
                fflush(stdin);
                gets(ficha[l].editora);                       /* gets para pegar nome separados     */
                ficha[l].editora[strlen(ficha[l].editora)]='\0';

                l = l + 1;                                    /* quantidade de livros */
                cod = cod + 1;                                /* incrementa o contador de código do livro */
                printf("\nCadastrar Outro S/N ");
                opc = (char)getch();                          /* pegar resposta sem precisar teclar enter */

            }while(toupper(opc) != 'N' );
            break;
        case 2:
            if(l==0){
                printf("\nLISTA VAZIA\n");
                system("\npause");
                system("cls");
            }
            else
                /*if(l!=0){*//* se não é zero é porque é diferente de zero */
                printf("Todos Os Cadastros \n\n");
                for (i=0;i<l;i++){
                    printf("C%cdigo --: %d\n" ,162,ficha[i].codigo );
                    printf("Autor ---: %s\n"  ,ficha[i].autor      );
                    printf("T%ctulo --: %s\n" ,161,ficha[i].titulo );
                    printf("Editora -: %s\n\n",ficha[i].editora    );
                }
                printf("\n\n" );
                system("Pause");
                system("cls"  );
                break          ;
        default :
            printf("Op%c%co inv%clida !\n           Tecle  . . . !\n\n",135,198,160);
            getch();
        }
    }while(op != 0);
    printf("\n\n\n      Volte Sempre...       Tecle !\n\n\n");
    getch();
    return 0;
}