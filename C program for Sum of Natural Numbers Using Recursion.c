#include <stdio.h>
int addnum(int n);
int main()
{
  printf("RA2211042010050");
  int num;
  scanf("%d",&num);
  printf("%d",addnum(num));
  return 0;
}
int addnum(int n)
{
  if(n!=0)
    return n+addnum(n-1);
  else
    return n;
}

