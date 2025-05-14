#include <stdio.h>
int main(){
    int n,i,c=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if (n==0){
       printf("1");
    }
    else{
       for(i=1;i<=n;i++){
           c*=i;
       }
        printf("%d",c);
    }
}
