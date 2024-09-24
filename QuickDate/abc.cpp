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
	//cout << th[1] << th[2];
	
	//for (int i = 0; i < 10; i++) {
	//	cin >> max;
	//	if (max > th[0]) {
	//		for (int k = 0; k < 9; k++)
	//			th[10 - 2 - k] = th[10 - 1 - k];
	//		max = th[0];
	//	}else{
	//		for (int n = 1; n < 10; n++) {
	//			if (max > th[n]) {
	//				for (int m = 0; m <= 10-2-n; m++)
	//					th[10-2-m] = th[10-1-m];
	//				max = th[n];
	//			}
	//		}
	//	}
	//}

	/*for (int i = 0; i < 10; i++) {
		cin >> max;
		for (int k = 0; k < 9; k++) {
			if (max > th[k]) {
				for (int n = 8; n >= k; n--)
					th[n] = th[n+1];
				th[k] = max; 
				break;
			}
		}
	}
	cout << th[0] << th[9] << th[8] << th[5] << th[4];*/
	
	/*for (int i = 0; i < 10; i++) {
		cin >> ip;
		for (int n = 0; i < 9; n++) {
			if (th[n+1]==0 && n<8) {
				th[n] = ip;
				break;
			}else{
				ip = min(th[n], th[n + 1]);
				th[n] = max(th[n + 1], th[n]);
				th[n+1] = ip;
			}
		}
	}

	cout << th[1];*/
	return 0;
}