#include<stdio.h>
void main()
{
     int n  , s=0 ,r,t;
     printf("enter the number");
     scanf("%d",&n);
     t = n ;
     while(n!=0)
     {
         r = n % 10 ;
         s  = s * 10 + r ;
         n =  n / 10 ;
     }
     printf(" reverse of %d is %d ",t,s);
     
     
}