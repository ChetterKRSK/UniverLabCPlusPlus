//#include <windows.h>
//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//#include <string>
//
//using namespace std; // ����� 2 - ������������ ������ 1(6), ������� 2
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
//		cout << "1. ��������� ������ � ����������; \n2. ��������� ������ ���������� �������;" << endl;
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
//				cout << "������... ������� ����������� ��������." << endl;
//			}
//		}
//		else
//		{
//			system("cls");
//			cout << "������... ������� ����������� ��������." << endl;
//		}
//	}
//	if (Vibor1 == 1)
//	{
//		for (int i = 0; i < Razmer; i++)
//		{
//			while (true)
//			{
//				cout << "������� " << i + 1 << " ����������: ";
//				cin >> temp;
//				if (Proverka(temp))
//				{
//					MYINT[i] = stoi(temp);
//					break;
//				}
//				else
//				{
//					system("cls");
//					cout << "������... ������� ����������� ��������." << endl;
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
//			cout << "������� �������� ��������� �����: ";
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
//					cout << "������... �������� ������ ���� ������ 0." << endl;
//				}
//			}
//			else
//			{
//				system("cls");
//				cout << "������... ������� ����������� ��������." << endl;
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
//	cout << "��� ��������� �����: ";
//	for (int i = 0; i < Razmer; i++)
//	{
//		if (MYINT[i] != 0)
//		{
//			Count++;
//			cout << MYINT[i] << "; ";
//		}
//	}
//	cout << endl << "����� ���� �����: " << Sum << endl;
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