#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int huiwenshu(int a){
	int b;
	int c=0;
	int t;
	t=a;
	while(a>0){
		b=a%10;
		c=c*10+b;
		a=a/10;
		}
		return c==t;
	}
void find(int a){
	int i;
	int g=0;
	for(i=0;i<a;i++){
		if(huiwenshu(i)){
			printf("%d",i);
			g++;
			if(g%10==0){
				printf(",\n");
			}else{
				printf(",");
			}
			
			}
		}
	}

int main(int argc, char *argv[]) {
	int huiwenshu(int a);
	void find(int a);
	int n;
	scanf("%d",&n);
	huiwenshu(n);
	find(n);
	return 0;
}




