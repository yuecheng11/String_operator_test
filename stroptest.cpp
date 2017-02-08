#include "stroptest.h"
#include <string.h>

using namespace std;

String::String()
{
	pstr_ = new char[1];
	pstr_[0] = '\0';
}
String::String(const char *str)
{
	if(str == NULL)
	{
		pstr_ = new char[1];
		pstr_[0] = '\0';
	}
	else
	{
		pstr_ = new char[strlen(str) + 1];
		strcpy(pstr_,str);
	}
}

String::String(const String &s)
{
	pstr_ = new char[strlen(s.pstr_) + 1];
		strcpy(pstr_,s.pstr_);
}

String::~String()
{
	if(pstr_ != NULL)
	{
		delete []pstr_;
	}
}
String& String::operator=(const String& s)
{
	if(this != &s)
	{
		delete []pstr_;
		pstr_ = new char[strlen(s.pstr_) + 1];
		strcpy(pstr_,s.pstr_);
	}
	return *this;
}

String& String::operator=(const char *s)
{
	if(this !=NULL)
	{
		delete []pstr_;
	}
	pstr_ = new char[strlen(s) + 1];
	strcpy(pstr_,s);
}

String &String::operator+=(const String &s)
{
 
	char* tmp = pstr_;

	cout<<"tmp is : "<<tmp<<endl;
	if(pstr_ != NULL)
	{
		delete []pstr_;
	}
	pstr_ = new char[strlen(tmp) + strlen(s.pstr_) +1];
	strcpy(pstr_,tmp);
	strcat(pstr_,s.pstr_);

	return *this;
}

String &String::operator+=(const char *str)
{
	char* tmp = pstr_;

	cout<<"tmp is : "<<tmp<<endl;
	if(pstr_ != NULL)
	{
		delete []pstr_;
	}
	pstr_ = new char[strlen(tmp) + strlen(str) +1];
	strcpy(pstr_,tmp);
	strcat(pstr_,str);

	return *this;
}

char& String::operator[](size_t index)
{
	if(index < 0 || index > strlen(pstr_))
	{
		cout<<"index error "<<endl;
		//return 'c';
	}

	return pstr_[index];
}

size_t String::size() const
{
	if(pstr_ == NULL)
	{
		return -1;
	}
	return strlen(pstr_);
}

const char* String::c_str()const
{

	return pstr_;
}

bool operator==(const String &str1, const String &str2)
{
	if(!strcmp(str1.c_str(),str2.c_str()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const String &str1, const String &str2)
{
	if(!strcmp(str1.c_str(),str2.c_str()))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool operator<(const String &str1, const String &str2)
{
	if(strcmp(str1.c_str(),str2.c_str()) < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator >(const String &str1, const String &str2)
{
	if(strcmp(str1.c_str(),str2.c_str()) > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

ostream& operator <<(std::ostream &os, const String &s)
{
	os<<s.pstr_<<endl;
	return os;
}

istream &operator >>(std::istream &is, String &s)
{
	char tmp[1024];
	is>>tmp;
	s.pstr_ = tmp;
	return is;
}

String operator+(const String &s1, const String &s2)
{
	String str(s1);
	str+=s2;

	return str;
}