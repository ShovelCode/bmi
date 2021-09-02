#include <stdio.h>

int main (void){
	float weight; //kilograms
	float height; //meters
	float bmi;
	printf("%s", "Enter weight in kilograms: ");
	
	scanf("%f", &weight);
	printf("Enter height in meters: ");
	scanf("%f", &height);
	bmi = weight / (height * height);
	printf("bmi: %f", bmi);
}
