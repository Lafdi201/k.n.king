#include <stdio.h>
int main(void)
{
  int amount;
  int i=0,j=0,k=0,l=0;
  printf("enter the amount:");
  scanf("%d",&amount);
  i=(amount)/ 20;
  j=(amount - 20 * i ) / 10;
  k=(amount - 20 * i - 10 * j ) / 5;
  l=(amount - 20 * i - 10 * j - 5 * k);
  printf("$20 bills : %d \n",i);
  printf("$10 bills : %d \n",j);
  printf("$5 bills : %d \n",k);
  printf("$1 bills : %d \n",l);

  return 0;
}