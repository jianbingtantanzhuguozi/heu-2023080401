#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	scanf("%d",&a);
	if(a>=0){
		if(a%2==0){
			b=a*a;
		}else{
			b=a/2;
		}
	}else{
		b=a*a;
	}
	printf("%d",b);
	return 0;
}

