#include<stdio.h>
 int main(){
    int arr[]={1,2,3,4};
    int*ptr=arr;
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d",*ptr);
    return 0;
}
      
