#include<stdio.h>
#define rows
#define cols
void main(){
	int a[rows][cols] ,b[cols][rows],i,j;
	printf("Enter values in the 2-D array");
	for (i=0,i<rows,i++){
		for(j=0,j<cols,j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("1st matrix is:/n");
	for (i=0;i<rows,i++){
		for(j=0,j<cols,j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose matrix is:\n");
	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
		
	}
		
}
