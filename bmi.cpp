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
BMI 指数
简介：用于英尺英寸复合单位和身高转换到BMI的工具。
内容：第一行输入两个数（身高），分别表示英尺和英寸，第二行输入一个数（体重），表示镑。
并有对应的BMI，并提供身材指标。
