#include<stdio.h>
int main (){
int i=3,j=3;
int A[i] [j];
int B[i] [j];
int C[i] [j];
printf("Enter the rows of matrix A\n");
for(i=0;i<3 ;i++){
for(j=0;j<3 ;j++){
scanf("%d",&A[i][j]);
}
}
printf("Enter the rows of matrix B\n");
for(i=0;i<3 ;i++){
for(j=0;j<3 ;j++){
scanf("%d",&B[i][j]);
}
}

for(i=0;i<3 ;i++)
    {
    for(j=0;j<3 ;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
    }
    printf("result of addition matrix \n");
for(i=0;i<3 ;i++){
for(j=0;j<3 ;j++){
  printf("%d ",C[i][j]);
}
printf("\n");
}
}



