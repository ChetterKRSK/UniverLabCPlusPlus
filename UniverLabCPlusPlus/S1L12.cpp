//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std; // Часть 2 - Лабораторная 7(12), Вариант 9
//
//void Error()
//{
//	system("cls");
//	cout << "Ошибка... Введено неизвестное значение." << endl;
//}
//string StringOtbor(string text, char *Simv)
//{
//	string temp;
//	for (int i = 0; i < text.size(); i++)
//	{
//		if (text[i] <= Simv[0] && text[i] >= Simv[1])
//			temp += text[i];
//	}
//	return temp;
//}
//void CharOtbor(char* IznText, char* IshText, char* Simv)
//{
//	for (int i = 0, j = 0; true; i++)
//	{
//		if (IznText[i] <= Simv[0] && IznText[i] >= Simv[1])
//		{
//			IshText[j] = IznText[i];
//			j++;
//		}
//		else if (IznText[i] == '\0')
//		{
//			IshText[j] = '\0';
//			break;
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
//		string temp = " ";
//		char t = '1';
//		int CharSize = 0;
//		string stext = " ";
//		char* TempText = new char[999]{ ' ' };
//		char* Simv = new char[2] { '9', '0' }; // ('Большее', 'Меньшее') ('9', '0') ('Z', 'A') ('z', 'a')
//
//		while (true)
//		{
//			cout << "Выберите предустановку диапазона отбора:" << endl;
//			cout << "1. От '0' до '9'" << endl << "2. От 'A' до 'Z'" << endl << "3. От 'a' до 'z'" << endl;
//			cin >> temp;
//			if (temp.size() == 1)
//			{
//				if (temp[0] == '1')
//				{
//					Simv[0] = '9';
//					Simv[1] = '0';
//				}
//				else if (temp[0] == '2')
//				{
//					Simv[0] = 'Z';
//					Simv[1] = 'A';
//				}
//				else if (temp[0] == '3')
//				{
//					Simv[0] = 'z';
//					Simv[1] = 'a';
//				}
//				break;
//			}
//			else
//				Error();
//		}
//
//		cin.clear();
//		cin.ignore();
//		system("cls");
//
//		cout << "Введите строку: " << endl;
//		while (true)
//		{
//			t = getchar();
//			if (t != '\n')
//			{
//				stext += t;
//				TempText[CharSize] = t;
//				if (t <= Simv[0] && t >= Simv[1])
//					CharSize++;
//			}
//			else
//			{
//				TempText[CharSize] = '\0';
//				break;
//			}
//		}
//		char* ctext = new char[CharSize];
//		ctext = TempText;
//
//
//		stext = StringOtbor(stext, Simv);
//		CharOtbor(TempText, ctext, Simv);
//
//		system("cls");
//
//		if (stext != " " && ctext[0] != '\0')
//		{
//			cout << "String: " << stext << " | Размер: " << stext.size() << endl;
//			cout << "  Char: " << ctext << " | Размер: " << CharSize << endl;
//		}
//		else
//			cout << "Строка являются пустой!" << endl;
//
//		system("pause");
//		system("cls");
//		
//		delete[] TempText;
//	}
//}