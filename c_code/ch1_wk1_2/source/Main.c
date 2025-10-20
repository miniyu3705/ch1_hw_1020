#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int nums[3], i, max, min;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &nums[i]);
    }
    max = nums[0];
    min = nums[0];
    for (i = 1; i < 3; i++) 
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    printf("max = %d,min = % d\n", max,min);
    return 0;
}