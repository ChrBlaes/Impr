#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(void){

double r = 0;
double x = 0;
double y = 0;
double circumference = (r*r*PI);

printf("Please insert radius of circle\n");
scanf(" %lf", &r);

printf("Please insert x and y kordinates\n");
scanf("%lf, %lf",&x,&y);

if (((x*x)+(y*y))==(r*r)){
printf("The point is on the circumference\n");}

else if (((x*x)+(y*y))<(r*r)) {
printf("The point in inside the circle\n"); }

else if (((x*x)+(y*y))>(r*r)) {
printf("The point is outside the circle\n");}




return EXIT_SUCCESS;









}
