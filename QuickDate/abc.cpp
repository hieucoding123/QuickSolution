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
		case 50:
			if (dmy[0] > 50) {
				cout << "no";
			}else if (dmy[0] < 50) {
				cout << "yes";
			}else {		// dmy[0] = 50;
				if ((dmy[8] == dmy[9]) && (dmy[8] == 48)) {
					cout << "yes";
				}else {
					if (dmy[8]%2 == 0) {
						if (dmy[9]==48 || dmy[9]==52 || dmy[9]==56) {
							cout << "yes";
						}else {
							if (dmy[1] != 57)
								cout << "yes";
							else
								cout << "no";
						}
					}else {
						if (dmy[9]==50 || dmy[9]==54) {
							cout << "yes";
						}else {
							if (dmy[1] != 57)
								cout << "yes";
							else
								cout << "no";
						}
					}
				}
			}
			break;
		case 52: case 54: case 57:
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

/*#include <iostream>
#include <iomanip>
using namespace std;

int main()
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

	for (int i = 0; i < 10; i++) {	// sort input array
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

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	int delta;
	double x1, x2;

	cin >> a >> b >> c;
	delta = b*b - 4*a*c;

	if (a == 0) {
		if (b==0 && c!=0) {
			cout << "phuong trinh vo nghiem";
		}else if (b==0 && c==0) {
			cout << "phuong trinh co vo so nghiem";
		}else {
			cout << "phuong trinh co 1 nghiem" << endl;
			cout << fixed << setprecision(5) << ((double)c/b*-1);
		}
	}else if (b== 0 && a*c>0) {
		cout << "phuong trinh vo nghiem";
	}else if (delta == 0) {
		cout << "phuong trinh co 1 nghiem" << endl;
		cout << fixed << setprecision(5) << ((-1*b+sqrt(delta)) / (2*a));
	}else {
		cout << "phuong trinh co 2 nghiem" << endl;
		x1 = (-1*b+sqrt(delta)) / (2*a);
		x2 = -1*b/a - x1;
		cout << fixed << setprecision(5) << min(x1, x2) << " " << max(x1, x2);
	}

	return 0;
}*/

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	double delta;
	double x1, x2, x3, x4;

	cin >> a >> b >> c;
	
	delta = b*b - 4*a*c;
	if (a == 0) {
		if (b == 0 && c != 0) {
			cout << "phuong trinh vo nghiem";
		}
		else if (b == 0 && c == 0) {
			cout << "phuong trinh co vo so nghiem";
		}
		else {
			if (b*c > 0) {
				cout << "phuong trinh vo nghiem";
			}else if (b*c < 0) {
				cout << "phuong trinh co 2 nghiem" << endl;
				x1 = -1*sqrt(-1*c/b);
				x2 = -x1;
				cout << fixed << setprecision(5) << x1 << " " << x2;
			}else {
				cout << "phuong trinh co 1 nghiem" << endl;
				cout << fixed << setprecision(5) << 0.00000;
			}
		}
	}else if (b*c == 0) {
		if (c==0) {
			x1 = 0.00000;
			if (a*b >= 0) {
				cout << "phuong trinh co 1 nghiem" << endl;
				cout << fixed << setprecision(5) << x1;
			}else {
				cout << "phuong trinh co 3 nghiem" << endl;
				x2 = sqrt(-1*b/a);
				x3 = -x2;
				cout << fixed << setprecision(5) << x3 << " " << x1 << " " << x2;
			}
		}
		else if (b == 0) {
			if (a * c > 0) {
				cout << "phuong trinh vo nghiem";
			}
			else if (a * c < 0) {
				cout << "phuong trinh co 2 nghiem" << endl;
				x1 = -1 * sqrt((sqrt(-1 * c / a)));
				x2 = -x1;
				cout << fixed << setprecision(5) << x1 << " " << x2;
			}
		}
	}else {	// b*c != 0
		if (delta < 0) {
			cout << "phuong trinh vo nghiem";
		}else if (delta == 0){
			if (a*b < 0) {
				cout << "phuong trinh co 2 nghiem" << endl;
				x1 = -sqrt(-0.5 * b/a);
				x2 = -x1;
				cout << fixed << setprecision(5) << x1 << " " << x2;
			}else {
				cout << "phuong trinh vo nghiem";
			}
		}else {
			if (a*b<0 && a*c>0) {
				cout << "phuong trinh co 4 nghiem" << endl;
				x1 = -sqrt((-b+sqrt(delta))/2/a);
				x2 = -x1;
				x3 = -sqrt((-b-sqrt(delta))/2/a);
				x4 = -x3;
				cout << fixed << setprecision(5)<<min(x1, x3)<<" "<<max(x1, x3)<<" "<<min(x2, x4)<<" "<<max(x2, x4);
			}else if (a*b>0 && a*c>0) {
				cout << "phuong trinh vo nghiem";
			}else {
				cout << "phuong trinh co 2 nghiem" << endl;
				x3 = (-b+sqrt(delta))/2/a;
				x4 = (-b-sqrt(delta))/2/a;
				x1 = -sqrt(max(x3, x4));
				x2 = -x1;
				cout << fixed << setprecision(5) << x1 << " " << x2;
			}
		}
	}

	return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
	int f1;
	int f2;
	int n;

	cin >> n;
	f1 = f2 = 1;
	if (n <= 2) {
		cout << f1;
	}else {
		for (int i = 3; i <= n; i++) {
			f1 = f2 + f1;
			f2 = f1 - f2;
		}
		cout << f1;
	}

	return 0;
	}*/

/*#include <iostream>
using namespace std;

int main()
{
	int n;
	int f1, f2;

	cin >> n;
	f1 = 0;
	f2 = 1;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << f1 << " "; continue;
		}
		if (i == 1) {
			cout << f2 << " "; continue;
		}
		f2 = f2 + f1;
		f1 = f2 - f1;
		cout << f2 << " ";
	}

	return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long sq;
	long n;
	long xam = 0;

	cin >> n;
	for (int i = 1; ; i++) {
		sq = pow(10, i);
		if (n/sq != 0) {
			xam = max(xam, ((n%sq)/ (sq/10)));
		}else {
			cout << xam;
			break;
		}
	}

	return 0;
}*/