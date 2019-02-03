#include<stdio.h>
int main(){
	int a[20][20];
	int num,count,i,j,k,kend,lend;
	scanf("%d",&num);
	kend=num/2;
	lend=num;
	count=1;
	for(i=0,j=0,k=0;k<kend;k++){
		a[i][j]=count++;
		for(j++;j<lend;j++)
		        a[i][j]=count++;
	    for(i++,j--;i<lend;i++)
	            a[i][j]=count++;
	    for(i--,j--;j>=k;j--)
	            a[i][j]=count++;
	    for(i--,j++;i>k;i--)
	            a[i][j]=count++;
	i++;
	j++;
	lend--;	
	}
	if(num%2!=0)
	a[i][j]=count;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++)
		        printf("%4d",a[i][j]);
		        printf("\n");
	}
}
