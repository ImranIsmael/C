//we need to have a base case, to know when it should end.
#include <iostream>

using namespace std;



int factorialCalc(int x)
{
	if (x==1)
	{
		return 1;	
	}
	else
	{
		return x*factorialCalc(x-1);
	}
}

int main()
{
	cout << factorialCalc(5) << endl;	
}
