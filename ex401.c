#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Pn(int n){
	if(n<=2){
		return 1;
	}else{
		return(Pn(n-1)+Pn(n-2));
	}
}
float Qn(int n){
	return(Pn(n+2)*1.0)/(Pn(n+1)*1.0);
}
int main(){
	int n,i;
	float sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=Qn(i);
	}
	printf("%.2f",sum);
	return 0;
}


