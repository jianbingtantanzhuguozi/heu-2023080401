#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float pn(int n,int x){
	float sum;
		if(n==0){
			sum=1.0;
			return (sum);
		}else{
			if(n==1){
				sum=x;
				return (sum);
			}else{
				sum=((2*n-1)*x-pn(n-1,x)-(n-1)*pn(n-2,x))/n;
				return (sum);
			}
		}
	
}
int main(int argc, char *argv[]) {
	float pn(int n,int x);
	int n,x;
	scanf("%d,%d",&n,&x);
	if(n<0){
		printf("error");
	}else{
	
	printf("%.2f",pn(n,x));
}
	return 0;
}


