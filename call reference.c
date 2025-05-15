#include<stdio.h>
int main(){
    int a=5;
    int*b=&a;
    *b=*b+10;
    printf("a=%d\n",a);
    printf("*b=%d\n",*b);
    return 0;
}
