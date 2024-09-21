#include <iostream>
using namespace std;

int main()
{
	int day, month;

	cin >> day >> month;
	switch (month) {
	case 1:
	case 2:
		cout << "Spring"; break;
	case 3:
		if (day <= 21) cout << "Spring";
		else cout << "Summer";
		break;
	case 4:
	case 5:
		cout << "Summer"; break;
	case 6:
		if (day <= 22) cout << "Summer";
		else cout << "Autumn";
		break;
	case 7:
	case 8:
		cout << "Autumn"; break;
	case 9:
		if (day <= 23) cout << "Autumn";
		else cout << "Winter";
		break;
	case 10:
	case 11:
		cout << "Winter"; break;
	case 12:
		if (day <= 22) cout << "Winter";
		else cout << "Spring";
	}

	return 0;
}