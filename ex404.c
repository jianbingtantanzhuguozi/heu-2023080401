#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double qianqian(double a,double b,int c){
	double e;
	int i;
	double sum=0.0;
	e=b/12;
	for(i=1;i<=c;i++){
		sum=(a+sum)*(1+e);
	}return sum;
}
int main(int argc, char *argv[]) {
	double qianqian(double a,double b,int c);
	double a;
	double b;
	int c;
	scanf("%lf,%lf,%d",&a,&b,&c);
	double f;
	f=qianqian(a,b,c);
	printf("%.2f",f);
	return 0;
}

