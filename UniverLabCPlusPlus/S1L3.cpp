//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std; // ����� 1 - ������������ 3(3), ������� 4
//
//bool Proverka(string temp) // 500 ; 500.50
//{
//	if (temp.find('.') > 0 && temp.find('.') < temp.length())
//	{
//		for (int i = 0; i < temp.length(); i++)
//		{
//			if (!(temp[i] >= '0' && temp[i] <= '9') && !(temp[i] == '.'))
//			{
//				return false;
//				break;
//			}
//		}
//	}
//	else
//	{
//		for (int i = 0; i < temp.length(); i++)
//		{
//			if (!(temp[i] >= '0' && temp[i] <= '9'))
//			{
//				return false;
//				break;
//			}
//		}
//	}
//}
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	double kVtH = 0;
//	string temp;
//	double Money = 0;
//	while (true)
//	{
//		cout << "������� ���������� ����������� �������: ";
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			kVtH = stod(temp);
//			break;
//		}
//		else
//		{
//			system("cls");
//			cout << "������... ���������� ����� ���� ������ ���������." << endl;
//		}
//	}
//
//	system("cls");
//	if (kVtH == 0)
//	{
//		cout << "����������, ���� �� " << kVtH << "���/� ���������� � ����� 0�. ��� �������: 0���/� * 0.54�." << endl;
//	}
//	else if (kVtH > 200)
//	{
//		if (kVtH - 200 > 300)
//		{
//			Money += 200 * 0.54;
//			kVtH -= 200;
//			Money += 300 * 0.70;
//			kVtH -= 300;
//			Money += kVtH * 0.91;
//
//			kVtH += 500;
//
//			cout << "���� �� " << kVtH << " ���/�: " << Money << "�. ��� �������: " << "200���/� * 0.54�. + 300���/� * 0.70�. + " << kVtH - 500 << "���/� * 0.91�." << endl;
//		}
//		else
//		{
//			Money += 200 * 0.54;
//			kVtH -= 200;
//			Money += kVtH * 0.70;
//
//			kVtH += 200;
//
//			cout << "���� �� " << kVtH << " ���/�: " << Money << "�. ��� �������: " << "200���/� * 0.54�. + " << kVtH - 200 << "���/� * 0.70�." << endl;
//		}
//	}
//	else
//	{
//		Money += 0.54 * kVtH;
//
//		cout << "���� �� " << kVtH << " ���/�: " << Money << "�. ��� �������: " << kVtH << "���/� * 0.54�." << endl;
//	}
//
//	system("pause");
//}