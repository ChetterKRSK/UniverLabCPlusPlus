//#define _USE_MATH_DEFINES
//
//#include <iostream>
//#include <windows.h>
//#include <math.h>
//#include <string>
//
//using namespace std; // ����� 1 - ������������ 2(2), ������� 7
//
//bool Proverka(string a)
//{
//	bool b = true;
//	for (size_t i = 0; i < a.length(); i++)
//	{
//		if ((a[i] >= '0' && a[i] <= '9') || (i > 0 && a[i] == '.'))
//		{
//
//		}
//		else
//		{
//			return false;
//			b = false;
//			break;
//		}
//	}
//	if (b)
//		return true;
//}
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int a = 2;
//	const double PI = 3.141592;
//	bool End = true;
//
//
//	while (End)
//	{
//		cout << "���� ���������: (arcsin (cos (X + (pi / 4)))) / (cosX + |sinX|)" << endl;
//		double X;
//		string B;
//		bool While1 = true;
//		while (While1)
//		{
//			cout << "������� �������� ���������, X = ";
//			cin >> B;
//			if (Proverka(B))
//			{
//				X = stod(B);
//				B = "";
//				While1 = false;
//			}
//			else
//			{
//				system("cls");
//				cout << "�������� X ����� ��������� ������ �����!" << endl;
//			}
//		}
//
//		cout << endl << "1) (arcsin (cos (" << X << " + " << PI / 4 << "))) / (cos(" << X << ") + |sin(" << X << ")|)" << endl;
//		cout << "2) (arcsin (cos (" << X + PI / 4 << "))) / (cos(" << X << ") + |sin(" << X << ")|)" << endl;
//		cout << "3) (arcsin (" << cos(X + PI / 4) << "))  / (cos(" << X << ") + |sin(" << X << ")|)" << endl;
//		cout << "4) " << (asin(cos(X + PI / 4))) << " / (cos(" << X << ") + |sin(" << X << ")|)" << endl;
//		cout << "5) " << (asin(cos(X + PI / 4))) << " / (" << cos(X) << " + " << fabs(sin(X)) << ")" << endl;
//		cout << "6) " << (asin(cos(X + PI / 4))) << " / " << cos(X) + fabs(sin(X)) << endl << endl;
//
//		double Result = (asin(cos(X + (PI / 4)))) / (cos(X) + (fabs(sin(X))));
//		cout << "����� = " << Result << endl << endl;
//
//		cout << "1. ������ �������" << endl << "0. �����" << endl;
//		while (a != 0 && a != 1)
//			cin >> a;
//		if (a == 0)
//			End = false;
//		system("cls");
//		a = 2;
//	}
//	return 0;
//}