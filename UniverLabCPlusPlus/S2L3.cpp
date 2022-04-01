//#include <iostream>
//#include <windows.h>
//#include <iomanip>
//#include <string>
//#include <time.h>
//
//#pragma warning(disable : 4996) .
//
//using namespace std; // ������� 2 - ������������ ������ �3 - ������� 6
//
//// 1) ��������� - ��������. ���� - ��� �������, ����� ������, ������� ����������
//// 2) ��������� - ��������. ���������� ���-�� ���������� ���������� ������, ������ �� ��������� �������
//// 3) �������� �������: 1. ����� ������� �������� � �������� ����; 2. ��������� ������ �� ��������� �����
//
//struct Passenger
//{
//	short Number = 0;
//	string SecondName = "NoData";
//	string FirstName = "NoData";
//	string MiddleName = "NoData";
//	short TrainNumber = 0;   // ����� ������
//	short StationNumber = 0; // ����� �������
//	bool isChange = false;  // ������� �� ���������?
//};
//
//#pragma region ������
//void Error()
//{
//	system("cls");
//	cout << "������..." << endl;
//}
//bool NameCheck(string Name)
//{
//	short Type = 0; // 0 = Rus | 1 = Eng
//	char smallL[2][2] = { '�', '�', 'a', 'z' };
//	char bigL[2][2] = { '�', '�', 'A', 'Z' };
//
//	if ((Name[0] >= '�' && Name[0] <= '�') || (Name[0] >= '�' && Name[0] <= '�'))
//		Type = 0; // Rus
//	else if ((Name[0] >= 'a' && Name[0] <= 'z') || (Name[0] >= 'A' && Name[0] <= 'Z'))
//		Type = 1; // Eng
//	else
//		return false;
//
//	if (!(Name[0] >= bigL[Type][0] && Name[0] <= bigL[Type][1]))
//		return false;
//
//	for (int i = 0; i < Name.length(); i++)
//	{
//		if (!((Name[i] >= smallL[Type][0] && Name[i] <= smallL[Type][1]) || (Name[i] >= bigL[Type][0] && Name[i] <= bigL[Type][1])))
//			return false;
//		if (i > 0)
//		{
//			if (Name[i] >= bigL[Type][0] && Name[i] <= bigL[Type][1])
//				return false;
//		}
//		if (Name[i] == ' ')
//			return false;
//	}
//
//	return true;
//}
//bool NumberCheck(string Number)
//{
//	for (int i = 0; i < Number.length(); i++)
//	{
//		if (!(Number[i] >= '0' && Number[i] <= '9'))
//			return false;
//	}
//	return true;
//}
//bool Confirmation(Passenger& pass)
//{
//	if (pass.isChange == false)
//		return true;
//	else
//	{
//		short i = 0;
//		while (i != 1 && i != 2)
//		{
//			cout << "� " << pass.SecondName << " " << pass.FirstName << " ��� ���� �������� ������." << endl;
//			cout << "1. ������ ���������" << endl << "2. ������" << endl;
//			cin >> i;
//			system("cls");
//		}
//		if (i == 1)
//			return true;
//		else
//			return false;
//	}
//}
//void Save(Passenger* pass, int N)
//{
//	FILE* file;
//	file = fopen("SaveS2L3.dat", "wb");
//	for (int i = 0; i < N; i++)
//		fwrite(&pass[i], sizeof(Passenger), 1, file);
//	fclose(file);
//}
//void Load(Passenger* pass, int N, short& MaxFN, short& MaxNT, short& MaxNS)
//{
//	FILE* file;
//	file = fopen("SaveS2L3.dat", "rb");
//	MaxFN = 1;
//	MaxNT = 1;
//	MaxNS = 1;
//	for (int i = 0; i < N; i++)
//	{
//		fread(&pass[i], sizeof(Passenger), 1, file);
//		if (MaxFN < (2 + pass[i].FirstName.length() + pass[i].SecondName.length() + pass[i].MiddleName.length()))
//			MaxFN = 2 + pass[i].FirstName.length() + pass[i].SecondName.length() + pass[i].MiddleName.length();
//		if (MaxNT < to_string(pass[i].TrainNumber).length())
//			MaxNT = to_string(pass[i].TrainNumber).length();
//		if (MaxNS < to_string(pass[i].StationNumber).length())
//			MaxNT = to_string(pass[i].StationNumber).length();
//	}
//	fclose(file);
//}
//#pragma endregion
//
//#pragma region �������� � �����������
//void OutPassenger(Passenger& pass, short N, short MaxFN, short MaxNT, short MaxNS)
//{
//	if (pass.Number == 0)
//		pass.Number = N + 1;
//
//	string FullName = pass.SecondName + " " + pass.FirstName + " " + pass.MiddleName;
//
//	cout << setw(2) << pass.Number << " | " << setw(MaxFN) << FullName << " | � ������: " << setw(MaxNT) << pass.TrainNumber << " | � �������: " << setw(MaxNS) << pass.StationNumber << endl;
//}
//void InPassenger(Passenger& pass, short N, short& MaxFN, short& MaxNT, short& MaxNS)
//{
//	string FirstName, SecondName, MiddleName;
//	string temp;
//
//	pass.Number = N + 1;
//	system("cls");
//	if (Confirmation(pass))
//	{
//		do
//		{
//			cout << "� ���������: " << pass.Number << endl;
//			cout << "������� �������: ";
//			cin >> SecondName;
//			if (!NameCheck(SecondName))
//				Error();
//		} while (!NameCheck(SecondName));
//		pass.SecondName = SecondName;
//		system("cls");
//		do
//		{
//			cout << "� ���������: " << pass.Number << endl;
//			cout << "������� �������: " << SecondName << endl;
//			cout << "������� ���: ";
//			cin >> FirstName;
//			if (!NameCheck(FirstName))
//				Error();
//		} while (!NameCheck(FirstName));
//		pass.FirstName = FirstName;
//		system("cls");
//		do
//		{
//			cout << "� ���������: " << pass.Number << endl;
//			cout << "������� �������: " << SecondName << endl;
//			cout << "������� ���: " << FirstName << endl;
//			cout << "������� ��������: ";
//			cin >> MiddleName;
//			if (!NameCheck(MiddleName))
//				Error();
//		} while (!NameCheck(MiddleName));
//		pass.MiddleName = MiddleName;
//		if (MaxFN < pass.SecondName.length() + pass.FirstName.length() + pass.MiddleName.length() + 2)
//			MaxFN = pass.SecondName.length() + pass.FirstName.length() + pass.MiddleName.length() + 2;
//		system("cls");
//		do
//		{
//			cout << "� ���������: " << pass.Number << endl;
//			cout << "������� �������: " << SecondName << endl;
//			cout << "������� ���: " << FirstName << endl;
//			cout << "������� ��������: " << MiddleName << endl;
//			cout << "������� ����� ������: ";
//			cin >> temp;
//			if (!NumberCheck(temp))
//				Error();
//		} while (!NumberCheck(temp));
//		pass.TrainNumber = stoi(temp);
//		if (MaxNT < to_string(pass.TrainNumber).length())
//			MaxNT = to_string(pass.TrainNumber).length();
//		temp = "";
//		system("cls");
//		do
//		{
//			cout << "� ���������: " << pass.Number << endl;
//			cout << "������� �������: " << SecondName << endl;
//			cout << "������� ���: " << FirstName << endl;
//			cout << "������� ��������: " << MiddleName << endl;
//			cout << "������� ����� ������: " << pass.TrainNumber << endl;
//			cout << "������� ����� �������: ";
//			cin >> temp;
//			if (!NumberCheck(temp))
//				Error();
//		} while (!NumberCheck(temp));
//		pass.StationNumber = stoi(temp);
//		if (MaxNS < to_string(pass.StationNumber).length())
//			MaxNS = to_string(pass.StationNumber).length();
//
//		pass.isChange = true;
//	}
//
//	system("cls");
//}
//void InPassengerRnd(Passenger& pass, short N, short& MaxFN, short& MaxNT, short& MaxNS)
//{
//	string SecondNameRnd[5]   = { "������"   , "������"       , "���������", "���������" , "��������"   };
//	string FirstNameRnd[5]    = { "���������", "������"       , "������"   , "�����"     , "�������"    };
//	string MiddleNameRnd[5]   = { "���������", "�������������", "�������"  , "����������", "����������" };
//	short TrainNumberRnd[5]   = { 1			 , 2			  , 3		   , 4			 , 5			};
//	short StationNumberRnd[5] = { 1			 , 2			  , 3		   , 4			 , 5			};
//	system("cls");
//	if (Confirmation(pass))
//	{
//		pass.Number = N + 1;
//		pass.SecondName = SecondNameRnd[(int)(((rand() % (2 * 15 + 1) - 15) + 25) / 10)];
//		pass.FirstName  = FirstNameRnd [(int)(((rand() % (2 * 15 + 1) - 15) + 25) / 10)];
//		pass.MiddleName = MiddleNameRnd[(int)(((rand() % (2 * 15 + 1) - 15) + 25) / 10)];
//		if (MaxFN < pass.SecondName.length() + pass.FirstName.length() + pass.MiddleName.length() + 2)
//			MaxFN = 2 + pass.SecondName.length() + pass.FirstName.length() + pass.MiddleName.length() + 2;
//		pass.TrainNumber = TrainNumberRnd[(int)(((rand() % (2 * 15 + 1) - 15) + 25) / 10)];
//		if (MaxNT < to_string(pass.TrainNumber).length())
//			MaxNT = to_string(pass.TrainNumber).length();
//		pass.StationNumber = StationNumberRnd[(int)(((rand() % (2 * 15 + 1) - 15) + 25) / 10)];
//		if (MaxNS < to_string(pass.StationNumber).length())
//			MaxNS = to_string(pass.StationNumber).length();
//
//		pass.isChange = true;
//	}
//}
//void OutPassenger(Passenger* pass, int N, short MaxFN, short MaxNT, short MaxNS)
//{
//	for (int i = 0; i < N; i++)
//		OutPassenger(pass[i], i, MaxFN, MaxNT, MaxNS);
//}
//void InPassenger(Passenger* pass, int N, short& MaxFN, short& MaxNT, short& MaxNS)
//{
//	for (int i = 0; i < N; i++)
//		InPassenger(pass[i], i, MaxFN, MaxNT, MaxNS);
//}
//void InPassengerRnd(Passenger* pass, short N, short& MaxFN, short& MaxNT, short& MaxNS)
//{
//	MaxFN = 1;
//	MaxNT = 1;
//	MaxNS = 1;
//	for (int i = 0; i < N; i++)
//		InPassengerRnd(pass[i], i, MaxFN, MaxNT, MaxNS);
//}
//void FindPassengers(Passenger* pass, int N, short MaxFN, short MaxNT, short MaxNS)
//{
//	bool isFinding = false;
//
//	short Number = 0;
//	string SecondName = " ";
//	string FirstName = " ";
//	string MiddleName = " ";
//	short TrainNumber = 0;
//	short StationNumber = 0;
//
//	bool Finding[6] = { false,		 false,		 false,		 false,		 false,		 false };
//	string FindingS[6] = { "��������", "��������", "��������", "��������", "��������", "��������" };
//	string Filter[6] = { "��������", "��������", "��������", "��������", "��������", "��������" };
//
//	while (true)
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			if (Finding[i] == false)
//			{
//				FindingS[i] = "��������";
//				Filter[i] = "��������";
//			}
//			else
//				FindingS[i] = "�������";
//		}
//
//		string temp;
//		cout << "1. ����� �� ������         | " << setw(8) << FindingS[0] << " | ������: " << Filter[0] << endl;
//		cout << "2. ����� �� �������        | " << setw(8) << FindingS[1] << " | ������: " << Filter[1] << endl;
//		cout << "3. ����� �� �����          | " << setw(8) << FindingS[2] << " | ������: " << Filter[2] << endl;
//		cout << "4. ����� �� ��������       | " << setw(8) << FindingS[3] << " | ������: " << Filter[3] << endl;
//		cout << "5. ����� �� ������ ������  | " << setw(8) << FindingS[4] << " | ������: " << Filter[4] << endl;
//		cout << "6. ����� �� ������ ������� | " << setw(8) << FindingS[5] << " | ������: " << Filter[5] << endl;
//		for (int i = 0; i < 6; i++)
//		{
//			if (Finding[i])
//			{
//				cout << "0. ���������" << endl;
//				break;
//			}
//			else if (i == 5)
//				cout << "0. �����" << endl;
//		}
//
//		cin >> temp;
//		if (!NumberCheck(temp))
//			Error();
//		else if ((stoi(temp) < 0 || stoi(temp) > 6))
//			Error();
//		else
//		{
//			if (stoi(temp) != 0)
//			{
//				if (Finding[stoi(temp) - 1] == false)
//					Finding[stoi(temp) - 1] = true;
//				else
//					Finding[stoi(temp) - 1] = false;
//				system("cls");
//			}
//			else
//				break;
//		}
//
//		if (stoi(temp) == 1) // Number
//		{
//			if (Finding[0] == true)
//			{
//				while (true)
//				{
//					cout << "������� ����� ���������: ";
//					cin >> temp;
//					if (NumberCheck(temp))
//					{
//						Number = stoi(temp);
//						Filter[0] = to_string(Number);
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				Number = 0;
//		}
//		else if (stoi(temp) == 2) // SecondName
//		{
//			if (Finding[1] == true)
//			{
//				while (true)
//				{
//					cout << "������� �������: ";
//					cin >> temp;
//					if (NameCheck(temp))
//					{
//						SecondName = temp;
//						Filter[1] = SecondName;
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				SecondName = " ";
//		}
//		else if (stoi(temp) == 3) // FirstName
//		{
//			if (Finding[2] == true)
//			{
//				while (true)
//				{
//					cout << "������� ���: ";
//					cin >> temp;
//					if (NameCheck(temp))
//					{
//						FirstName = temp;
//						Filter[2] = FirstName;
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				FirstName = " ";
//		}
//		else if (stoi(temp) == 4) // MiddleName
//		{
//			if (Finding[3] == true)
//			{
//				while (true)
//				{
//					cout << "������� ��������: ";
//					cin >> temp;
//					if (NameCheck(temp))
//					{
//						MiddleName = temp;
//						Filter[3] = MiddleName;
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				MiddleName = " ";
//		}
//		else if (stoi(temp) == 5) // TrainNumber
//		{
//			if (Finding[4] == true)
//			{
//				while (true)
//				{
//					cout << "������� ����� ������: ";
//					cin >> temp;
//					if (NumberCheck(temp))
//					{
//						TrainNumber = stoi(temp);
//						Filter[4] = temp;
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				TrainNumber = 0;
//		}
//		else if (stoi(temp) == 6) // StationNumber
//		{
//			if (Finding[5] == true)
//			{
//				while (true)
//				{
//					cout << "������� ����� �������: ";
//					cin >> temp;
//					if (NumberCheck(temp))
//					{
//						StationNumber = stoi(temp);
//						Filter[5] = temp;
//						system("cls");
//						break;
//					}
//					else
//						Error();
//				}
//			}
//			else
//				StationNumber = 0;
//		}
//	}
//	system("cls");
//	if (Finding[0] || Finding[1] || Finding[2] || Finding[3] || Finding[4] || Finding[5])
//	{
//		int Count = 0;
//		for (int i = 0; i < N; i++)
//		{
//			bool Find = true;
//			string PassFilter[6] = { to_string(pass[i].Number), pass[i].SecondName, pass[i].FirstName, pass[i].MiddleName, to_string(pass[i].TrainNumber), to_string(pass[i].StationNumber) };
//			for (int j = 0; j < 6; j++)
//			{
//				if (Finding[j] && !(PassFilter[j] == Filter[j]))
//				{
//					Find = false;
//					break;
//				}
//			}
//			if (Find)
//			{
//				Count++;
//				OutPassenger(pass[i], N, MaxFN, MaxNT, MaxNS);
//			}
//		}
//		cout << "����� ������� ���������� �� �������� ��������: " << Count << endl;
//		system("pause");
//	}
//}
//#pragma endregion
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand((unsigned)time(NULL));
//
//	short Choise = 0;
//	short N = 0;
//	string temp = "";
//
//	do
//	{
//		cout << "������� ���������� ����������: ";
//		cin >> temp;
//		if (!NumberCheck(temp) || stoi(temp) <= 0)
//			Error();
//	} while (!NumberCheck(temp) || stoi(temp) <= 0);
//	N = stoi(temp);
//	temp = "";
//	system("cls");
//	Passenger* pass = new Passenger[N];
//
//	short MaxFN = pass[0].SecondName.length() + pass[0].FirstName.length() + pass[0].MiddleName.length() + 2, MaxNT = 1, MaxNS = 1;
//
//	while (true)
//	{
//		bool Check1 = true;
//		do
//		{
//			cout << "0 - �����\n1 - ��������� ������ ���������\n2 - ��������� ���� ����������\n3 - ������� ������ ���������\n4 - ������� ���� ����������\n5 - ����� ���������\n6 - ���������\n7 - ���������" << endl;
//			cin >> temp;
//			if (!NumberCheck(temp))
//				Error();
//			else if (stoi(temp) < 0 || stoi(temp) > 7)
//				Error();
//			else
//				Check1 = false;
//		} while (Check1);
//		Check1 = true;
//		Choise = stoi(temp);
//		system("cls");
//
//		if (Choise == 0) // �����
//			break;
//		else if (Choise == 1) // ��������� ������ ���������
//		{
//			int n = 0;
//			while (true)
//			{
//				cout << "������� ����� ��������� ( 1 - " << N << " ): ";
//				cin >> temp;
//				if (!NumberCheck(temp))
//					Error();
//				else if (!((stoi(temp) - 1) >= 0 && (stoi(temp) - 1) < N))
//					Error();
//				else
//				{
//					n = (stoi(temp) - 1);
//					break;
//				}
//			}
//			system("cls");
//			while (true)
//			{
//				int a;
//				cout << "1. ���� � ����������\n2. ���������� ���������� ����������" << endl;
//				cin >> a;
//				if (a == 1)
//				{
//					InPassenger(pass[n], n, MaxFN, MaxNT, MaxNS);
//					break;
//				}
//				else if (a == 2)
//				{
//					InPassengerRnd(pass[n], n, MaxFN, MaxNT, MaxNS);
//					break;
//				}
//				else
//					Error();
//			}
//		}
//		else if (Choise == 2) //  ��������� ���� ����������
//		{
//
//			while (true)
//			{
//				int a;
//				cout << "1. ���� � ����������\n2. ���������� ���������� ����������" << endl;
//				cin >> a;
//				if (a == 1)
//				{
//					InPassenger(pass, N, MaxFN, MaxNT, MaxNS);
//					break;
//				}
//				else if (a == 2)
//				{
//					InPassengerRnd(pass, N, MaxFN, MaxNT, MaxNS);
//					break;
//				}
//				else
//					Error();
//			}
//		}
//		else if (Choise == 3) // ������� ������ ���������
//		{
//			int n = -2;
//			while (true)
//			{
//				cout << "������� ����� ��������� ( 1 - " << N << " ): ";
//				cin >> n;
//				n--;
//				if (n >= 0 && n < N)
//					break;
//				else
//					Error();
//			}
//			system("cls");
//			OutPassenger(pass[n], n, (2 + pass[n].SecondName.length() + pass[n].FirstName.length() + pass[n].MiddleName.length()), to_string(pass[n].TrainNumber).length(), to_string(pass[n].StationNumber).length());
//		}
//		else if (Choise == 4) // ������� ���� ����������
//			OutPassenger(pass, N, MaxFN, MaxNT, MaxNS);
//		else if (Choise == 5) // �����
//			FindPassengers(pass, N, MaxFN, MaxNT, MaxNS);
//		else if (Choise == 6) // ���������
//			Save(pass, N);
//		else if (Choise == 7) // ���������
//			Load(pass, N, MaxFN, MaxNT, MaxNS);
//
//		if (Choise == 3 || Choise == 4)
//			system("pause");
//		system("cls");
//	}
//}