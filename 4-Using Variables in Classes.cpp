#include <iostream>
#include <string>
using namespace std;
//Accessing private variables by function from public
//Making all variables in class private to avoid messing up (?)
//1.We want to be able to change(set) the variable name into something-void setName
//2.We want to return(get) the value tom or jesicca into the main.

class DirasClass
{
	public:
		void setName(string x)
		{
			name=x;
		}
		string getName()
		{
			return name;
		}
	private:
		string name;
};
int main()
{
	DirasClass bo;
	
	bo.setName("Sir Imran");
	
	cout << bo.getName();
	
	return 0;
}
