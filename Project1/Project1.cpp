// Lab_03_2.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
		cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < 5 && b != 0)
		F = a * (pow(x, 2) + 14 * x + pow(7, 2) - b);
	if (x > 5 && b == 0)
		F = (x-c*a)/(a*x);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = ((-x)/c)+((-c)/(2*x));
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 5 && b != 0)
		F = a * (pow(x, 2) + 14 * x + pow(7, 2) - b);
	else
		if (x > 5 && b == 0)
			F = F = (x - c * a) / (a * x); 
		else
			F = ((-x) / c) + ((-c) / (2 * x)); 
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}