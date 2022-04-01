//#include <windows.h>
//#include <string>
//#include <iostream>
//#include <ctime>
//
//#pragma warning (disable : 4996)
//
//using namespace std; // Часть 1 - Лабораторная 4, Вариант 1
//
//bool Proverka(string temp) // + >= 1 ; - !(>= 1)
//{
//	for (int i = 0; i < temp.length(); i++)
//	{
//		if ((temp[0] >= '1' && temp[0] <= '9') && (temp[i] >= '0' && temp[i] <= '9'))
//		{
//			if (i == temp.length() - 1)
//				return true;
//		}
//		else
//			return false;
//	}
//}
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	time_t now = time(0);
//	tm* ltm = localtime(&now);
//	int NowMonthInt = ltm->tm_mon + 1;
//	string NowMonthStr;
//	int NowSeasonInt = 0;
//	string NowSeasonStr;
//	string Mounth[12] = { "Январь", "Февраль",/**/ "Март", "Апрель", "Май",/**/ "Июнь", "Июль", "Август",/**/ "Сентябрь", "Октябрь", "Ноябрь",/**/ "Декабрь" };
//	string Seasons[4] = { "Зима", "Весна", "Лето", "Осень" };
//	NowMonthStr = Mounth[NowMonthInt - 1];
//
//	if (NowMonthInt == 12 || NowMonthInt == 1 || NowMonthInt == 2)
//	{
//		NowSeasonStr = Seasons[0];
//		NowSeasonInt = 1;
//	}
//	else if (NowMonthInt == 3 || NowMonthInt == 4 || NowMonthInt == 5)
//	{
//		NowSeasonStr = Seasons[1];
//		NowSeasonInt = 2;
//	}
//	else if (NowMonthInt == 6 || NowMonthInt == 7 || NowMonthInt == 8)
//	{
//		NowSeasonStr = Seasons[2];
//		NowSeasonInt = 3;
//	}
//	else if (NowMonthInt == 9 || NowMonthInt == 10 || NowMonthInt == 11)
//	{
//		NowSeasonStr = Seasons[3];
//		NowSeasonInt = 4;
//	}
//
//	cout << "В данный момент " << NowMonthStr << ", " << NowSeasonStr << "." << endl;
//	int SeasonsCalculate;
//	string temp;
//	while (true)
//	{
//		cout << "Введите количество сезонов для расчёта: ";
//		cin >> temp;
//		if (Proverka(temp))
//		{
//			SeasonsCalculate = stoi(temp);
//			break;
//		}
//		else
//		{
//			system("cls");
//			cout << "В данный момент " << NowMonthStr << ", " << NowSeasonStr << "." << endl;
//			cout << "Ошибка, введено не верное значение..." << endl;
//		}
//	}
//	int n = (NowSeasonInt + SeasonsCalculate) - (((NowSeasonInt + SeasonsCalculate) / 4) * 4);
//	switch (n)
//	{
//	case 1:
//		if (SeasonsCalculate == 1)
//			cout << "Через " << SeasonsCalculate << " сезон наступит Зима." << endl;
//		else if (SeasonsCalculate >= 2 && SeasonsCalculate <= 4)
//			cout << "Через " << SeasonsCalculate << " сезона наступит Зима." << endl;
//		else
//			cout << "Через " << SeasonsCalculate << " сезонов наступит Зима." << endl;
//		break;
//
//	case 2:
//		if (SeasonsCalculate == 1)
//			cout << "Через " << SeasonsCalculate << " сезон наступит Весна." << endl;
//		else if (SeasonsCalculate >= 2 && SeasonsCalculate <= 4)
//			cout << "Через " << SeasonsCalculate << " сезона наступит Весна." << endl;
//		else
//			cout << "Через " << SeasonsCalculate << " сезонов наступит Весна." << endl;
//		break;
//
//	case 3:
//		if (SeasonsCalculate == 1)
//			cout << "Через " << SeasonsCalculate << " сезон наступит Лето." << endl;
//		else if (SeasonsCalculate >= 2 && SeasonsCalculate <= 4)
//			cout << "Через " << SeasonsCalculate << " сезона наступит Лето." << endl;
//		else
//			cout << "Через " << SeasonsCalculate << " сезонов наступит Лето." << endl;
//		break;
//
//	case 0:
//		if (SeasonsCalculate == 1)
//			cout << "Через " << SeasonsCalculate << " сезон наступит Осень." << endl;
//		else if (SeasonsCalculate >= 2 && SeasonsCalculate <= 4)
//			cout << "Через " << SeasonsCalculate << " сезона наступит Осень." << endl;
//		else
//			cout << "Через " << SeasonsCalculate << " сезонов наступит Осень." << endl;
//		break;
//	}
//
//	system("pause");
//	return(0);
//}