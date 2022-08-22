#include<stdio.h>
int main()
{
    int x,y,rev=0;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    while(x!=0)
        {
            y = x%10;
            rev = rev*10+y;
            x = x/10;
        }
        printf(" REVERSE NUMBER IS %d ",rev);
        return 0;
}