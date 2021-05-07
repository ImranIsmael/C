#include <iostream>

using namespace std;

int calNum(int x, int y)
{
	int total=x+y;
	return total;
}

int main()
{
	int a, b;
	cout <<"Enter 1st Number:";
	cin >> a;
	cout <<"Enter 2nd Number:";
	cin >> b;
	
	cout << calNum(a,b);
	
	return 0;
}
