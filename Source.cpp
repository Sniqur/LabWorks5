#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);

int main()
{
	double gp, gk, k;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double p = gp;
	while (p <= gk)
	{
		k = z(p * p) + 2 * z(2 * p + p * p) + 1;
		cout << p << " " << k << endl;
		p += dg;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x * 2.0) + 1) / (cos(x) + sin(x) * sin(x)));
	else
	{
		double S = 0;
		int k = 0;
		double a = 2*x;
		S = a;
		
		do
		{
			k++;
			double R = 2*2*x*x/((2*k)*(2*k+1));
			a *= R;
			S += a; 
		} while (k < 6);
		return S;
	}
}