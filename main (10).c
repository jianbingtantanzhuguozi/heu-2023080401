#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wanshu(int x){
	int j;
	int k=0;
	for(j=1;j<x;j++){
				if(x%j==0){
					k=k+j;
				}
			}
			return k==x;
}
int main(int argc, char *argv[]) {
	int n,m,i,j,t;
	int g=0;
	int wanshu(int x);
	scanf("%d,%d",&m,&n);
	t=m;
	if(m<9999&&m>0&&n<9999&&n>0){
		if(m>n){
			m=n;
		    n=t;
		}
		
			for(i=m;i<=n;i++){
			if(wanshu(i)){
				
				g++;
				if(g!=1){
					printf(",");
				}
			 printf("%d",i);
			}
		}
			
	}else{
		printf("error");
	}

	return 0;
}

