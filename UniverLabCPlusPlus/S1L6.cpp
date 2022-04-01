//#include <windows.h>
//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//#include <string>
//
//using namespace std; // Часть 2 - Лабораторная работа 1(6), Вариант 2
//
//bool Proverka(string temp) // 2f
//{
//	for (int i = 0; i < temp.length(); i++)
//	{
//		if (temp[0] == '-' || (temp[i] >= '0' && temp[i] <= '9'))
//		{
//			if (i == (temp.length() - 1))
//				return true;
//		}
//		else
//		{
//			return false;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int Razmer = 9;
//	int Sum = 0;
//	int* MYINT = new int[Razmer];
//	int Count = 0;
//
//	string temp;
//	int Vibor1;
//	int diap;
//
//	srand((unsigned)time(NULL));
//
//	while (true)
//	{
//		cout << "1. Заполнить массив с клавиатуры; \n2. Заполнить массив случайными числами;" << endl;
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			if (stoi(temp) == 1 || stoi(temp) == 2)
//			{
//				Vibor1 = stoi(temp);
//				system("cls");
//				break;
//			}
//			else
//			{
//				system("cls");
//				cout << "Ошибка... Введено неизвестное значение." << endl;
//			}
//		}
//		else
//		{
//			system("cls");
//			cout << "Ошибка... Введено неизвестное значение." << endl;
//		}
//	}
//	if (Vibor1 == 1)
//	{
//		for (int i = 0; i < Razmer; i++)
//		{
//			while (true)
//			{
//				cout << "Введите " << i + 1 << " переменную: ";
//				cin >> temp;
//				if (Proverka(temp))
//				{
//					MYINT[i] = stoi(temp);
//					break;
//				}
//				else
//				{
//					system("cls");
//					cout << "Ошибка... Введено неизвестное значение." << endl;
//				}
//			}
//			Sum += MYINT[i];
//		}
//		system("cls");
//	}
//	else
//	{
//		while (true)
//		{
//			cout << "Введите диапазон случайных чисел: ";
//			cin >> temp;
//			if (Proverka(temp))
//			{
//				if (stoi(temp) > 0)
//				{
//					diap = stoi(temp);
//					break;
//				}
//				else
//				{
//					system("cls");
//					cout << "Ошибка... Диапазон должен быть больше 0." << endl;
//				}
//			}
//			else
//			{
//				system("cls");
//				cout << "Ошибка... Введено неизвестное значение." << endl;
//			}
//		}
//		for (int i = 0; i < Razmer; i++)
//		{
//			MYINT[i] = (rand() % (2 * diap) - (diap));
//			Sum += MYINT[i];
//		}
//		system("cls");
//	}
//
//	cout << "Все ненулевые числа: ";
//	for (int i = 0; i < Razmer; i++)
//	{
//		if (MYINT[i] != 0)
//		{
//			Count++;
//			cout << MYINT[i] << "; ";
//		}
//	}
//	cout << endl << "Сумма всех чисел: " << Sum << endl;
//	delete[]MYINT;
//
//	//	int x = 5;
//	//	int *p = &x;
//	//  cout << *p << "; " << x << endl;
//	//  (*p)++;
//	//  cout << *p << "; " << x << endl;
//
//	system("pause");
//	return 0;
//}