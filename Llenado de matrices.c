#include<stdio.h>
int n,m,n2,m2,r,c;
int main()
{
	printf("Ingresa numero de renglones para matrizA:");
	scanf("%d",&m);
	printf("Ingresa numero de columnas para matrizA:");
	scanf("%d",&n);
	int matrizA[m][n];
	printf ("Ingresa numero de renglones para matrizB");
	scanf("%d",&m2);
	printf("Ingresa numero de columnas para matrizB:");
	scanf("%d",&n2);
	int matrizB[m2][n2];

	r=0;
	c=0;
	printf("MatrizA:\n");
	while(r<m)
	{
		while(c<n)
		{
			printf("Ingresa elemento A(%d,%d):",r,c);
			scanf("%d",&matrizA[r][c]);
			c=c+1;
		}
		c=0;
		r=r+1;
	}
	r=0;
	c=0;

	printf("MatrizB:\n");
	while(r<m2)
	{
		while(c<n2)
		{
			printf("Ingresa elemento B(%d,%d):",r,c);
			scanf("%d",&matrizB[r][c]);
			c=c+1;
		}
		c=0;
		r=r+1;
	}
	r=0;
	c=0;
}
