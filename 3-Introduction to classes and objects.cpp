#include <iostream>

using namespace std;

// classes and objects
//Objects tells you what class you're working on
class Dira
{
	//public acces specifier,can be used outside class
	public:
		void coolWord()
		{
			cout << "Let's get the juice" << endl;
		}
		void notcoolWord()
		{
			cout << "What the fuck huh" << endl;
		}
};

int main()
{
	//Object
	Dira dirasObject;
	
	dirasObject.coolWord();
	dirasObject.notcoolWord();
	
	return 0;
}
