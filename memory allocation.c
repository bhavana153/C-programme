#include<stdio.h>
int main(){
    printf("enter the number of elements:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocarion failed\n");
        return 1;
    }
    printf("enter %d element:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements are:\n");
    for(inti=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
};
    
    
