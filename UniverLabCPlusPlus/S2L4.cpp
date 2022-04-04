#include <iostream>
#include <windows.h>
#include <time.h>
#include <iomanip>
#include <list>
#include <iterator>
#include <string>

using namespace std; // Семестр 2 - Лабораторная работа №4 - Вариант 6

struct Passenger
{
	short Number = 0; // Номер пассажира
	string Name = "NoData"; // Имя
	short TrainNumber = 0;   // Номер поезда
	short StationNumber = 0; // Номер станции
	bool isChange = false;  // Внесены ли изменения?
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