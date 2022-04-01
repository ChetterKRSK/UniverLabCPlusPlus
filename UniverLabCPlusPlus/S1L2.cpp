//#define _USE_MATH_DEFINES
//
//#include <iostream>
//#include <windows.h>
//#include <math.h>
//#include <string>
//
//using namespace std; // Часть 1 - Лабораторная 2(2), Вариант 7
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
//		cout << "Дано уравнение: (arcsin (cos (X + (pi / 4)))) / (cosX + |sinX|)" << endl;
//		double X;
//		string B;
//		bool While1 = true;
//		while (While1)
//		{
//			cout << "Введите значение аргумента, X = ";
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
//				cout << "Аргумент X может принимать только числа!" << endl;
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
//		cout << "Ответ = " << Result << endl << endl;
//
//		cout << "1. Начать сначала" << endl << "0. Выход" << endl;
//		while (a != 0 && a != 1)
//			cin >> a;
//		if (a == 0)
//			End = false;
//		system("cls");
//		a = 2;
//	}
//	return 0;
//}