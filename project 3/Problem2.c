#include<stdio.h>
#include<conio.h>
#include<math.h>

#include"Library.h"
#include"Library.c"

void main()
{
double lat1,lat2,lon1,lon2;
double distance;
printf("Enter the latitude and longitude value of Bhopal\n");
scanf("%lf%lf",&lat1,&lon1);
printf("Enter the latitude and longitude value of Banglore\n");
scanf("%lf%lf",&lat2,&lon2);

distance = find_distance(lat1,lat2,lon1,lon2);

printf("Distance between Saurabh sir and Prateek sir : %lf Km\n",distance);

}


