#include <iostream>

using namespace std;

int main()
{
	//1.Basic Variables
	int x=2;
	cout << x << endl;
	
	int a=1;
	int b=3;
	int c=a+b;
	
	cout << c << endl;
	
	//2.Creating A Basic Calculator
	
	int a1,b1;
	
	cout << "Enter 1st Number:";
	cin  >> a1;
	
	cout << "Enter 2nd Number:";
	cin  >> b1;
	
	int sum=a1+b1;
	
	cout << "The sum of the two numbers:" << sum ;
	
	//3.Variable Memory Concept
	
	int d=4;
	
	cout << endl << "Initial D:" << d ;
	
	d=20;
	
	cout << endl << "New D:" << d ;
	
	
	
	return 0;
}
