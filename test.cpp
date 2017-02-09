#include "stroptest.h"

using namespace std;

int main()
{
	String s1;
	cout<<"s1: "<<s1;

	String s2("hello");
	cout<<"s2: "<<s2;

	String s3 = "test";
	cout<<"s3: "<<s3;

	String s4("string");
	cout<<"s4: "<<s4;
	
	s1 = s2;
	cout<<"after construct copy s1:"<<s1;

	s2 = s3;
	cout<<"after operator = : "<<s2;

	s3 = s4;
	cout<<"s3: "<<s3;

	cout<<"index 2: "<<s4[1]<<endl;

	cout<<s3.c_str()<<endl;

	s1+=s2;
	s1+=s3;
	cout<<"last s1: "<<s1;

	char sch[] = "yuecheng add";
	s1+=sch;
	cout<<"s1 : "<<s1;

	if(s1 == s3)
	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equeue"<<endl;
	}
	return 0;
}
