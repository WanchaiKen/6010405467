#include <stdio.h>
void main()
{
    int day,hour,min;
    printf("Enter computer working time: ");
    scanf("%d",&min);
    day = (min/60)/24;
    hour = (min/60)-(day*24);
    min = min-((min/60)*60);
    printf("It is %d days %d hours and %d minutes.",day,hour,min);
}