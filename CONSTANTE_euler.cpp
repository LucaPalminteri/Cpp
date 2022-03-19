#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

float factorial(int f);

int main() {
	
	float n;
	int a = 0;
	
	for(a = 0 ; a < 15 ; a++){
		
		n = n + ( 1 / factorial (a));
		printf ("\n%.10f",n);
	}
	
	
}

float factorial(int f)
{
    if ( f == 0 ) {
    	return 1;
	} 
    else {
    	return(f * factorial(f - 1));
	}
}



