//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <time.h>
//
//using namespace std; // Часть 2 - Лабораторная 4(9), Вариант 8
//
//void Error(int N, string Name)
//{
//	system("cls");
//	cout << "Ошибка... ";
//	switch (N)
//	{
//	case 1:
//		cout << "Введено неизвестно значение.";
//		break;
//	case 2:
//		cout << Name << " должно быть больше нуля.";
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
//void MatrixOutput(int *Matrix, int N, int M, int MaxSize) // N - Строки M - Столбцы
//{
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
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	int N = 0; // Строки
//	int M = 0; // Столбцы
//	int Vibor = 0;
//	int Diap = 0;
//	int MaxSize = 0;
//	string temp = "";
//
//#pragma region Создание матрицы
//	for (int i = 1; i <= 2; i++)
//	{
//		while (true)
//		{
//			if (i == 1)
//				cout << "Введите количество строк в матрице: ";
//			else if (i == 2)
//				cout << "Введите количество столбцов в матрице: ";
//			cin >> temp;
//			if (Proverka(temp))
//			{
//				if (stoi(temp) > 0)
//				{
//					if (i == 1)
//						N = stoi(temp);
//					else if (i == 2)
//						M = stoi(temp);
//					temp = "";
//					system("cls");
//					break;
//				}
//				else if (i == 1)
//					Error(2, "Количество строк");
//				else if (i == 2)
//					Error(2, "Количество столбцов");
//			}
//			else
//				Error(1, "");
//		}
//	}
//	int* Matrix = new int[N * M];
//#pragma endregion
//#pragma region Ввод матрицы
//	while (true)
//	{
//		cout << "1. Заполнение матрицы с клавиатуры" << endl << "2. Заполнение матрицы случайными целочисленными значениями" << endl;
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
//		for (int i = 0; i < N * M; i++)
//		{
//			while (true)
//			{
//				cout << "Введите " << i + 1 << " элемент матрицы: ";
//				cin >> temp;
//				if (Proverka(temp))
//				{
//					Matrix[i] = stoi(temp);
//					temp = "";
//					system("cls");
//					break;
//				}
//				else
//					Error(1, "");
//			}
//		}
//	}
//	else if (Vibor == 2)
//	{
//		while (true)
//		{
//			cout << "Введите диапазон для рандомизации чисел: ";
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
//					Error(2, "Диапазон");
//			}
//			else
//				Error(1, "");
//		}
//		for (int i = 0; i < N * M; i++)
//			Matrix[i] = rand() % (2 * Diap + 1) - Diap;
//	}
//#pragma endregion
//#pragma region Вывод матрицы
//	for (int i = 0; i < N * M; i++)
//	{
//		if (MaxSize < to_string(Matrix[i]).size())
//			MaxSize = to_string(Matrix[i]).size();
//	}
//	cout << "Ваша матрица: " << endl;
//	MatrixOutput(Matrix, N, M, MaxSize);
//	cout << endl;
//#pragma endregion
//#pragma region Решение задачи
//	cout << "Ответ: " << endl;
//	if (M > 1)
//	{
//		for (int n = 0; n < N; n++)
//		{
//			if (Matrix[n * M + 0] < Matrix[n * M + (M - 1)])
//				cout << n + 1 << "| " << Matrix[n * M + 0] << " < " << Matrix[n * M + (M - 1)] << endl;
//			else if (Matrix[n * M + 0] == Matrix[n * M + (M - 1)])
//				cout << n + 1 << "| " << Matrix[n * M + 0] << " = " << Matrix[n * M + (M - 1)] << endl;
//			else if (Matrix[n * M + 0] > Matrix[n * M + (M - 1)])
//				cout << n + 1 << "| " << Matrix[n * M + 0] << " > " << Matrix[n * M + (M - 1)] << endl;
//		}
//	}
//	else
//		cout << "Ответ не может быть получен, т.к. в матрице всего один столбец." << endl;
//#pragma endregion
//	delete[] Matrix;
//	system("pause");
//}