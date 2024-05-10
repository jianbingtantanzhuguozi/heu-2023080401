#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int n,i,j;
	int a[21],c[21],b[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	int min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i]) min=a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(c[i]==c[j]){
				c[j]=min;
			}
		}
	}
	for(i=0;i<n;i++){
		b[i]=1;
		for(j=0;j<n;j++){
			if(a[i]<c[j]){
				b[i]++;
			}
		}
		printf("%d ",b[i]);
	}
	return 0;
}


