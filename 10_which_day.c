#include<stdio.h>
int main()
{
    int n,start_day,day;
    printf("Enter the value of 'n :");
    scanf("%d",&n);
    if(n<=0||n>365)
    {
        printf("Error : invalid input,n value should be > 0 and <= 365\n");
        return 0;
    }
    printf("choose first day :\n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. saturday\n");
    printf("Enter the option to set the first day :");
    scanf("%d",&start_day);
    if(start_day <=0 || start_day>7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        return 0;
    }
    day =((start_day+n-2)%7)+1;
    printf("The day is ");
    switch(day)
    {
        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        case 5:
        printf("Thursday\n");
        break;
        case 6:
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;
    
    }
    return 0;
}