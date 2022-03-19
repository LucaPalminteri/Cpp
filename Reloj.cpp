#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main(){
	
	int a, b, c;
	
	a = a + 1;
	a++;
	a+=5;
	a = a + 5;
	a--;
	
	for(a=11; a<24 ; a++){
		for(b=12 ; a<60 ; b++) {
			for(c=0 ; c<60 ; c++) {
				printf("\n\n\n\t\t%.2d:%.2d:%.2d     ",a,b,c);
				Sleep(1000);
				system("cls");
			}
		}
	}
	
	getch();
	return 0;
}
