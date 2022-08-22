#include<stdio.h>
int main()
{
       int x,count = 0;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&x);
       printf("NO. OF DIGITS IN NUMBER- %d is:  \n",x);
       while(x!=0)
        {
            x = x/10;
            count++;
        }   
        printf("%d ",count);
        return 0; 
}