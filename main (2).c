#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	int c;
	int d;
	float e;
	float f;
	scanf("%f,%f,%d,%d",&a,&b,&c,&d);
	e=(a-b)/c;
	f=a-e*d;
	printf("%.2f,%.2f\n",e,f);
	
	return 0;
}

