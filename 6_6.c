#include<stdio.h>
int main()
{
    int x,i,fact=1;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf("FACTORIAL OF A GIVEN NUMBER- %d IS \n",x);
    for(i=1;i<=x;i++)
    {
        fact = fact*i;

    }
    printf("%d ",fact);
    return 0;
}