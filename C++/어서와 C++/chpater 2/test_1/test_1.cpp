#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s1, s2;

	cout << "첫 번째 문자열 : ";
	cin >> s1;
	cout << "두 번째 문자열 : ";
	cin >> s2;

	if (s1 != s2)
	{
		cout << "두 문자열이 서로 다릅니다" << endl;
	}
	else
	{
		cout << "두 문자열이 서로 같습니다" << endl;
	}

	return 0;
}