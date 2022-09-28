#include<stdio.h>
#include<conio.h>
#include<math.h>

#include"Library.h"
#include"Library.c"


void main()
{
    double a1,b1,a2,b2;
    printf("Enter coefficient of x and y of equation of ABC road\n");
    scanf("%lf%lf",&a1,&b1);

     printf("Enter coefficient of x and y of equation of XYZ road\n");
    scanf("%lf%lf",&a2,&b2);

    double angle_at_chowk;

    angle_at_chowk = find_angle(a1,b1,a2,b2);

    //one degree = 57.296
    // here atan() function return angle in radian so convert into degree multiply it to 57.296
    printf("Angle at which these road meet each other :\nIN degree : %.3f\nIn radian : %.3f\n",angle_at_chowk * 57.296 , angle_at_chowk);
    
}





