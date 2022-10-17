#include<stdio.h>
struct student
{
printf("RA2211042010050");
 char name[100];
struct dateOfBirth
{
  int rollno,date,month,year;
}DOB;
}std;
int main()
{
  scanf("%s%d%d%d%d",std.name,&std.DOB.rollno,&std.DOB.date,&std.DOB.month,&std.DOB.year);
  printf("Name=%s\nRollNo=%d\nDate of birth=%d/%d/%d",std.name,std.DOB.rollno,std.DOB.date,std.DOB.month,std.DOB.year);
  return 0;
}
