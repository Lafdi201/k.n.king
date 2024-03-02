#include <stdio.h>
int main(void)
{
  float loan,ir,montPay,fmont,smont,thmont,ir_mont;
  printf("enter amount of loan:");
  scanf("%f",&loan);
  printf("enter Interest rate:");
  scanf("%f",&ir);
  printf("enter monthly payment:");
  scanf("%f",&montPay);
  ir_mont=ir/(12*100);
  fmont=loan*(1+ir_mont)-montPay;
  smont=fmont*(1+ir_mont)-montPay;
  thmont=smont*(1+ir_mont)-montPay;
  printf("Amount after first payment: %.2f\n",fmont);
  printf("Amount after second payment: %.2f\n",smont);
  printf("Amount after third payment: %.2f\n",thmont);
  return 0;
}
