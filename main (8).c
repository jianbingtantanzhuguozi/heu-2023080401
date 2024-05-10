#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	scanf("%f",&a);
	if(a<=500){
		b=a;
	}else{
		if(a>100&&a<=1000){
			b=a*0.9;
		}else{
			b=a*0.8;
		}
	}
	printf("%.2f",b);
	return 0;
}

