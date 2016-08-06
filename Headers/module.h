#include <iostream>
#include <string>

using namespace std ;

class Dog
{
	int age, weight ;
	string colour ;

	public:
		void bark() { cout << "WOOF!" << endl ; }

		void setAge( int yrs) 		{ age = yrs ; } 
		void setWeight( int lbs) 	{ weight = lbs ; } 
		void setColour( string hue) 	{ colour = hue ; }
		
		int getAge() 		{ return age; 	}
		int getWeight() 	{ return weight; 	}
		string getColour() 	{ return colour; }
} ;


void print(string word )
    {
        cout << word << endl ;
    }
    
string shiftLeft(const char* charArray)
	{
		int i = 30 ;
		int length ;
		string measurable = string(charArray) ;
		for( i=0 ; i<30 ; i++)
			{
				measurable[i] = measurable[ i+1] ;
				if (measurable[i] == '\0')
					{	 
						length = i ;
						break ;	
					}	
			}
        
    return string (measurable);
	}
