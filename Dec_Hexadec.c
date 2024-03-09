#include <stdio.h>
#include<string.h>

 
int main() {
 
   int V;
   scanf("%i",&V);
   char Nums[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   int hex;
   char tentativa[8];
   char string_real[8];
   int i=0; 
   int count=0;
   //preencher string com os restos de divisão mudados para hexadecimal
   do{
       hex= V % 16;
       V = V / 16;
       tentativa[i]=Nums[hex];
       i++;
       count++;
   }while(V>0);
   
   
   //inverter a string
   for(int j=0; j<count; j++){
       
       //tentativa[count-1]=string_real[j];
       string_real[j]=tentativa[count-j-1];
       //printf("*");
     
   } 
   //imprimir a string na tela
   for(int a=0; a<count ; a++){
       
       printf("%c", string_real[a]);
   }
 printf("\n");
    return 0;
}
