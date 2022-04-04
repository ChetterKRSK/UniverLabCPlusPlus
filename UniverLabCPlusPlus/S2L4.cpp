#include <iostream>
#include <windows.h>
#include <time.h>
#include <iomanip>
#include <list>
#include <iterator>
#include <string>

using namespace std; // ������� 2 - ������������ ������ �4 - ������� 6

struct Passenger
{
	short Number = 0; // ����� ���������
	string Name = "NoData"; // ���
	short TrainNumber = 0;   // ����� ������
	short StationNumber = 0; // ����� �������
	bool isChange = false;  // ������� �� ���������?
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	list <Passenger> Passengers;
	for (int i = 0; i < 10; i++)
	{
		Passenger pass;
		pass.Name = to_string(i);
		pass.TrainNumber = i;
		pass.StationNumber = i;
		pass.isChange = true;
		Passengers.push_back(pass);
	}
	copy(Passengers.begin(), Passengers.end(), ostream_iterator(cout, " "));
	cout << endl;

	system("pause");
}