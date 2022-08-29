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

//TO DO IT IN WHILE LOOP
while(n>0){
    r=num%10;
    sum=sum+(r*r*r); //We Can Use sum += (r*r*r) Also...
    num=num/10; //Here num/=10 is Easier..
}

//TO DO IT IN DO..WHILE LOOP
do{
    r=num%10;
    sum += (r*r*r);
    num/=10;
}while(n>0);
