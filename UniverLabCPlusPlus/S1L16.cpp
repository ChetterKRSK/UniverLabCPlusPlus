//#include <iostream>
//#include <windows.h>
//#include <time.h>
//#include <string>
//
//using namespace std; // ����� 2 - ������������ 11(16), ������� 10
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
//int VvodDan(void(*Output)(int*, int, int), int* Matrix, int N, int M, string Text, string Less, string More)
//{
//	string temp = " ";
//	while (true)
//	{
//		Output(Matrix, N, M);
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
//void MatrixInput(int* Matrix, int N, int M) // N - ������ M - �������
//{
//	int V = VvodDan("1. ���������� ������� � ����������\n2. ���������� ������� ���������� �������\n", "3", "0");
//	if (V == 1)
//	{
//		for (int i = 0; i < N * M; i++)
//			Matrix[i] = VvodDan("������� " + to_string(i + 1) + " ������� �������: ", " ", " ");
//	}
//	else if (V == 2)
//	{
//		int Diap = VvodDan("������� �������� ��� ������������ �����: ", " ", "0");
//		for (int i = 0; i < N * M; i++)
//			Matrix[i] = rand() % (2 * Diap + 1) - Diap;
//	}
//}
//void MatrixOutput(int* Matrix, int N, int M)
//{
//	int MaxSizeEl = to_string(M).size();
//	int MaxSizeN = to_string(N).size();
//	for (int i = 0; i < M * N; i++)
//	{
//		if (MaxSizeEl < to_string(Matrix[i]).size())
//			MaxSizeEl = to_string(Matrix[i]).size();
//	}
//	for (int n = -2; n < N; n++)
//	{
//		for (int m = -1 - MaxSizeN; m < M; m++)
//		{
//			if (n < 0)
//			{
//				if (n == -2)
//				{
//					if (m >= 0)
//					{
//						if (MaxSizeEl > 1)
//						{
//							for (int i = 0; i < MaxSizeEl - to_string(m + 1).size(); i++)
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
//						if (MaxSizeEl > 1)
//						{
//							for (int i = 0; i < MaxSizeEl - 1; i++)
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
//					if (to_string((int)(Matrix[n * M + m])).size() < MaxSizeEl)
//					{
//						for (int i = 0; i < MaxSizeEl - to_string((int)(Matrix[n * M + m])).size(); i++)
//							cout << " ";
//					}
//					cout << Matrix[n * M + m] << " ";
//				}
//				else
//				{
//					if (to_string(n + 1).size() < -(m + 1))
//						cout << " ";
//					else
//						cout << to_string(n + 1)[to_string(n + 1).size() - -(m + 1)];
//
//					if (m == -1)
//						cout << "|";
//				}
//			}
//		}
//		cout << endl;
//	}
//}
//int Sort(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	int N = VvodDan("������� ���������� �����: ", " ", "0");
//	int M = VvodDan("������� ���������� ��������: ", " ", "0");
//	int* Matrix = new int[N * M];
//
//	MatrixInput(Matrix, N, M);
//
//	while (true)
//	{
//		cout << "�������:" << endl;
//		int n = VvodDan(MatrixOutput, Matrix, N, M, "�������� ������:\n0 - ��� ������\n", to_string(N + 1), "-1");
//		if (n != 0)
//			qsort(Matrix + ((n - 1) * M), M, sizeof(int), Sort); // ������� ����������
//		else
//			break;
//	}
//}