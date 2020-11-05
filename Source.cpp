// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y); // прототип
int main()
{
	double r, s;
	
		cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	double c = (g(1,r) + g(s*s-1,r*r))/(g(s,1+r));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double x, const double y) // визначення
{
	return (x*x+y*y+ sin(x*y))/(1+fabs(x*y));
}