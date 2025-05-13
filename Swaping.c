include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("\nbefore:a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after:a=%d and b=\n",a,b);
}
