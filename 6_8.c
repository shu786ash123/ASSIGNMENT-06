 #include<stdio.h>
 int main()
 {
    int x,i,count=0;
    printf("  ENTER A NUMBER: \n");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        if(x%i==0)
            count++;
    if(count==2)
        printf(" %d is a prime number ",x);
    else
        printf(" %d is not a prime number ",x);      
        return 0;      
 }
