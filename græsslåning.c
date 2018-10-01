#include <stdio.h>
#include <stdlib.h>
#define SPEED 2
#define SEC_PR_HOUR 3600

int main(void){

double lenght_garden = 0.0;
double wide_garden = 0.0;
double lenght_house = 0.0;
double wide_house = 0.0;
/*Tid taget fra tid aflevering*/
int sec, min, hours, days, weeks;

double square_meter_garden = 0.0;
double square_meter_house = 0.0;
double square_meter_grass = 0.0;
int time_to_cut = 0.0;

printf("Please inset lenght and wide of garden\n");
scanf(" %lf, %lf",&lenght_garden, &wide_garden);

printf("Please inset lenght and wide of house\n");
scanf(" %lf, %lf",&lenght_house, &wide_house);

square_meter_garden = (lenght_garden*wide_garden);
square_meter_house = (lenght_house*wide_house);
square_meter_grass = ((square_meter_garden)-(square_meter_house));
time_to_cut = (square_meter_grass)/(SPEED);

sec = time_to_cut;
weeks = sec / (SEC_PR_HOUR*24*7);
  /*restværdien af sec samt den nye sec bliver
  beregnet såles*/
  sec = sec % (SEC_PR_HOUR*24*7);

/*hvor mange gange går sec op i day*/
  days = sec / (SEC_PR_HOUR*24);
  /*restværdien af sec samt den nye sec bliver
  beregnet såles*/
  sec = sec % (SEC_PR_HOUR*24);

/*hvor mange gange går sec op i Hours*/
  hours = sec / (SEC_PR_HOUR);
  /*restværdien af sec samt den nye sec bliver
  beregnet såles*/
  sec = sec % (SEC_PR_HOUR);

/*hvor mange gange går sec op i min*/
  min = sec / 60;
  /*restværdien af sec samt den nye sec bliver
  beregnet såles*/
  sec = sec % 60;

printf("%f square_meter_garden,\n%f square_meter_house,\n%f square_meter_grass\n%d time_to_cut,\n%d weeks,%d days, %d hours, %d min, %d sec",square_meter_garden, square_meter_house, square_meter_grass, time_to_cut, weeks, days, hours, min, sec);


return EXIT_SUCCESS;
}
