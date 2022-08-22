#include<stdio.h>
int main()
{
    int m , n , i,count=0;
    printf(" ENTER TWO NUMBER: \n");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m*n;i++)
        if(i%m==0 && i%n==0)
        {
            
            printf(" LCM OF TWO NUMBER- %d AND %d is %d ",m,n,i);
            break;
        }
   return 0;         
}