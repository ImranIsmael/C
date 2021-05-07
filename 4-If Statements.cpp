#include <iostream>

using namespace std;

int main()
{
	int x, a, b;

	cout << "Select\n\t1.Sum\n\t2.Subtract\n";
	cin  >> x ;
	
	
	
	while(x!=1&&x!=2)
	{
		cout << "Error" << endl;
		cin >> x;
	}
	if(x==1)
	{
		cout << "Enter 1st Num:";
		cin >> a;
		cout << "Enter 2nd Num:";
		cin >> b; 
		
		int total=a+b;
		cout << "Sum of 1st&2nd:" << total ;
	}
	
	if(x==2)
	{
		cout << "Enter 1st Num:";
		cin >> a;
		cout << "Enter 2nd Num:";
		cin >> b;
		
		int total=a-b;
		cout << "Subtraction of 1st&2nd:" << total ; 
	}
	
	return 0;
}
