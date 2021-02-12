#include <iostream>

using namespace std;

class Student
{
	public:
		
		string name;
		
		void tellname()
		{
			cout<<"kusbey"<<endl;
		}
};

int main ()
{
	Student k;
	
	k.name="musa";
	
	cout<<k.name<<endl;
	
	k.tellname();
	
	return 0;
}
