
//#include <iostream>
//#include <cmath>
//using namespace std;
//double h(const double x, const double y); // ��������
//int main()
//{
//	double s, t;
//
//	cout << "s = "; cin >> s;
//	cout << "t = "; cin >> t;
//	double c = (h(s, t * t) + h(t, 1 + s * s) * h(t, 1 + s * s)) / (1 + h(s * t, 1));
//	cout << "c = " << c << endl;
//	return 0;
//}
//double h(const double x, const double y) // ����������
//{
//	return (x * x + sin(x * y ) + y * y) / (1 + x * x + y * x);
// }




#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y); // ��������
int main()
{
	double s, r;

	cout << "s = "; cin >> s;
	cout << "r = "; cin >> r;
	double c = ((g(r, s * s + 1) * g(r, s * s + 1) + g(1, r * r + s)) / (1 + g(1, r * s) * g(1, r * s)));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double x, const double y) // ����������
{
	return  (sin(x) * sin(x) + cos(x) * cos(x)) / (1 + abs(x * y));
}