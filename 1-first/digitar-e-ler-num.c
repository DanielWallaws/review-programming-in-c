#include <stdio.h> 
#include <conio.h> 

//Bibioteca necessária para habilitar o comando getch() 
					
int main(void) 

{ 
					
int num; 
printf("Digite um numero: "); 
scanf("%d", &num); 
printf("O numero digitado foi %d\n", num); 
					
getch(); //Dar uma pausa na tela de modo que o programa
//será encerrado após a digitação de uma tecla qualquer

}