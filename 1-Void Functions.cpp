//Basic Void Functions

#include<iostream>

using namespace std;
void print(int a);

int main()
{
	
	int a;
	
	cout << "Enter 1 or 2:" ;
	cin >> a;
	
	print(a);

	return 0;
	
}

void print(int x)
{
	while(x!=1&&x!=2)
	{
			cout << "Invalid,re-enter:";
			cin >> x;
	}
	
	if(x==1)
		cout << "Hello!" << endl;
	else
		cout << "Goodbye!" << endl;
}
