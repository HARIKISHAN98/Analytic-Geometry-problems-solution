#include<stdio.h>
#include<conio.h>
#include<math.h>

#include"Library.h"
#include"Library.c"

void main()
{
double area_under_A;
double x1,x2,x3,y1,y2,y3;

printf("Enter the 1st co-ordinates of vertices of  'A' shape character :\n");
scanf("%lf%lf",&x1,&y1);

printf("Enter the 2nd co-ordinates of vertices of  'A' shape character :\n");
scanf("%lf%lf",&x2,&y2);

printf("Enter the 3rd co-ordinates of vertices of  'A' shape character :\n");
scanf("%lf%lf",&x3,&y3);

area_under_A = find_area(x1,x2,x3,y1,y2,y3);
printf("Area to be colour black : %.2f sq.unit\n",area_under_A);

}

