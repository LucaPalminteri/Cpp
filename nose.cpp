#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Box {
   public:
      short int length;   // Length of a box
      short int breadth;  // Breadth of a box
      short int height;   // Height of a box
};

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   int volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   
   char a;
   cin >> a;
   if(a == 67) {
   	cout << "Es 67";
   } 
   else
   {
   		cout << "nO ES 67";
   }
   
   return 0;
}


