#include<stdio.h>
int main()
{
printf("RA2211042010050");
  int a,b;
  float loss,tot;
  scanf("%d%d",&a,&b);
  if(a==0)
  {
    printf("%d",a);
  }
  else
  {
  loss=a*(b*0.01);
  tot=a-loss;
  printf("The selling price of the cycle is Rs=%.2f",tot);
  }
  return 0;
}
