#include <stdio.h>
int main()
{
printf("RA2211042010050");
  int sum,n=1,a;
  scanf("%d",&a);
  if(a==0)
   printf("0");
  while(n<=a)
  {
    if(a!=0 && a%n==0)
    {
      printf("%d ",n);
      sum=sum+n;
    }
    n=n+1;
  }
  printf("\nSum=%d",sum);
            return 0;
}
