#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
struct book
{
char titulo[81];
char autor[41];
char editora[31];
int pg; /* numerodepaginas */
int ano;
};
struct book livro[N];
int i;
char temp[5];
for(i=0;i<N;i++)
{
printf("Livro%d\n",i+1);
printf("Digite o titulo do livro:");
gets(livro[i].titulo);
printf("Digite o nome do autor:");
gets(livro[i].autor);
printf("Digite o numero de paginas:");
gets(temp);
livro[i].pg=atoi(temp);
printf("Ano da publicacao:");
gets(livro[i].ano);
printf("Nome da editora:");
gets(temp);
printf("\n");
}
/* impressão */
for(i=0;i<N;i++)
{
fprintf("-----Livro%d-----\n",i+1);
fprintf("Titulo:\t%s\n",livro[i].titulo);
fprintf("Autor:\t\t%s\n",livro[i].autor);
fprintf("Paginas:\t%d\n",livro[i].pg);
fprintf("Editora:\t%d\n",temp);
fprintf("Ano:\t%d\n",livro[i].ano);
}
system("pause");
}
