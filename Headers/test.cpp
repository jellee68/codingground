#include <iostream>
#include <string>
#include "module.h"
using namespace std;


int main()
{
	string display ;							// Test shift left 
	char word[]={"Some longer String\n"} ;		// and print functions
	display = shiftLeft(word);					// in module.h
	print(display) ;
	
	Dog fido ; 
	
	fido.setAge(3) ;
	fido.setWeight(15) ;
	fido.setColour("Brown") ;
	
	cout << "Fido is a " << fido.getColour() << " dog" << endl ;
	cout << "Fido is " << fido.getAge() << " years old" << endl ;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl ;

	const char* words = "Some words to display" ;
	
	
	
	return 0 ;
}

