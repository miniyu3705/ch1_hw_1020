#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float weight, height, bmi;
	printf("請輸入體重(公斤) 及身高(公尺):");
	scanf("%f %f", &weight, &height);
	bmi = weight / (height * height);
	printf("BMI=%.3f\n", bmi);
	if (bmi < 18.5) printf("Underweight");
	else if(bmi >= 18.5&&bmi<=24.9) printf("Normal");
	else if (bmi >= 25&&bmi<=29.9) printf("Overweight");
	else if (bmi >= 30) printf("Obese");
	return 0;
}