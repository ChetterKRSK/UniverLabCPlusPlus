//#include <iostream>
//#include <windows.h>
//
//using namespace std; // ����� 2 - ������������ 6(11), ������� 1
//
//void InputArg(string* Arg)
//{
//	for (int i = 0; i < 2; i++)
//	{
//		cout << "������� " << i + 1 << " ��������: ";
//		cin >> Arg[i];
//		system("cls");
//	}
//}
//void Func(string* Arg)
//{
//	string temp = Arg[0];
//	Arg[0] = Arg[1];
//	Arg[1] = temp;
//}
//void OutputArg(string* Arg)
//{
//	for (int i = 0; i < 2; i++)
//		cout << i + 1 << ": " << Arg[i] << endl;
//}
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	string *Arg = new string[2];
//	InputArg(Arg);
//	cout << "��������� �� ���������: " << endl;
//	OutputArg(Arg);
//	Func(Arg);
//	cout << "��������� ����� ���������: " << endl;
//	OutputArg(Arg);
//	system("pause");
//	delete[] Arg;
//}