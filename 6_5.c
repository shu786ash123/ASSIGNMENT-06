#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf("SUM OF CUBE OF FIRST %d NATURAL NUMBERR ARE: \n",x);
    for(i=1;i<=x;i++)
    {
        sum = sum + i*i*i;

    }
    printf("%d ",sum);
    return 0;
}