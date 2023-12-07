#include<stdio.h>
void main()
{
    int n;
    printf("enter the year");
    scanf("%d",&n);
    if((n%400==0)||( (n%100!=0)&&(n%4==0)))
    {
        printf(" given year is leap year");

    }
    else 
    printf(" given year is not a leap year");

}