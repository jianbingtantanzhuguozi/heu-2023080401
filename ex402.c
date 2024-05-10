#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int zhisu(int x){
	int ret;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			ret=1;break;
		}else{
			ret=0;
		}
	}return ret;
}
int shuang(int p,int q){
	int t;
	if(zhisu(p)==0&&zhisu(q)==0){
		if(p==q-2){
			t=1;
		}else{t=0;
		}
	}return t;
}
int qy(int a,int b){
	int i;
	for(i=a;i<=b-2;i++){
		if(shuang(i,i+2)==1){
			printf("%d,%d\n",i,i+2);
		} 
	}
}
int main(int argc, char *argv[]) {
	int zhisu(int x);
	int qy(int a,int b);
	int shuang(int p,int q);
	int c,d;
	scanf("%d,%d",&c,&d);
	qy(c,d);
	return 0;
}


