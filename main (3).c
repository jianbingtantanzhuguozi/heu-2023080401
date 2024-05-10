#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	if(a+4>122){
		a=a-26;
	}
	if(b+4>122){
		b=b-26;
	}
	if(c+4>122){
		c=c-26;
	}
	if(d+4>122){
		d=d-26;
	}
	if(e+4>122){
		e=e-26;
	}
	printf("%c%c%c%c%c\n",a+4,b+4,c+4,d+4,e+4);
	return 0;
}



