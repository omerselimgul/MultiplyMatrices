#include <stdio.h>
#include <stdlib.h>

void multply(int first[][3],int second[][3])
{
	int i,j,r,c,k,toplam=0;
	int total[3][3];
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			toplam=0;
			for(k=0;k<3;k++)
			{

			toplam=toplam+first[r][k]*second[k][c];
			}
	//	printf("%d  ",toplam);
		total[r][c]=toplam;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",total[i][j]);
		}
		printf("\n");
	}


}

int main(int argc, char *argv[]) {

		int matrix[3][3];
		int matrix2[3][3];
		int i,j;
		printf("Birinci matrixin deðerlerini giriniz \n");
		for(i=0;i<3;i++)
		{
		  for(j=0;j<3;j++)
			{
				printf("%d satirinda %d sutunundaki sayiyi girinizi  ",i+1,j+1);
				scanf("%d", &matrix[i][j]);
			}
			printf("\n");
		}
		printf("Ýkinci matrixin deðerlerini giriniz \n");
		for(i=0;i<3;i++)
		{
		  for(j=0;j<3;j++)
			{
				printf("%d satirinda %d sutunundaki sayiyi girinizi  ",i+1,j+1);
				scanf("%d", &matrix[i][j]);
			}
			printf("\n");
		}


		for(i=0;i<3;i++)
		{
		  for(j=0;j<3;j++)
			{
				printf("%d  ",matrix[i][j]);
			}
			printf("\n");
		}

		//multply(matrix,matrix2);

	return 0;
}
