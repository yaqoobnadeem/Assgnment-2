#include "String.h"

//Defult constructor
//we make s(1)

String::String()
{
	string = nullptr;
	size = 0;
}

// s(0) Paramaterize constructor

String::String(char* str)
{
	
	size = 0 ;
	for (const char* i = str; *i != '\0'; i++)
	{
		size++;
	}

	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	string[size] = '\0';

}


//Constructs an empty string, with a length of zero characters.
//we make s(2)	Copy Constructor


String::String(const String & str)
{
	size = str.size;
	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = str.string[i];
	}
	
	string[size] = '\0';
}


// we make s(3)
//Copies the portion of str that begins at the character position pos and spans len characters
String::String(const String& str, int pos, int len)
{
	size = len;
	string = new char[size + 1];
	for (int i = 0; i < len; i++)
	{
		string[i] = str.string[pos + i];
	}
	
	string[len] = '\0';
}


//s(4)
//Copies the null-terminated character sequence (C-string) pointed by s.
String::String(const char* s)
{
	size = 0;
	for (const char* i = s; *i != '\0'; i++)
	{
		size++;
	}

	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = s[i];
	}
	
	string[size] = '\0';
}

// we make s(5)
// Copies the first n characters from the array of characters pointed by s.
String::String(const char* s, int n)
{
	size = n;
	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = s[i];
	}
	string[size] = '\0';
}


//s(6)a & s(b)
//Fills the string with n consecutive copies of character c.

String::String(int n, char c)
{
	size = n;
	string = new char[n + 1];
	for (int i = 0; i < n; i++)
	{
		string[i] = c;
	}

	string[n] = '\0';

}

//Return length of the string :

int String::length()
{
	return size;
}

//Get a character in the string :
//Returns a reference to the character at position pos in the string
char& String::at(int i)
{
	return string[i];
}




String String::substr(int pos, int len) const
{
	String s;
	s.size = len;
	s.string = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		s.string[i] = string[pos + i];
	}

	s.string[len] = '\0';
	return s;
}


ostream& operator<<(ostream& os, const String& str)
{
	for (int i = 0; i < str.size; i++)
	{
		os << str.string[i];
	}
	return os;
}



String::~String()
{
	string = nullptr;
	delete[] string;
}
