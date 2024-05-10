#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,x,m;
	int sum=0;
	for(i=100;i<=999;i++){
		 j=i%10;
		 m=i/100;
		 x=(i/10)%10;
		 sum=j*j*j+m*m*m+x*x*x;
		if(sum==i){
		 	printf("%d\n",i);
		 }
	} 
	return 0;
}

