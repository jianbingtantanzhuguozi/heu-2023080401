#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}
	return 0;
}

