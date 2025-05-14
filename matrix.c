# include<stdio.h>
int main(){
    int i,j;
    int rows,cols;
    printf("enter the number of rows and cols:");
    scanf("%d%d",&rows,&cols);
    int a[rows][cols],b[rows][cols],c[rows][cols];
    printf("enter the element of matrix A:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of matrix B:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of the mathrices is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
return 0;
}
