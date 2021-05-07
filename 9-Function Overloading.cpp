//Function overloading to use multiple similar functions

#include <iostream>

using namespace std;


void printNum(int x)
{
	cout << "Integer:" << x << endl;
}

void printNum(float x)
{
	cout << "Float:" << x << endl;
}

int main()
{
	int a=54;
	float b=32.45;
	
	printNum(a);
	printNum(b);
		
}
