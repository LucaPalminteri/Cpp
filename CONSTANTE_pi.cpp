#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>


float factorial(int f);


int main() {
	
	float z,n,pi;
	int a;
	
	for(a = 0 ; a < 15 ; a++){
		
		n = n + ( 1 / factorial (a));
	}
	
	for (a = 0 ; a > -10 ; a--) {
		
		z = z + (pow(n,((a*a)/(pow(10,10)))));
	}
	
	pi = pow((1/(pow(10,5)*z)),2);
	
	
	printf ("\n%d",a);
	printf ("\n%f",n);
	printf ("\n%f",z);
	printf ("\n%f",pi);

	return 0;
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
