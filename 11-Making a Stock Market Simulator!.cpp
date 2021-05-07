#include <iostream>
#include <cmath>

using namespace std;

//Making a Stock Market Simulator!

int main()
{

	float a;
	float p=10000;
	float r=.02;// 2% interest each day
	
	for( int day = 1; day <=10 ; day++)
	{
		a = p * pow(1+r, day);
		cout << day << "---------" << a << endl;
	}
	
	return 0;
}
