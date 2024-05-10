#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,num,j,p;
	scanf("%d",&n);
	int a[101];
	int c[101];
	int b[101]={0};
	int d[101];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
		}
	}
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	if(a[i]==c[j]){
	            b[i]=b[i]+1;	
			}
		}	
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(c[i]==c[j]){
				b[j]=0;
			}
		}
	}
	num=b[0];
	for(i=0;i<n;i++){
		if(num<b[i]){
			num=b[i];
		}
	}

	for(i=0;i<n;i++){
		if(b[i]==num){
			printf("%d %d\n",a[i],b[i]);
		}
	}	
	

	return 0;
}

