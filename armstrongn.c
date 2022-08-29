#include<stdio.h>
int main()
{
    int sum=0.,r,num,main;
    printf("Enter Number: ");
    scanf("%d",&num);
    main=num;
    for(num;num>0;num/=10){
        r=num%10;
        sum=sum+(r*r*r);
    }
    if(main==sum){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number");
    }
    return 0;
}