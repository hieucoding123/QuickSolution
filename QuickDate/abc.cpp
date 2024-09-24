/*#include <iostream>
using namespace std;

int main()
{
	string dmy;

	cin >> dmy;
	switch (dmy[3]) {
	case 48:
		switch (dmy[4]) {
		case 49: case 51: case 53: 
		case 55: case 56:
			if (dmy[0] > 51) {
				cout << "no";
			} else if ((dmy[0]==51) && (dmy[1]>50)) {
				cout << "no";
			} else {
				cout << "yes";
			}
			break;
		case 50: case 52:
		case 54: case 57:
			if (dmy[0] > 51) {
				cout << "no";
			} else if ((dmy[0]==51) && (dmy[1]>48)) {
				cout << "no";
			} else {
				cout << "yes";
			}
			break;
		}
		break;
	case 49:
		if ((dmy[0]>51) || (dmy[4]>50)) {
			cout << "no";
		} else if ((dmy[4]==49) && (dmy[0]==51) && (dmy[1]>48)) {
			cout << "no";
		} else if ((dmy[4] == 50) && (dmy[0] == 51) && (dmy[1] > 49)) {
			cout << "no";
		} else {
			cout << "yes";
		}
		break;
	}

	return 0;
}*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*int lythuyet;
	double th1, th2, th3, th4, th5, th6, th7, th8, th9, th10;
	double max1, max2, max3, max4, max5;
	double viet_1, viet_2;
	double ck, st;*/

	double th[10] = { };
	/*cin >> lythuyet;
	cin >> th1 >> th2 >> th3 >> th4 >> th5 >> th6 >> th7 >> th8 >> th9 >> th10;
	cin >> viet_1 >> viet_2;
	cin >> ck >> st;*/
	double ip;

	for (int i = 0; i < 10; i++)
		cin >> th[i];
	for (int m = 0; m < 9; m++) {
		for (int k = 0; k < 9; k++) {
			int c;
			if ((th[k] < th[k + 1])) {
				c = th[k];
				th[k] = th[k + 1];
				th[k + 1] = c;
				k -= 1;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		cout << th[i];
	

	return 0;
}
