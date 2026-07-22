#include <stdio.h>
int main(){

      int num,square;

      printf("Enter a Number:");
      scanf("%d",&num);

      square=num*num;

      printf("------------\n");
      printf("|           |\n");
      printf("|           |\n");
      printf("|%d * %d %d |\n",num,num,square);
      printf("|           |\n");
      printf("------------");
      return 0;

}