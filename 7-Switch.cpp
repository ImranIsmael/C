#include <iostream>
#include <cmath>
using namespace std;

//Switch Statements
int main()
{	
	int age=15;
	
	switch(age)
	{
		case 15:
			cout << "Hello" << endl;
			break;
		case 16:
			cout << "World" << endl;
			break;
		default:
			cout << "C++" << endl;
	}
	
	return 0;
}
