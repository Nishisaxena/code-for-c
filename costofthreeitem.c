#include<stdio.h>
void main()
{
    float pen ,pencil,eraser ,c,g,tc;
    printf("enter the cost of three item\n");
    scanf("%f%f%f",&pen,&pencil,&eraser);
    c=pen+pencil+eraser ;
    g=c*18/100 ;
    tc=c+g ;
    printf("enter the total cost : %f" ,tc);
}
