//Constructors
#include <iostream>
#include <string>

using namespace std;
//Constructors does not have a return type so we do not need to type in int/void/string etc
//Constructors name is always the same as the class name
//Main reason to use constructors is to give variable initial value*
//You can create multiple object from the same class that does not ovewrite each other.
class DirasClass
{
	public:
		DirasClass(string z) //Constructors
		{
			setName(z);
		}
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
	DirasClass do1 ("Dira Nad Iff");

	cout << do1.getName() << endl;

	DirasClass do2 ("Im Imran John");

	cout << do2.getName();

	return 0;
}
