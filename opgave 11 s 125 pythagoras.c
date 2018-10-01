#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

double n = 0.0;
double m = 0.0;
double side1 = 0.0;
double side2 = 0.0;
double hypo = 0.0;
int res;


printf("please enter value\n");
res = scanf("%lf, %lf\n", &m, &n);
printf("%d\n",res);

side1 = (m * m) - (n * n);
side2 = 2 * m * n;
hypo = (m * m) + (n * n);

printf("side1 is equal to %lf\n, side2 is equal to %lf\n, hypo is equal to %lf\n",side1, side2, hypo);


return EXIT_SUCCESS;
}
