#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float milesPerDay, costPerGallon, milesPerGallon;
    float parkingFees, tolls;
    float dailyCost;
    printf("�п�J�C�Ѧ�p���`���{�ơ]miles�^�G");
    scanf("%f", &milesPerDay);
    printf("�п�J�C�[�ڨT�o������]���^�G");
    scanf("%f", &costPerGallon);
    printf("�п�J�C�[�ڥ�����p�����{�ơ]miles/gallon�^�G");
    scanf("%f", &milesPerGallon);
    printf("�п�J�C�Ѫ������O�]���^�G");
    scanf("%f", &parkingFees);
    printf("�п�J�C�Ѫ��L���O�]���^�G");
    scanf("%f", &tolls);
    dailyCost = (milesPerDay / milesPerGallon) * costPerGallon + parkingFees + tolls;
    printf("\n�C�ѳq�Ԫ��}���������G%.2f ��\n", dailyCost);
    return 0;
}
