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

/*#include <iostream>
using namespace std;

int main()
{
	string s;
	int xam = 0;
	int c;
	int l;

	cin >> s;
	l = s.size();
	for (int i = 0; i < l; i++) {
		c = s[i];
		xam = max(xam, c);
		if (xam == 57) {
			break;
		}
	}
	cout << (char)xam;
	return 0;
}*/

/*#include <iostream>
using namespace std;

int f(int);	// a declaration

int f(const int x)	// a definition
{
	//x += 2;	// error: x is const; cannot modify
	return x;
}

int main()
{
	int k = 6;
	cout << f(k);
	return 0;
}*/

/*#include <iostream>
#include <string>;
using namespace std;

string pig_latin(string s)
{
	string x = "";
	if (s[0] == 'a' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') {
		s += "way";
		return s;
	}else {
		x = s[0];
		s = s.erase(0, 1) + x + "ay";	// xoa 1 ki tu from 0
		//s.erase(0);	// xoa tu 0 den het
		return s;
	}
}


int main()
{
	string s = "trca";
	cout << pig_latin(s);

	return 0;
}*/

/*#include <iostream>
using namespace std;

void printArrow(int n, bool left)
{
	if (left) {
		for (int i = 1; i <= n - 1; i++) {
			for (int k = n - i; k > 0; k--)
				cout << " ";
			for (int k = n + 1 - i; k > 0; k--)
				cout << '*';
			cout << endl;
		}
		cout << '*' << endl;
		for (int i = n - 1; i > 0; i--) {
			for (int k = n - i; k > 0; k--)
				cout << ' ';
			for (int k = n + 1 - i; k > 0; k--)
				cout << '*';
			cout << endl;
		}
	}else {
		for (int i = 1; i <= n; i++) {
			for (int k = i-1; k > 0; k--)
				cout << ' ' << ' ';
			for (int k = n+1 - i; k > 0; k--)
				cout << "*";
			cout << endl;
		}
		for (int i = n-1; i > 0; i--) {
			for (int k = i-1; k > 0; k--)
				cout << ' ' << ' ';
			for (int k = n+1 - i; k > 0; k--)
				cout << '*';
			cout << endl;
		}
	}
}

int main()
{
	int n;
	int left;

	cin >> n >> left;
	printArrow(n, left);
	return 0;
}*/

/*#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int hammingDistance(int x, int y)
{
	int ketqua = 0;
	int i = 0;
	while (true) {
		i += 1;
		if (x%2 != y%2) {
			ketqua += 1;
		}
		if (x/2==0 && y/2==0 && i%4==0)
			return ketqua;
		x = (x-x%2) / 2;
		y = (y-y%2) / 2;
	}
}
int main()
{
	int x, y;
	
	cin >> x >> y;
	cout << hammingDistance(x, y);
	return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

void is_odd_even(int n)
{
	int k;
	int b_10, item;
	int test1, test2;

	for (int i = 0; i < n; i++) {
		cin >> k;
		test1 = 1; test2 = 0;
		for (int n = 1; ; n++) {
			b_10 = pow(10, n);
			item = (k%b_10)*10 / b_10;	// number in integer
			test1 *= item%2;
			test2 += item%2;
			if (k/b_10 == 0)
				break;
		}
		if (test1 == 0 && test2 == 0)	// even number
			cout << "yes" << endl;
		else if (test1 == 1)	// odd number
			cout << "yes" << endl;
		else
			cout << "no" << endl;	
	}
}

int main()
{
	int n;

	cin >> n;
	is_odd_even(n);

	return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

bool is(int n)
{
	while (true) {
		if (n%2 == 0) {
			n /= 2;
		}else if (n%3 == 0) {
			n /= 3;
		}else if (n%5 == 0) {
			n /= 5;
		}else {
			if (n == 1)
				return true;
			else
				return false;
		}
	}
}

int main()
{
	int a = 32769;
	cout << is(a);
}*/

/*#include <iostream>
using namespace std;

int main()
{
	int n;
	int so_san_pham[30];
	double mean = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> so_san_pham[i];
		mean += so_san_pham[i];
	}
	mean /= n;

	for (int i = 0; i < n; i++) {
		if (so_san_pham[i] >= mean)
			cout << so_san_pham[i] << " ";
	}

	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n, q;
	cin >> m >> n >> q;
	vector < vector<int> > a1(m, vector<int>(n));
	vector < vector<int> > a2(q, vector<int>(2));

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a1[i][j];
	for (int i = 0; i < q; i++)
		for (int j = 0; j < 2; j++)
			cin >> a2[i][j];

	for (int i = 0; i < q; i++)
		cout << a1[(a2[i][0]) - 1][(a2[i][1]) - 1] << endl;

	// cout << a1[1][3];

	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string a, string b)
{
	char test1, test2;
	for (int i = 0; a[i] != '\0'; i++) {
		test1 = a[i];
		test2 = b[i];
		for (int j = i; a[j] != '\0'; j++) {
			if (a[j] == test1) {
				if (b[j] != test2)
					return false;
			}else {
				if (b[j] == test2)
					return false;
			}
		}
	}
	return true;
}

int main()
{
	string a = "keg";
	string b = "aae";
	cout << isIsomorphic(a, b);
	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> m(1);
	int n;
	int f;
	int x = 0;
	vector <int> num(10, 10);
	vector <int> freq(10, 10);

	cin >> n;
	m.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < n; i++) {
		f = 0;
		for (int j = i; j < n; j++) {
			if (m[j] == m[i]) {
				f++;
			}
		}
		for (int k = 0; k < 10; k++) {
			if (num[k] == m[i]) {   
				break;
			}
			else {
				if (k == 9) {   
					num[x] = m[i];
					freq[x] = f;
					x++;    
					cout << m[i] << " " << f << endl;
					break;
				}
			}
		}
	}

	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int count = 0;

	while (cin >> word) {	// read a word, not a single character
		count++;
	}
	if (count <= 1)
		cout << count << " word";
	else
		cout << count << " words";

	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int x, y, pos;
	int a, b;
	vector < vector<int> > sudoku(9, vector<int>(9));
	vector < vector<int> > blocks(9, vector<int>(9));

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> sudoku[i][j];
	cin >> n >> x >> y;
	if (n > 9 || n < 1) {
		cout << "Invalid number.";
	}
	else if (x > 10 || x < 1 || y>10 || y < 1) {
		cout << "Invalid place.";
	}
	else {
		a = b = 0;      
		for (int i = 0; i < 9; i++) {
			a = (i / 3) * 3;
			b = (i % 3) * 3;
			for (int j = 0; j < 9; j++) {
				blocks[a][b] = sudoku[i][j];
				if ((b + 1) % 3 == 0) {
					a += 1;
					b = (i % 3) * 3;
				}
				else {
					b++;
				}
			}
		}
		pos = (y - 1) / 3 + ((x - 1) / 3) * 3;      
		for (int i = 0; i < 9; i++) {
			if (n == sudoku[x - 1][i] || n == sudoku[i][y - 1] || n == blocks[pos][i]) {
				cout << "Invalid place."; break;
			}
			else {
				if (i == 8)     
					cout << "Valid place.";
			}
		}
	}

	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <float> M = {1.3435, 3.13453, 2.73254, 7.808};

	for (float i : M)	// print elements in vector M
		cout << i << ' ';	// i is an element in vector M
	// 1.3435 3.13453 2.73254 7.808
	cout << endl;

	for (int i : M) {
		if (i%2 == 0)
			cout << i << ' ';
	}
	cout << endl;
	// 2

	M.push_back(6.4892);	// push an elements back	
	cout << M[M.size() - 1];
	// 6.4892
	cout << endl;

	vector <int> N;
	vector <string> words;
	for (int n; cin >> n; ) {	// get numbers from input
		N.push_back(n);
	}
	
	for (string word; cin >> word; ) {
		words.push_back(word);
	}
	cout << "Number of words: " << words.size();
	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	vector <int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < n-1; j++)
			if (A[j] > A[j + 1]) {
				swap(A[j], A[j+1]);
			}
	for (int i = 0; i < n; i++)
		cout << A[i] << ' ';
	return 0;
}*/

/*#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int tangdan(int n)
{
	vector <int> Chuso;
	int num;
	for (num = 0; ; num++) {
		if (n / 10 != 0) {
			Chuso.push_back(n - (n / 10) * 10);
			n /= 10;
		}
		else {
			Chuso.push_back(n);
			break;
		}
	}
	for (int x = 0; x < num; x++)
		for (int y = 0; y < num; y++)
			if (Chuso[y] < Chuso[y + 1])
				swap(Chuso[y], Chuso[y + 1]);
	for (int x = 1; x <= num; x++)
		Chuso[0] += Chuso[x] * pow(10, x);

	return Chuso[0];
}*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
	string phrases[4];
	int n[4] = { 0, 1, 2, 3 };

	for (int i = 0; i < 4; i++) {
		getline(cin, phrases[i]);
	}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (phrases[j] > phrases[j + 1]) {
				swap(phrases[j], phrases[j + 1]);
				swap(n[j], n[j + 1]);
			}
	for (int i = 0; i < 4; i++)
		cout << char('A' + n[i]) << ' ';

	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	int i;
	int j = 0;
	cin >> m >> n;
	vector < vector<int> > M(m, vector<int>(n));
	vector < vector<int> > N((m - 1), vector<int>(n));
	for (int x = 0; x < m; x++)
		for (int y = 0; y < n; y++)
			cin >> M[x][y];
	cin >> i;
	i -= 1;
	for (int x = 0; x < m; x++) {
		if (x != i) {
			for (int y = 0; y < n; y++)
				N[j][y] = M[x][y];
			j++;
		}
	}
	for (int x = 0; x < m - 1; x++) {
		for (int y = 0; y < n; y++)
			cout << N[x][y] << ' ';
		cout << endl;
	}

	return 0;
}*/

/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> makebox(int n)
{
	vector <string> Box;

	Box.push_back(string(n, '#'));	// tao 1 string voi n ki tu #
	for (int i = 1; i < n-1; i++) {
		Box.push_back(string("#" + string(n - 2, ' ') + "#"));
	}
	if (n > 1) {
		Box.push_back(string(n, '#'));
	}
	return Box;
}

int main()
{
	vector <string> Box;
	Box = makebox(9);
	for (const string& row : Box) {	// const: khong sua doi trong vong for
		cout << row << endl;		// &: tham chieu den dia chi, nang cao hieu suat
	}

	return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

string ticTacToe(vector<vector<char>> inputs)
{
	for (int i = 0; i < 2; i++) {
		if (inputs[i][0]==inputs[i][1] && inputs[i][1]==inputs[i][2]) {
			if (inputs[i][0] == 'X')
				return "Player 1 wins";
			else
				return "Player 2 wins";
		}else if(inputs[0][i]==inputs[1][i] && inputs[1][i]==inputs[2][i]) {
			if (inputs[i][0] == 'X')
				return "Player 1 wins";
			else
				return "Player 2 wins";
		}
	}
	if (inputs[0][0]==inputs[1][1] && inputs[1][1]==inputs[2][2]) {
		if (inputs[0][0] == 'X')
			return "Player 1 wins";
		else
			return "Player 2 wins";
	}else {
		return "It's a Tie";
	}
}

int main()
{
	vector < vector<char>> XO(3, vector<char>(3));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> XO[i][j];
	cout << ticTacToe(XO);

	return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
	string s;
	int k;
	int x = 0;
	
	cin >> s >> k;
	for (int i = k-1; i >= 0; i--) {	so phan tu phai doi cho
		for (int j = i; j < s.size()-1-x; j++)	// so lan phai doi cho 1 phan tu
			swap(s[j], s[j+1]);
		x++;	// vi tri doi cuoi cung se giam
	}
	cout << s;
	return 0;
}*/

/*/#include <iostream>
using namespace std;

int grapful(int n)
{
	int n_cp = n;
	int high;
	int lower, higher;
	int daucuoi;
	higher = lower = n;
	if (n / 100 == 0) {
		return 100;
	}else{
		daucuoi = n%10;
		while (n/10 != 0)
			n /= 10;
		high = n;
		daucuoi += 10*n;
		if (n_cp % daucuoi == 0) {
			return n_cp;
		}else {
			while (true) {
				lower--;
				higher++;
				if (lower %(high*10+lower%10) == 0)
					return lower;
				if (higher % (high * 10 + higher % 10) == 0)
					return higher;
			}
		}
	}
}*/

/*long long get_max_sum(int a[], int n)
{
	int maxSum = -10000;
	
	for (int i = 0; i < n; i++) {
		for (int x = i; x >= 0; x--) {
			int s = 0;
			for (int j = 0; j < n-i; j++) {
				s += a[j+x];
			}
			maxSum = max(maxSum, s);
		}
	}
	return maxSum;
}*/

/*int findChildNum(int n)
{
	int childNum = 1;
	int i = 1;
	while (n!= 0) {
		int x = n - (n/10)*10;
		n /= 10;
		int y = n - (n/10)*10;
		n /= 10;
		if ((x+y) > 9)	// khong thoa man
			return 0;
		childNum += i*(x+y-1);
		i *= 10;	// 10^n
		if (n != 0)
			childNum += i;	// cong len them 1 chu so
	}
	return childNum;
}

int reverseNum(int n)
{
	int revNum = 0;
	while (n != 0)
	{
		revNum += n - (n/10)*10;
		n /= 10;
		if (n != 0)
			revNum *= 10;
	}
	return revNum;
}

bool palindromeDescendant(int n)
{
	int childNum, revNum;
	revNum = reverseNum(n);
	if (n == revNum) {
		return true;
	}else {
		for (int i = 0; i < 2; i++) {
			n = findChildNum(n);
			if (n==0 || n/10==0) {	// khong co nghich dao hoac n co 1 chso
				return false;
			}else {
				revNum = reverseNum(n);
				if (n==revNum)
					return true;
			}
		}
		return false;
	}
}*/

/*#include <iostream>
#include <vector>
using namespace std;

bool hasIdentical(vector<vector<int>> N)
{
	int sz = N.size();
	if (sz == N[0].size())
		for (int i = 0; i < sz; i++) {
			for (int j = 0; j < sz; j++) {
				for (int k = 0; k < sz; k++) {
					if (N[i][k] == N[k][j]) {
						if (k == sz-1)
							return true;
					}else {
						break;
					}
				}
			}
		}
	return false;
}*/

/*vector<vector<int>> multiplyMatrix(vector<vector<int>> A, vector<vector<int>> B)
{
	vector<vector<int>> AB;
	int row = A.size();
	int col = B[0].size();
	AB.resize(row, vector<int>(col));
	
	if (A[0].size() == B.size()) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				AB[i][j] = 0;
				for (int x = 0; x < B.size(); x++) {
					AB[i][j] += A[i][x]*B[x][j];
				}
			}
		}
	}
	return AB;
}*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string sortFrequency(string s)
{
	vector <char> C;
	vector <int> F;
	string ketqua = "";

	C.push_back(s[0]);
	F.push_back(0);
	for (int i = 0; i < s.length(); i++) {	// dem tan so
		for (int j = 0; j < C.size(); j++) {
			if (s[i] == C[j]) {
				F[j]++;
				break;
			}
			else {
				if (j == C.size() - 1) {	// s[i] chua co trong C
					C.push_back(s[i]);
					F.push_back(0);
				}
			}
		}
	}
	for (int i = 0; i < C.size() - 1; i++) {	// sap xep theo tan so
		for (int j = 0; j < C.size() - 1; j++) {
			if (F[j] < F[j + 1]) {
				swap(C[j], C[j + 1]);
				swap(F[j], F[j + 1]);
			}
		}
	}
	for (int i = 0; i < C.size() - 1; i++) {	// khi f ==, sap xep theo chu cai
		for (int j = 0; j < C.size() - 1; j++) {
			if (F[j] == F[j + 1]) {
				if (C[j] > 96 && C[j + 1] < 91) {
					swap(C[j], C[j + 1]);
				}
				if (C[j] > C[j + 1]) {
					swap(C[j], C[j + 1]);
				}
			}
		}
	}
	for (int i = 0; i < C.size(); i++)
		for (int j = 0; j < F[i]; j++)
			ketqua += C[i];
	return ketqua;
}


int main()
{
	cout << sortFrequency("ccSctiXmStfmctmgfmfcfgtggEiicfiwtitgcgwScfXwScmwgtmfwigmifgfmSfwitgX");
	
	return 0;
}