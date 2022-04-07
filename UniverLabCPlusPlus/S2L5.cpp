#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

class Triangle
{
public:
	double a, b, c; // Стороны треугольника

	void In();			// Ввод треугольника
	void Out()const;	// Вывод треугольника
	double Square();	// Площадь треугольника
	double Perimetr();	// Периметр треугольника
	friend ostream& operator<<(ostream& stream, const Triangle& T); // Оператор вывода
	friend istream& operator>>(istream& stream, Triangle& T);		// Оператор ввода

#pragma region Операции между треугольниками
	const Triangle& operator=(const Triangle& T);	  // A = B
	const Triangle operator+(const Triangle& T)const; // A + B
	const Triangle operator-(const Triangle& T)const; // A - B
	const Triangle operator*(const Triangle& T)const; // A * B
	const Triangle operator/(const Triangle& T)const; // A / B
#pragma endregion
#pragma region Операции между треугольником и числом
	template <class Type>
	const Triangle operator+(const Type& T)const; // A + значение
	template <class Type>
	const Triangle operator-(const Type& T)const; // A - значение
	template <class Type>
	const Triangle operator*(const Type& T)const; // A * значение
	template <class Type>
	const Triangle operator/(const Type& T)const; // A / значение
#pragma endregion
#pragma region Операции сравнения между треугольниками
	bool operator>(const Triangle& T); // A > B
	bool operator<(const Triangle& T); // A < B
	bool operator==(const Triangle& T); // A == B
	bool operator!=(const Triangle& T); // A != B
	bool operator>=(const Triangle& T); // A >= B
	bool operator<=(const Triangle& T); // A <= B
#pragma endregion
#pragma region Конструкторы и деструкторы
	Triangle() :a(0), b(0), c(0) {};											// Конструктор по умолчанию
	Triangle(double myA, double myB, double myC) :a(myA), b(myB), c(myC) {};	// Конструктор с параметрами
	Triangle(const Triangle& T) :a(T.a), b(T.b), c(T.c) {};						// Конструктор копий
	~Triangle() {};																// Деструктор
#pragma endregion
};
#pragma region Методы класса
void Triangle::In(void)
{
	cout << "Введите сторону A: ";
	cin >> a;
	cout << "Введите сторону B: ";
	cin >> b;
	cout << "Введите сторону C: ";
	cin >> c;
}
void Triangle::Out(void)const
{
	cout << "Сторона A = " << a << "\nСторона B = " << b << "\nСторона C = " << c << endl;
}
double Triangle::Square()
{
	double p = ((a + b + c) / 2);
	return (sqrt(p * (p - a) * (p - b) * (p - c)));
}
double Triangle::Perimetr()
{
	return a + b + c;
}
#pragma endregion
#pragma region Ввод и вывод в класс
ostream& operator<<(ostream& stream, const Triangle& T)
{
	stream << "Сторона A = " << T.a << "\nСторона B = " << T.b << "\nСторона C = " << T.c;
	return stream;
}
istream& operator>>(istream& stream, Triangle& T)
{
	cout << "Введите сторону A: ";
	stream >> T.a;
	cout << "Введите сторону B: ";
	stream >> T.b;
	cout << "Введите сторону C: ";
	stream >> T.c;
	return stream;
}
#pragma endregion
#pragma region Операции между треугольниками
const Triangle& Triangle::operator=(const Triangle& T)
{
	if (this == &T)
		return *this;
	a = T.a;
	b = T.b;
	c = T.c;
	return *this;
}
const Triangle Triangle::operator+(const Triangle& T)const
{
	Triangle R;
	R.a = a + T.a;
	R.b = b + T.b;
	R.c = c + T.c;
	return R;
}
const Triangle Triangle::operator-(const Triangle& T)const
{
	Triangle R;
	R.a = a - T.a;
	R.b = b - T.b;
	R.c = c - T.c;
	return R;
}
const Triangle Triangle::operator*(const Triangle& T)const
{
	Triangle R;
	R.a = a * T.a;
	R.b = b * T.b;
	R.c = c * T.c;
	return R;
}
const Triangle Triangle::operator/(const Triangle& T)const
{
	Triangle R;
	R.a = a / T.a;
	R.b = b / T.b;
	R.c = c / T.c;
	return R;
}
#pragma endregion
#pragma region Операции между треугольником и числом
template <class Type>
const Triangle Triangle::operator+(const Type& T)const
{
	Triangle R;
	R.a = a + T;
	R.b = b + T;
	R.c = c + T;
	return R;
}
template <class Type>
const Triangle Triangle::operator-(const Type& T)const
{
	Triangle R;
	R.a = a - T;
	R.b = b - T;
	R.c = c - T;
	return R;
}
template <class Type>
const Triangle Triangle::operator*(const Type& T)const
{
	Triangle R;
	R.a = a * T;
	R.b = b * T;
	R.c = c * T;
	return R;
}
template <class Type>
const Triangle Triangle::operator/(const Type& T)const
{
	Triangle R;
	R.a = a / T;
	R.b = b / T;
	R.c = c / T;
	return R;
}
#pragma endregion
#pragma region Операции сравнения между треугольниками
bool Triangle::operator>(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 > S2) ? true : false;
}
bool Triangle::operator<(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 < S2) ? true : false;
}
bool Triangle::operator==(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 == S2) ? true : false;
}
bool Triangle::operator!=(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 != S2) ? true : false;
}
bool Triangle::operator>=(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 >= S2) ? true : false;
}
bool Triangle::operator<=(const Triangle& T)
{
	Triangle D = T;
	double S1 = this->Square(), S2 = D.Square();
	return (S1 <= S2) ? true : false;
}
#pragma endregion

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri1;
	Triangle tri2;
	cin >> tri1;
	cin >> tri2;
	system("cls");
	/*cout << tri1 << endl;
	cout << tri2 << endl;
	cout << endl;
	cout << "Периметр треугольника #1: " << tri1.Perimetr() << endl;
	cout << "Площадь тругольника #1: " << tri1.Square() << endl;
	cout << "Периметр треугольника #2: " << tri2.Perimetr() << endl;
	cout << "Площадь тругольника #2: " << tri2.Square() << endl;
	cout << endl;
	cout << "+: " << endl << tri1 + tri2 << endl;
	cout << "-: " << endl << tri1 - tri2 << endl;
	cout << "*: " << endl << tri1 * tri2 << endl;
	cout << "/: " << endl << tri1 / tri2 << endl;
	cout << endl;*/

	system("pause");
}