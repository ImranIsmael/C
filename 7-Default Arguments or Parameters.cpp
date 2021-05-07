#include <iostream>

using namespace std;
// Default Arguments / Parameters

int volume(int l=1, int w=1, int h=1);// function prototype

int main()
{
	
	cout << volume(4,5);
	return 0;
}

int volume(int x, int y, int z)
{
	return x*y*z;
}

