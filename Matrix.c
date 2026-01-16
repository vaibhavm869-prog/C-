
#include<stdio.h>
int main()
{

	int r1,c1,r2,c2,i,j;
	int k;
	printf("Enter the no. of rows of a matrix A : ");
	scanf("%d",&r1);
	printf("Enter the no. of columns of a matrix A : ");
	scanf("%d",&c1);
	printf("Enter the no. rows of a matrix B : ");
	scanf("%d",&r2);
	if(c1!=r2) {
		printf("\t\tWARNING !!\n\tMATRIX MULTIPLICATION IS NOT POSSIBLE as %d is not equal to %d",c1,r2);
		return 0;
	}
	printf("Enter the no. coloumns of a matrix B : ");
	scanf("%d",&c2);

	int A[r1][c1];
	int B[r2][c2];
	int C[r1][c2];

	printf("Enter the elemnts of a matrix A : ");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the elemnts of a matrix B : ");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{

			scanf("%d",&B[i][j]);
		}
	}
	// Initialising each elemnt of 3rd matrix to be zero
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			C[i][j]=0;
		}
	}
	printf("Product of Matrix A and Matrix B is :");

	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(k=0; k<c1; k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
		printf("\n");
	}

	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
