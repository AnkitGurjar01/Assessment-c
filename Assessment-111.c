#include<stdio.h>
main()
{   
 printf("----------Matrix1---------");
	int a[2][2],i,j,k,c[2][2],b[2][2];
	for(i=0;i<2;i++) 
{
		    
	for(j=0;j<2;j++)
	{
		printf("\nenter element : ");
		scanf("%d",&a[i][j]);
		
	}
		
}
for(i=0;i<2;i++) 
{
		    
	for(j=0;j<2;j++)
	{
		printf("%d\t",a[i][j]);
		
	}
	printf("\n");
		
}
	 printf("----------Matrix2---------");
	 for(i=0;i<2;i++) 
	{
	for(j=0;j<2;j++)
	{
		printf("\nenter element : ");
		scanf("%d",&b[i][j]);
		}
		printf("\n");
			
	}
	for(i=0;i<2;i++) 
{
		    
	for(j=0;j<2;j++)
	{
		printf("%d\t",b[i][j]);
		
	}
	printf("\n");
		
}
	printf("----------Multiplication---------");
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
                
            }
            printf("\n");
        }
    }
    for(i=0;i<2;i++) 
{
		    
	for(j=0;j<2;j++)
	{
		printf("%d\t",c[i][j]);
		
	}
	printf("\n");
}
}
