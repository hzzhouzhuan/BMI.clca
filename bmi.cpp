#include <bits/stdc++.h>
using namespace std;
double yingchi_to_chi(double a, double b);
double chi_to_meter(double c);
double pound_to_kg(double d);
double to_bmi(double e ,double f);
double chi;
int main()
{
	int yingchi;
	int yingcun;
	cout << "How tall is you?(chi,cun)" << endl;
	cin >> yingchi >> yingcun;
	double chi = yingchi_to_chi(yingchi,yingcun);
	double meter = chi_to_meter(chi);
	cout << "Your tall is " << chi << " cun or " << meter << " meter !" << endl;
	cout << "How heavy is you?" << endl;
	double pound;
	cin >> pound;
	double kg = pound_to_kg(pound);
	cout << "You are " << kg << " kg heavy!" << endl;
	double bmi = to_bmi(kg,meter);
	cout << "Your BMI is " << bmi << " !" << endl;
	return 0;
}
double yingchi_to_chi(double a, double b)
{
	return 12 * a + b;
}
double chi_to_meter(double c)
{
	return 0.0254 * c;
}
double pound_to_kg(double d)
{
	return d / 2.2;
}
double to_bmi(double e,double f)
{
	return e / f / f;
}
