#include <stdio.h>
#include<string.h>
int main()
{
  printf("RA2211042010050");
  char str[100];
  int c=0;
  int count[26]={0},x;
  scanf("%s",str);
  while(str[c]!='\0')
  {
    if(str[c]>='a'&&str[c]<='z')
    {
      x=str[c]-'a';
      count[x]++;
    }
c++;
}
for(c=0;c<26;c++)
{
  if(count[c]!=0)
  printf("%c = %d\n",c+'a',count[c]);
}
 return 0;
}
