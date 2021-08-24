#include <string.h>
#include<iostream>
#include<string>
using namespace std;

void relationalOperation(string s1, string s2)
{

    if (s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}

class String
{
    private:
        char *s;
        int size;
    public:
        String(const char *str = NULL);
        ~String() { delete [] s; }
        String(const String&);
        void print() { cout << s << endl; }
        void change(const char *);
    };

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

void String::change(const char *str)
{
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}