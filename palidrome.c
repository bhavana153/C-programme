#include<stdio.h>
int main(){
    int num ,reversed =0,rem,orginal;
    printf("enter the number int");
    scanf("%d",&num);
    orginal = num;
    while(num!=0){
        rem=num%10;
        reversed=reversed*10+rem;
        num=num/10;
    }
    if(reversed=orginal){
        printf("the number is palidr");
    }
    else{
        printf("not pal");
    }
}
