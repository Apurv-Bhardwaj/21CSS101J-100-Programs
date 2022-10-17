#include <stdio.h>
int main()

{
printf("RA2211042010050");
  int a[10],n,j,i,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
      {
      if(a[i]<a[j])
        {
        a[i]=temp;
        a[i]=a[j];
        temp=a[j];
      }
    }  
 }
  printf ("%d",a[n-1]);
 return 0;
}
