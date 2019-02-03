//¶¯Ì¬Êı×é°æ
#include <stdio.h>
int main(){	
int num,count,i,j,k,kend,lend;
	printf("Input a number[1-20]: ");
	scanf("%d",&num);
	int *a=new int [num*num];
	kend=num/2;
	lend=num;
	count=1;
	for( i=0,j=0,k=0; k<kend; k++ )	{
	a[i*num+j]=count++;
			for(j++;j<lend;j++)	
					a[i*num+j]=count++;
			for(i++,j--;i<lend;i++)
					a[i*num+j]=count++;
			for(i--,j--;j>=k;j--)
				    a[i*num+j]=count++; 
			for(i--,j++;i>k;i--)
					a[i*num+j]=count++;
	i++;
	j++;
	lend--;
	}	
if(num%2!=0) 
  a[i*num+j]=count;
  	for( i=0; i<num; i++ ){
	for( j=0; j<num; j++ )
			printf("%4d ",a[i*num+j]);
			printf("\n");
	}
	delete []a;
}

