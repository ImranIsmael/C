#include <iostream>

using namespace std;
//Sentinel Controlled Program- as soon as we end the program we can count the sample size, without limits
//Age Averager Programmer, the trick is we do not know how many people we have entered
int main()
{
	int age;
	int totAge=0;
	int numPeople=0;
	
	cout << "Enter first person's age or press -1 to quit" << endl;
	cin >> age;
	
	while (age!=-1)
	{
		totAge+=age;
		numPeople++;
		
		cout << "Enter next person's age or press -1 to quit" << endl;
		cin >> age;
	}
	
	cout << "Number of people entered:" << numPeople << endl;
	cout << "Average age:" << totAge/numPeople << endl;
	
	return 0;
}
