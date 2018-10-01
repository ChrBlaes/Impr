#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CONSTANT_IMPUT 1
#define DELTA 0.0000001

int main(void){
  double p1_x = 0.0, p1_y = 0.0;
  double p2_x = 0.0, p2_y = 0.0;
  double p3_x = 0.0, p3_y = 0.0;
  double circumference = 0.0;
  double hc = 0.0, area = 0.0;
  double length_p1_p2 = 0.0;
  double length_p2_p3 = 0.0;
  double length_p3_p1 = 0.0;
  int choice = 0, Iís_triangle = 0;

  if (CONSTANT_IMPUT){
    p1_x = 0; p1_y = 0;
    p2_x = 5; p2_y = 0;
    p3_x = 0; p3_y = 5;

  }
else {


  printf("%s\n", "please enter a point: (x,y)\n" );
  scanf("  (%lf , %lf)", &p1_x, &p1_y);
  printf("point: (%lf, %lf)\n\n", p1_x, p1_y) ;

  printf("%s\n", "please enter a point: (x,y)\n" );
  scanf("  (%lf , %lf)", &p2_x, &p2_y);
  printf("point: (%lf, %lf)\n\n", p2_x, p2_y) ;

  printf("%s\n", "please enter a point: (x,y)\n" );
  scanf("  (%lf , %lf)", &p3_x, &p3_y);
  printf("point: (%lf, %lf)\n\n", p3_x, p3_y) ;


p1_p2_equals = fabs(p1_x - p2_x) < Delta && fabs(p1_y - p2_y) < DELTA;

p1_p2p1_p2_different = !p1_p2_equals;
all_points_different = p1_p2_different && p2_p3_different && p3_p1 different;
is_triangle = all_points_different && !vertically_aligned && !horizontally_aligned && !aligned

 if (Iís_triangle){
/* circumference */
length_p1_p2 = sqrt((p1_x - p2_x) * (p1_x - p2_x) + (p1_y - p2_y) * (p1_y - p2_y));
length_p2_p3 = sqrt((p2_x - p3_x) * (p2_x - p3_x) + (p2_y - p3_y) * (p2_y - p3_y));
length_p3_p1 = sqrt((p3_x - p1_x) * (p3_x - p1_x) + (p3_y - p1_y) * (p3_y - p1_y));

/*Precalculations: */

printf("Your choice: Area (1), circumference (2), Equilateral? (3)\n", );
scanf(" &d", &choice );
switch(choice) {
case 1: {
  hc = circumference / 2;

  area = sqrt(hc * (hc - length_p1_p2) * (hc - length_p2_p3) * (hc - length_p3_p1));

  printf("area: %lf\n", area );
  break;
}
case 2: {
printf("circumference: %lf/n", circumference);
break;
}
case 3: {
int Equilateral = length_p1_p2 == length_p2_p3 && length_p2_p3 == length_p3_p1;
printf("The triangle is %s equilateral\n", Equilateral ? "" : "NOT" );
  break;
}
default: {
printf("Should not happen. Bye bye\n");
  exit(EXIT_FAILURE)
}
}
}
else {

  printf("Not a triangle\n");
  exit(EXIT_FAILURE);
}
return EXIT_SUCCESS;



}
