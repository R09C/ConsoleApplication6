#ifndef CSTR_T
#define CSTR_T
#include <iostream>
#include <vector>
#include <String>
using namespace std;
class CStr
{
	vector<char> string;
	vector<char> generate(int length);
public:
	CStr();
	CStr(char* str);
	CStr(int length);
	CStr(const CStr& obj);
	CStr(const char* str);

	~CStr();
	int operator[](int index);
	CStr& operator=(CStr& obj);
	CStr& operator=(char* str);
	bool operator>(CStr& obj);
	bool operator==(CStr& obj);
	int get_length();
	friend ostream& operator<<(ostream& stream, CStr& obj);
};



#endif

