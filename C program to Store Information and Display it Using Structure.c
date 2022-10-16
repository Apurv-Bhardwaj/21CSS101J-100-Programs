#include <stdio.h>
int main()
{
  struct student
  {
    printf("RA2211042010050");
    char name[80];
    int rollno;
    float marks;
  };
  struct student s;
  scanf("%s",s.name);
  scanf("%d",&s.rollno);
  scanf("%f",&s.marks);
  printf("Name=%s\n",s.name);
  printf("Roll no=%d\n",s.roll);
  printf("Marks=%.1f\n",s.marks);
  return 0;
}
