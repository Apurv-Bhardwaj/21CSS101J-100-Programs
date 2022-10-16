#include <stdio.h>
#include <math.h>
int main()
{
  printf("RA2211042010050");
  double a, b, c, s, area;
  printf("Enter sides of a triangle\n");
  scanf("%lf%lf%lf", &a, &b, &c);
  s = (a+b+c)/2; // Semiperimeter
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area of the triangle = %.2lf\n", area);
  return 0;
}
