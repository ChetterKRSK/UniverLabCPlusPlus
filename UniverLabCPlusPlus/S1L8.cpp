//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <time.h>
//
//using namespace std; // ����� 2 - ������������ 3(8), ������� 8
//
//void Error(int N, string Name)
//{
//	system("cls");
//	cout << "������... ";
//	switch (N)
//	{
//	case 1:
//		cout << "������� ����������� ��������.";
//		break;
//	case 2:
//		cout << Name <<" ������ ���� ������ ����.";
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
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	int MasSize = 0;
//	int Vibor = 0;
//	int Diap = 0;
//	int Itog = 1;
//	string temp = "";
//
//	while (true)
//	{
//		cout << "������� ������ ����������� ��������� �������: ";
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			if (stoi(temp) > 0)
//			{
//				MasSize = stoi(temp);
//				temp = "";
//				system("cls");
//				break;
//			}
//			else
//				Error(2, "������ �������");
//		}
//		else
//			Error(1, "");
//	}
//	int* Mas = new int[MasSize];
//	while (true)
//	{
//		cout << "1. ��������� ������ � ����������." << endl << "2. ��������� ������ ���������� �������������� ����������." << endl;
//		cin >> temp;
//		if (temp == "1" || temp == "2")
//		{
//			Vibor = stoi(temp);
//			temp = "";
//			system("cls");
//			break;
//		}
//		else
//			Error(1, "");
//	}
//	if (Vibor == 1)
//	{
//		for (int i = 0; i < MasSize; i++)
//		{
//			while (true)
//			{
//				cout << "������� " << i + 1 << " ������� �������: ";
//				cin >> temp;
//				if (Proverka(temp))
//				{
//					Mas[i] = stoi(temp);
//					temp = "";
//					system("cls");
//					break;
//				}
//				else
//					Error(1, "");
//			}
//		}
//	}
//	if (Vibor == 2)
//	{
//		while (true)
//		{
//			cout << "������� �������� ��� ������������ �����: ";
//			cin >> temp;
//			if (Proverka(temp))
//			{
//				if (stoi(temp) > 0)
//				{
//					Diap = stoi(temp);
//					temp = "";
//					system("cls");
//					break;
//				}
//				else
//					Error(2, "��������");
//			}
//			else
//				Error(1, "");
//
//		}
//		for (int i = 0; i < MasSize; i++)
//			Mas[i] = rand() % (2 * Diap + 1) - Diap;
//	}
//	for (int i = 1; i < MasSize; i += 2)
//	{
//		if (Mas[i] != 0)
//			Itog *= Mas[i];
//	}
//	cout << "������������ ��������� ��������� ������� � ��������� �������� = " << Itog << endl;
//	delete[] Mas;
//	system("pause");
//}