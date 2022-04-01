//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <time.h>
//
//using namespace std; // Часть 2 - Лабораторная 9(14). Вариант 12.
//
//void Error()
//{
//	system("cls");
//	cout << "Ошибка... Введено неизвестное значение." << endl;
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
//int InputResearch(string temp, string* VNM, int N, int M) // 5N; n 2; 1 m; M 7 // 1 - Успех; 2 - Ошибка; 3 - Выход
//{
//	string temp1 = "";
//	for (int i = 0; i < temp.size(); i++) // Удаление пробелов
//	{
//		if (temp[i] == ' ')
//			temp.erase(i, 1);
//	}
//	if (temp == "close" || temp == "CLOSE" || temp == "Close" || temp == "C" || temp == "c")
//		return 3;
//	else
//	{
//		for (int i = 0; i < temp.size(); i++) // Поиск нужных символов
//		{
//			if ((temp[i] <= 'Z' && temp[i] >= 'A') || (temp[i] <= 'z' && temp[i] >= 'a'))
//			{
//				if (temp[i] == 'N' || temp[i] == 'n' || temp[i] == 'M' || temp[i] == 'm')
//				{
//					temp1 += temp[i];
//					temp.erase(i, 1);
//				}
//				else
//				{
//					Error();
//					return 2;
//				}
//			}
//		}
//		if ((temp1 == "N" || temp1 == "n") && stoi(temp))
//		{
//			VNM[0] = temp1;
//			VNM[1] = temp;
//			return 1;
//		}
//	}
//}
//void MatrixInput(int* Matrix, int N, int M) // N - Строки M - Столбцы
//{
//	int V = VvodDan("1. Заполнение матрицы с клавиатуры\n2. Заполнение матрицы случайными числами\n", "3", "0");
//	if (V == 1)
//	{
//		for (int i = 0; i < N * M; i++)
//			Matrix[i] = VvodDan("Введите " + to_string(i + 1) + " элемент матрицы: ", " ", " ");
//	}
//	else if (V == 2)
//	{
//		int Diap = VvodDan("Введите диапазон для рандомизации чисел: ", " ", "0");
//		for (int i = 0; i < N * M; i++)
//			Matrix[i] = rand() % (2 * Diap + 1) - Diap;
//	}
//}
//void MatrixOutput(int* Matrix, int N, int M)
//{
//	int MaxSize = 0;
//	for (int i = 0; i < M * N; i++)
//	{
//		if (MaxSize < to_string(Matrix[i]).size())
//			MaxSize = to_string(Matrix[i]).size();
//	}
//	for (int n = -2; n < N; n++)
//	{
//		for (int m = -2; m < M; m++)
//		{
//			if (n < 0)
//			{
//				if (n == -2)
//				{
//					if (m >= 0)
//					{
//						if (MaxSize > 1)
//						{
//							for (int i = 0; i < MaxSize - 1; i++)
//								cout << " ";
//						}
//						cout << m + 1 << " ";
//					}
//					else
//						cout << " ";
//				}
//				if (n == -1)
//				{
//					if (m >= 0)
//					{
//						if (MaxSize > 1)
//						{
//							for (int i = 0; i < MaxSize - 1; i++)
//								cout << "_";
//						}
//						cout << "_" << " ";
//					}
//					else
//						cout << " ";
//				}
//			}
//			else
//			{
//				if (n >= 0 && m >= 0)
//				{
//					if (to_string((int)(Matrix[n * M + m])).size() < MaxSize)
//					{
//						for (int i = 0; i < MaxSize - to_string((int)(Matrix[n * M + m])).size(); i++)
//							cout << " ";
//					}
//					cout << Matrix[n * M + m] << " ";
//				}
//				else
//				{
//					if (m == -2)
//						cout <<n + 1;
//					if (m == -1)
//						cout << "|";
//				}
//			}
//		}
//		cout << endl;
//	}
//}
//void MatrixFormation(int* Matrix, int N, int M, int VN, int VM)
//{
//
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	int N = VvodDan("Введите кол-во строк: ", " ", " 0");
//	int M = VvodDan("Введите кол-во столбцов: ", " ", " 0");
//	int* Matrix = new int[N * M];
//
//	MatrixInput(Matrix, N, M);
//
//	cout << "Исходная матрица: " << endl;
//	MatrixOutput(Matrix, N, M);
//	
//	cin.ignore();
//	while (true)
//	{
//		cin.clear();
//		string temp;
//		string* VNM = new string[2];
//		cout << endl << "Выберите столбец или же строчку, путём ввода в формате ('5N'; 'M 7'; ...), Close - для выхода: ";
//		getline(cin, temp);
//		if (InputResearch(temp, VNM, N, M) == 1)
//		{
//			cout << "Столбец/Строка: " << VNM[0] << endl << "Номер: " << VNM[1] << endl;
//			
//		}
//		else if (InputResearch(temp, VNM, N, M) == 3)
//			break;
//	}
//}