#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,m;
	int q,w,r,t,y,u,i,o;
	int sum=0;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&m);
	
	if(a%2==0){
		q=a;
	}else{
		q=0;
	}
	if(b%2==0){
		w=b;
	}else{
		w=0;
	}
	if(c%2==0){
		r=c;
	}else{
		r=0;
	}
	if(d%2==0){
		t=d;
	}else{
		t=0;
	}
	if(e%2==0){
		y=e;
	}else{
		y=0;
	}
	if(f%2==0){
		u=f;
	}else{
		u=0;
	}
	if(g%2==0){
		i=g;
	}else{
		i=0;
	}
	if(m%2==0){
		o=m;
	}else{
		o=0;
	}
	sum=q+w+r+t+y+u+i+o;
	printf("%d",sum);
	return 0;
}

