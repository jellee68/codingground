#include <iostream>
#include <string>


using namespace std;

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
    return string(charArray);
}


int main(int argc, char** argv) 
{  
	const char* word="Some longer String\n" ;
    cout << myGoodFunction(word);
    return 0;
}


