#include<stdio.h>
int main()
{
    int n, remainder,original,s=0 ;
    printf("enter the number x");
    scanf("%d",&n);
     original == n;
while(n != 0){
    remainder = n % 10;
    s = s*10 + remainder;
    n = n / 10; 
}
if (original == s){
    printf("no is plingdrome");
    }
    else{
        printf("no is not not pelingdrome");
    }
}