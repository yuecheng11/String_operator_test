#include "stroptest.h"

using namespace std;

int main()
{
	String s1;
	cout<<s1;

	String s2("hello");
	cout<<s2;

	String scopy = "test";
	cout<<scopy;
	
	String s3(s2);
	cout<<s3;

	String s4 = s2;
	cout<<s4;

	s4 = scopy;
	cout<<s4;

	cout<<"index 5: "<<s4[4]<<endl;

	cout<<s3.c_str()<<endl;

	s2+=scopy;
	cout<<s2;

	return 0;
}
