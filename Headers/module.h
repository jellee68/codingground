#include <iostream>
#include <string>

using namespace std ;

void print(string word )
    {
        cout << word << endl ;
    }
    
string myGoodFunction(const char* charArray)
	{
		int i = 30 ;
		int length ;
		string measurable = string(charArray) ;
		for( i=0 ; i<30 ; i++)
			{
				cout << measurable[i] << endl ;
				if (measurable[i] == '\0')
				{ 
					cout << "The end" << endl ;
					length = i ;
					break ;	
				}	
			}
    cout << length << endl;
    
    cout << x << endl ;
    //cout << charArray[2] << endl ;
    return string(charArray);
	}
