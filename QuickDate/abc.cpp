#include <iostream>
using namespace std;

char main()
{
	char a;
	cin >> a;

	if ((a >= 'a') && (a <= 'z')) {
		a -= 32;
	}
	else if ((a >= 'A') && (a <= 'Z')) {
		a += 32;
	}
	else {
		;
	}
	cout << a;

	return 0;
}
