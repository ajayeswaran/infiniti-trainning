#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int q,i,j,a1[10],a2[10],count=0;
	double val,val1;
	
printf("q:");
scanf("%d",&q);
	for(i=0;i<q;i++)
	{	
	printf("Range:");
	scanf("%d %d",&a1[i], &a2[i]);
}
	for(i=0;i<q	;i++)
	{
	count=0;
	for(j=a1[i];j<=a2[i];j++)
	{
	val=sqrt(j);
	val1=floor(val);
	printf("", val, val1);
	if(val==val1)
	count++;
	}
	printf("%d\n",count);
	}
	getch();
}
