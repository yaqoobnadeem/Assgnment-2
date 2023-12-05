#include<iostream>
using namespace std;
class String
{
private:
	char * string;
	int size;
public:
	String();
	String(char*);
	String(const String&);
	String(const String& str, int pos, int len);
	String(const char* str);
	String(const char* , int );
	String::String(int , char );
	int length();
	char& at(int );
	String substr(int , int ) const;
	friend ostream& operator<< (ostream& os, const String&);



	~String();
};

