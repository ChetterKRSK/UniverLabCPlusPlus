//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std; // ����� 2 - ������������ 2(7), ������� 7
//
//bool Proverka(string temp)
//{
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (!(temp[i] >= '0' && temp[i] <= '9'))
//		{
//			return false;
//			break;
//		}
//		else if ((temp[i] >= '0' && temp[i] <= '9') && i == (temp.size() - 1))
//		{
//			return true;
//		}
//	}
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	string Text1;
//	char Text2[50];
//	short t1 = 0;
//	short t2 = 0;
//	string temp;
//	int nSym = 0;
//	char Sym;
//
//	cout << "������� ������: ";
//	cin.getline(Text2, 50);
//	Text1 = Text2;
//
//	for (int i = 0; i < Text1.size(); i++)
//		t1++;
//	for (int i = 0; Text2[i] != 0; i++)
//		t2++;
//
//	while (true)
//	{
//		cout << "������� ���-�� �������� ��� ������: ";
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			if (stoi(temp) <= t1 && stoi(temp) <= t2)
//			{
//				nSym = stoi(temp);
//				break;
//			}
//			else
//			{
//				system("cls");
//				cout << "� �������� ������ ��� ������ ���-�� ��������." << endl;
//			}
//		}
//		else
//		{
//			system("cls");
//			cout << "������... ������� ����������� ��������." << endl;
//		}
//	}
//	while (true)
//	{
//		cout << "������� ������, �� ������� ����������� ������: ";
//		cin >> temp;
//		if (temp.size() == 1)
//		{
//			Sym = temp[0];
//			break;
//		}
//		else if (temp == "void" || temp == "Void")
//		{
//			Sym = ' ';
//			break;
//		}
//		else
//		{
//			system("cls");
//			cout << "������... ������ - �� ������." << endl;
//		}
//	}
//
//	system("cls");
//	cout << "�����:" << endl;
//
//	for (int i = 0; i < nSym; i++)
//		Text1[i] = Sym;
//	for (int i = 0; i < nSym; i++)
//		Text2[i] = Sym;
//
//	cout << Text1 << endl << Text2 << endl;
//
//	system("pause");
//}