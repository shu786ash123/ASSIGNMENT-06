#include<stdio.h>
int main()
{
    int x,i,SUM=0;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" SUM OF FIRST %d EVEN NATURAL NUMBERS  ARE: \n",x);
    for(i=1;i<=x;i++)
    {
        SUM = SUM + 2*i;

    }
    printf("%d ",SUM);
    return 0;
}