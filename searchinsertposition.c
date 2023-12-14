#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[4],target,i,n,x ,found=0 ,start,end,m;

     for(i=0;i<n;i++)
     {
         printf("enter array element");
         scanf(" %d ", &a[i]);
     }
     printf("enter the number to be searched");
     scanf("%d", &x);
     start =0;
     end = (n-1);
    while ( start <=end)

    {   m = (start+ end)/2;
        if (a[m] == x)
        {
            found = 1;
            break;
        }
        else if(x<a[m])
          {  end = m - 1;
            
        }
        else 
          start = m+1;
    }
    if(found == 1)
    {
        printf("%d is present at position %d ",x,m);

    }
    if(start>end)
    {
        printf(" %d is not found in array",x);
    }
}