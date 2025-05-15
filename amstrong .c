#include<stdio.h>
#include<math.h>
int main(){
    int num,original,rem,result=0;
    printf("enter the integer:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
    rem=num%10;
    result+=rem*rem*rem; 
    num/=10;
    }
    if(result==original)
    printf("the number is a amstrong number\n",original);
    else;
    printf("the number is a amstrong number\n",original);
    return 0;
}
