#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 2)
		return str;
	char* tmp = new char[len * 1 / 2 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;

		while (i < len && str[i + 1] != 0)
		{
			if (str[i] == ',' && str[i + 1] == '-')
			{
				strcat(t, "*");
				t += 1;
				i += 2;
			}
			else
			{
				*t++ = str[i++];
				*t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char* dest = new char[151];
	cout << "Modified string (param) : " << str << endl;
	dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}