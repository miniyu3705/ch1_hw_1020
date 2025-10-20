#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float milesPerDay, costPerGallon, milesPerGallon;
    float parkingFees, tolls;
    float dailyCost;
    printf("請輸入每天行駛的總里程數（miles）：");
    scanf("%f", &milesPerDay);
    printf("請輸入每加侖汽油的價格（元）：");
    scanf("%f", &costPerGallon);
    printf("請輸入每加侖平均行駛的里程數（miles/gallon）：");
    scanf("%f", &milesPerGallon);
    printf("請輸入每天的停車費（元）：");
    scanf("%f", &parkingFees);
    printf("請輸入每天的過路費（元）：");
    scanf("%f", &tolls);
    dailyCost = (milesPerDay / milesPerGallon) * costPerGallon + parkingFees + tolls;
    printf("\n每天通勤的開車成本為：%.2f 元\n", dailyCost);
    return 0;
}
