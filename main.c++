#include<stdio.h>
#include<conio.h>
/*
Nome da função: Soma
recebe como parâmetos dois valores inteiros (N1,N2)
objetivo: Soma os valores recebidos nos parâmetros.
retorno: um parâmetro inteiro (res) contendo o resultado
*/
int Soma(int N1, int N2) //Soma recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 + N2;
  return(resultado); //retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void)
{
  int V1, V2, resultado;
  printf("Digite o primeiro valor: ");
  scanf("%d", &V1);
  printf("Digite o segundo valor: ");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = Soma(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  
  getch();
  return 0;
}