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

/*int main()
{
	int lythuyet;
	// 	double th1, th2, th3, th4, th5, th6, th7, th8, th9, th10;
	// 	double max1, max2, max3, max4, max5;
	double th[10] = { };
	double c;
	double tbinh_th;
	double viet_1, viet_2;
	double tbinh_viet;
	double ck, st;
	int nop_th = 0;
	double cc;
	double tong_ket;


	cin >> lythuyet;
	// 	cin >> th1 >> th2 >> th3 >> th4 >> th5 >> th6 >> th7 >> th8 >> th9 >> th10;

	for (int i = 0; i < 10; i++) {
		cin >> th[i];
		if (th[i] != 0)
			nop_th++;
	}
	for (int m = 0; m < 9; m++) {
		for (int k = 0; k < 9; k++) {
			// 			double c;
			if ((th[k] < th[k + 1])) {
				c = th[k];
				th[k] = th[k + 1];
				th[k + 1] = c;
				k -= 1;
			}
		}
	}
	cin >> viet_1 >> viet_2;
	cin >> ck >> st;

	tbinh_th = (th[0] + th[1] + th[2] + th[3] + th[4]) / 5;
	cout << "Trung binh thuc hanh = " << tbinh_th << endl;
	tbinh_viet = (viet_1 + viet_2) / 2;
	cout << "Trung binh giua ki (viet) = " << tbinh_viet << endl;
	cc = lythuyet + nop_th;
	if (cc < 20) {
		tong_ket = 0;
	}
	else {
		tong_ket = 2/10 * tbinh_th + 2/10 * tbinh_viet + 6/10 * (st + ck);
	}
	for (int i = 0; i < 10; i++)
		cout << "th" << i << ": " << th[i];
	if (tong_ket > 10)
		tong_ket = 10;
	else 
		tong_ket = round(tong_ket*10)/10;
	cout << fixed << setprecision(1) << tong_ket;

	return 0;
}*/

