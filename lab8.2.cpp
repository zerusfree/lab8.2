#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool AvailabilityOfAwords(char* str);

int main()
{
	char str[101];

	cout << "Enter string: " << endl;
	cin.getline(str, 100);


	if (AvailabilityOfAwords(str))
	{
		cout << "There are \"words\" which starts with \"a\" " << endl;
	}
	else
		cout << "No \"words\" which starts with \"a\" " << endl;

	return 0;
}

bool AvailabilityOfAwords(char* str)
{

	for (int i = 0; str[i + 1] != 0; i++)
	{
		if (str[i] == ' ' && str[i + 1] == 'a' && str[i + 2] != ' ' || str[0] == 'a' && str[1] != ' ')
		{
			return true;
		}
	}
	return false;
}
