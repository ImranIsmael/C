//GlobLal and local variables declaration
// Local variables has priorities over global variables
#include <iostream>

using namespace std;
int tuna =69;


int main()
{
	double tuna=4;
	cout << ::tuna << endl; // double colon ::-use the global tuna(unary scope resolution)
}

