//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <time.h>
//
//using namespace std; // ����� 2 - ������������ 8(13). ������� 10.
//
//void Error()
//{
//	system("cls");
//	cout << "������... ������� ����������� ��������." << endl;
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
//int VvodDan(string Text, string Less, string More)
//{
//	string temp = " ";
//	while (true)
//	{
//		cout << Text;
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			if (Less == " " && More == " ")
//			{
//				system("cls");
//				return stoi(temp);
//			}
//			else if (Less != " " && More == " ")
//			{
//				if (stoi(temp) < stoi(Less))
//				{
//					system("cls");
//					return stoi(temp);
//				}
//				else
//					Error();
//			}
//			else if (Less == " " && More != " ")
//			{
//				if (stoi(temp) > stoi(More))
//				{
//					system("cls");
//					return stoi(temp);
//				}
//				else
//					Error();
//			}
//			else if (Less != " " && More != " ")
//			{
//				if (stoi(temp) < stoi(Less) && stoi(temp) > stoi(More))
//				{
//					system("cls");
//					return stoi(temp);
//				}
//				else
//					Error();
//			}
//		}
//		else
//			Error();
//	}
//}
//int InputMas(int* Mas, int Razmer, int Vvod)
//{
//	string temp = " ";
//	int Diap = 0;
//	if (Vvod == 1) // �������
//	{
//		for (int i = 0; i < Razmer; i++)
//		{
//			cout << "������� " << i + 1 << " ������� �������: ";
//			cin >> temp;
//			if (Proverka(temp))
//			{
//				Mas[i] = stoi(temp);
//				system("cls");
//			}
//			else
//				Error();
//		}
//	}
//	else if (Vvod == 2) // ���������
//	{
//		Diap = VvodDan("������� �������� ������� ��������� ��������: ", " ", "0");
//		for (int i = 0; i < Razmer; i++)
//			Mas[i] = rand() % (2 * Diap + 1) - Diap;
//	}
//	return *Mas;
//}
//void OutputMas(int* Mas, int Razmer, string Text)
//{
//	cout << Text << endl << "| ";
//	for (int i = 0; i < Razmer; i++)
//		cout << Mas[i] << " | ";
//	cout << endl;
//}
//int ItgMasRaz(int *IsxMas, int IsxRaz, string Less)
//{
//	int ItgRaz = 0;
//	for (int i = 0; i < IsxRaz; i++)
//	{
//		if (IsxMas[i] < stoi(Less))
//			ItgRaz++;
//	}
//	return ItgRaz;
//}
//int FormationMas(int* IsxMas, int IsxRaz, int* ItgMas)
//{
//	for (int i = 0, j = 0; i < IsxRaz; i++)
//	{
//		if (IsxMas[i] < 0)
//		{
//			ItgMas[j] = i;
//			j++;
//		}
//	}
//	return *ItgMas;
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	int IsxRazmer = VvodDan("������� ������ �������: ", " ", "0");
//	int* IsxMas = new int[IsxRazmer];
//
//	int Vibor = VvodDan("1. ���������� ������� � ����������. \n2. ���������� ������� ���������� �������������� ����������.\n", "3", "0");
//	*IsxMas = InputMas(IsxMas, IsxRazmer, Vibor);
//
//	OutputMas(IsxMas, IsxRazmer, "�������� ������: ");
//	int ItgRazmer = ItgMasRaz(IsxMas, IsxRazmer, "0");
//	if (ItgRazmer > 0)
//	{
//		int* ItgMas = new int[ItgRazmer];
//		*ItgMas = FormationMas(IsxMas, IsxRazmer, ItgMas);
//		cout << endl;
//		OutputMas(ItgMas, ItgRazmer, "�������� ������: ");
//	}
//	else
//		cout << endl << "�������� ������ �� �������� ������������� ��������!" << endl;
//
//	delete[] IsxMas;
//	system("pause");
//}