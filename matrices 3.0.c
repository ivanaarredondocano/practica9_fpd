#include<stdio.h>
int r1,c1,r2,c2,r3,c3,j,g,cc,cr;
int main()
{
	printf("Ingresa numero de renglones para matriz1");
	scanf("%d",&r1);
	printf("Ingresa numero de columnas para matriz1");
	scanf("%d",&c1);
	int matriz1[r1][c1];
	printf("Ingresa numero de renglones para matriz2");
	scanf("%d",&r2);
	printf("Ingresa numero de columnas para matriz2");
	scanf("%d",&c2);
	int matriz2[r2][c2];

	if(c1!=r2)
	{
		printf("No se puede realizar la multipliacion");
	}
	else 
	{
		cr=0;
		cc=0;
		printf("Matriz1:\n");
		while(cr<r1)
		{
			while(cc<c1)
			{
				printf("Ingresa elemento 1(%d,%d):",cr,cc);
				scanf("%d",&matriz1[cr][cc]);
				cc=cc+1;
			}
			cc=0;
			cr=cr+1;
		}
		cr=0;
		cc=0;

		printf("Matriz2:\n");
		while(cr<r2)
		{
			while(cc<c2)
			{
				printf("Ingresa elemento 2(%d,%d):",cr,cc);
				scanf("%d",&matriz2[cr][cc]);
				cc=cc+1;
			}
			cc=0;
			cr=cr+1;
		}
		cr=0;
		cc=0;
		printf("Matriz1:\n");
		while(cr<r1)
		{
			while(cc<c1)
			{
				printf("%d\t",matriz1[cr][cc]);
				cc=cc+1;
			}
			cc=0;
			cr=cr+1;
			printf("\n");
		}
		printf("\n");
		cr=0;
		cc=0;

		printf("Matriz2:\n");
		while(cr<r2)
		{
			while(cc<c2)
			{
				printf("%d\t",matriz2[cr][cc]);
				cc=cc+1;
			}
			cc=0;
			cr=cr+1;
			printf("\n");
		}
		cr=0;
		cc=0;
	

		r3=0;
		c3=0;
		j=0;
		g=0;
		int matriz3[r1][c2];

		while(r3<r1)
		{
			while(c3<c2)
				{
					while(j<c1)
					{
						g=(g+matriz1[r3][j]*matriz2[j][c3]);
						j=j+1;
					}
					matriz3[cr][cc]=g;
					g=0;
					j=0;
					cc=cc+1;
					c3=c3+1;
				}
				c3=0;
				r3=r3+1;
				cc=0;
				cr=cr+1;
		}
		cc=0;
		cr=0;

		printf("Matriz3:\n");
		while(cr<r1)
		{
			while(cc<c2)
			{
				printf("%d\t",matriz3[cr][cc]);
				cc=cc+1;
			}
			cc=0;
			cr=cr+1;
			printf("\n");
		}
	}
	
}
