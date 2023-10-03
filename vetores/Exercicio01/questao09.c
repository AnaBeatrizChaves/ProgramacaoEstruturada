#include<stdio.h>

main(){
int num[6];

  for(int i=0;i<6 ;i++){
      
     printf("\nDigite um numero par:\n");
     scanf("%d",&num[i]);

      if(num[i]%2 !=0){
        printf("\nO numero digitado, não é um numero par.\n");
         i--;
      }
  }

   for(int i=5;i<6 ;i--){
     printf("\n%d",num[i]);

     if(num[i]==num[0]){
       break;
     }
   }
}
