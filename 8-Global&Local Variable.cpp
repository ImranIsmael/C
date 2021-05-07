//GlobLal and local variables declaration
// Local variables has priorities over global variables
#include <iostream>

using namespace std;
void dira();

int tuna =69;


int main()
{
	int tuna=4;
	cout << tuna << endl;
	dira();
}

void dira()
{
	cout << tuna << endl;
}
