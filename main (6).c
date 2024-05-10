#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float b;
	scanf("%d",&a);
	if(a<=125){
		b=100.0;
	}else{
		if(a>125&&a<=200){
			b=a*0.8;
		}else{
			if(a>200&&a<=300){
				b=160+(a-200)*0.9;
			}else{
				if(a>300&&a<=450){
					b=160+90+(a-300)*1.0;
				}else{
					b=160+90+(a-300)*1.0+(160+90+(a-300)*1.0)*0.15;
				}
			}
		}
	}
	printf("%.2f",b);
	return 0;
}



