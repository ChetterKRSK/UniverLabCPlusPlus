//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std; // Часть 2 - Лабораторная 5(10), Вариант 11
//
//void Error(int N)
//{
//	system("cls");
//	cout << "Ошибка... ";
//	switch (N)
//	{
//	case 1:
//		cout << "Введено неизвестное значение.";
//		break;
//	}
//	cout << endl;
//}
//bool Proverka(string temp)
//{
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (!(temp[i] >= '0' && temp[i] <= '9' || (temp[0] == '-')))
//			return false;
//		else if (i == temp.size() - 1)
//			return true;
//	}
//}
//void ObDel(int a, int b, int *Del)
//{
//	int Min = a;
//
//	if (b < a)
//		Min = b;
//	for (int i = 1; i <= Min; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			if (Del[0] > i)
//				Del[0] = i;
//			if (Del[1] < i)
//				Del[1] = i;
//		}
//	}
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	while (true)
//	{
//		int* Arg = new int[2]{ 0, 0 };
//		int* Del = new int[2]{ 1, 1 };
//		string temp = "";
//
//		for (int i = 0; i < 2; i++)
//		{
//			while (true)
//			{
//				if (i == 0)
//					cout << "Введите аргумент a: ";
//				else if (i == 1)
//					cout << "Введите аргумент b: ";
//				cin >> temp;
//				if (Proverka(temp))
//				{
//					Arg[i] = stoi(temp);
//					system("cls");
//					temp = "";
//					break;
//				}
//				else
//					Error(1);
//			}
//		}
//		ObDel(Arg[0], Arg[1], Del);
//		cout << "Ответ: " << endl;
//		cout << "Минимальный  делитель: " << Del[0] << endl;
//		cout << "Максимальный делитель: " << Del[1] << endl;
//goto1:
//		cout << endl << "1. Повтор" << endl << "2. Выход" << endl;
//		cin >> temp;
//		if (stoi(temp) == 1)
//			system("cls");
//		else if (stoi(temp) == 2)
//			break;
//		else
//		{
//			Error(1);
//			goto goto1;
//		}
//		delete[] Arg, Del;
//	}
//}