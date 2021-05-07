#include <iostream>
#include <cstdlib> // c standard library
#include <ctime>
using namespace std;

//Random Number Generator

int main()
{
	//Without specification
	/*for (int x=1; x<=10; x++)
	{
		cout << rand() << endl;
	}*/
	
	//With Specification(example random dice number 1-6)
	
	/*for (int x=1; x<=10; x++)
	{
		cout << rand()%6 << endl;//See What Happens
	}*/
	
	//Perfect
	
	srand(time(0));
	for (int x=1; x<=10; x++)
	{
		cout << 1+(rand()%6) << endl;//See What Happens,randoms everytime
	}
	
	
	
	

	return 0;
}
