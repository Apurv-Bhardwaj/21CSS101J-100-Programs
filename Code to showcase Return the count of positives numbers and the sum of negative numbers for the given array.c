#include <stdio.h>
int main()
{
printf("RA2211042010050");
  int a,b,i,pos,neg;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    scanf("%d",&b);
    if(b>0)
      pos=pos+1;
    else
      neg=neg+b;
  }
  printf("%d\n",pos);
  printf("%d\n",neg);
  return 0;
}
