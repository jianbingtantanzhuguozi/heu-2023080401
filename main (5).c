#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;

    scanf("%d", &number);

    int tens = number / 10;

    int ones = number % 10;

    if(number==10){
    	printf("ten");
	}else{
	
    switch (tens) {

        case 2: printf("twenty"); break;

        case 3: printf("thirty"); break;

        case 4: printf("forty"); break;

        case 5: printf("fifty"); break;

        case 6: printf("sixty"); break;

        case 7: printf("seventy"); break;

        case 8: printf("eighty"); break;

        case 9: printf("ninety"); break;

    }
    if (tens == 1) {

        switch (ones) {

            case 1: printf("eleven"); break;

            case 2: printf("twelve"); break;

            case 3: printf("thirteen"); break;

            case 4: printf("fourteen"); break;

            case 5: printf("fifteen"); break;

            case 6: printf("sixteen"); break;

            case 7: printf("seventeen"); break;

            case 8: printf("eighteen"); break;

            case 9: printf("nineteen"); break;

        }

    }else{
    	if (ones!=0) {

        switch (ones) {

            case 1: printf("-one"); break;

            case 2: printf("-two"); break;

            case 3: printf("-three"); break;

            case 4: printf("-four"); break;

            case 5: printf("-five"); break;

            case 6: printf("-six"); break;

            case 7: printf("-seven"); break;

            case 8: printf("-eight"); break;

            case 9: printf("-nine"); break;

        }

    }

	}
}
    
	return 0;
}

