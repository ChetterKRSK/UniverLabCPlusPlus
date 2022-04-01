//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std; // „асть 1 - Ћабораторна€ 3(3), ¬ариант 4
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
//		cout << "¬ведите количество потреблЄнной энергии: ";
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			kVtH = stod(temp);
//			break;
//		}
//		else
//		{
//			system("cls");
//			cout << "ќшибка...  оличество может быть только численным." << endl;
//		}
//	}
//
//	system("cls");
//	if (kVtH == 0)
//	{
//		cout << "ѕоздравл€ю, цена за " << kVtH << "к¬т/ч повысилась и равна 0р. ѕри расчЄте: 0к¬т/ч * 0.54р." << endl;
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
//			cout << "÷ена за " << kVtH << " к¬т/ч: " << Money << "р. ѕри расчЄте: " << "200к¬т/ч * 0.54р. + 300к¬т/ч * 0.70р. + " << kVtH - 500 << "к¬т/ч * 0.91р." << endl;
//		}
//		else
//		{
//			Money += 200 * 0.54;
//			kVtH -= 200;
//			Money += kVtH * 0.70;
//
//			kVtH += 200;
//
//			cout << "÷ена за " << kVtH << " к¬т/ч: " << Money << "р. ѕри расчЄте: " << "200к¬т/ч * 0.54р. + " << kVtH - 200 << "к¬т/ч * 0.70р." << endl;
//		}
//	}
//	else
//	{
//		Money += 0.54 * kVtH;
//
//		cout << "÷ена за " << kVtH << " к¬т/ч: " << Money << "р. ѕри расчЄте: " << kVtH << "к¬т/ч * 0.54р." << endl;
//	}
//
//	system("pause");
//}