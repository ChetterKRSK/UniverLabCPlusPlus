#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

class Triangle
{
public:
	double a, b, c; // ������� ������������

	void In();			// ���� ������������
	void Out()const;	// ����� ������������
	double Square();	// ������� ������������
	double Perimetr();	// �������� ������������
	friend ostream& operator<<(ostream& stream, const Triangle& T); // �������� ������
	friend istream& operator>>(istream& stream, Triangle& T);		// �������� �����

#pragma region �������� ����� ��������������
	const Triangle& operator=(const Triangle& T);	  // A = B
	const Triangle operator+(const Triangle& T)const; // A + B
	const Triangle operator-(const Triangle& T)const; // A - B
	const Triangle operator*(const Triangle& T)const; // A * B
	const Triangle operator/(const Triangle& T)const; // A / B
#pragma endregion
#pragma region �������� ����� ������������� � ������
	template <class Type>
	const Triangle operator+(const Type& T)const; // A + ��������
	template <class Type>
	const Triangle operator-(const Type& T)const; // A - ��������
	template <class Type>
	const Triangle operator*(const Type& T)const; // A * ��������
	template <class Type>
	const Triangle operator/(const Type& T)const; // A / ��������
#pragma endregion
#pragma region �������� ��������� ����� ��������������
	bool operator>(const Triangle& T); // A > B
	bool operator<(const Triangle& T); // A < B
	bool operator==(const Triangle& T); // A == B
	bool operator!=(const Triangle& T); // A != B
	bool operator>=(const Triangle& T); // A >= B
	bool operator<=(const Triangle& T); // A <= B
#pragma endregion
#pragma region ������������ � �����������
	Triangle() :a(0), b(0), c(0) {};											// ����������� �� ���������
	Triangle(double myA, double myB, double myC) :a(myA), b(myB), c(myC) {};	// ����������� � �����������
	Triangle(const Triangle& T) :a(T.a), b(T.b), c(T.c) {};						// ����������� �����
	~Triangle() {};																// ����������
#pragma endregion
};
#pragma region ������ ������
void Triangle::In(void)
{
	cout << "������� ������� A: ";
	cin >> a;
	cout << "������� ������� B: ";
	cin >> b;
	cout << "������� ������� C: ";
	cin >> c;
}
void Triangle::Out(void)const
{
	cout << "������� A = " << a << "\n������� B = " << b << "\n������� C = " << c << endl;
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
#pragma region ���� � ����� � �����
ostream& operator<<(ostream& stream, const Triangle& T)
{
	stream << "������� A = " << T.a << "\n������� B = " << T.b << "\n������� C = " << T.c;
	return stream;
}
istream& operator>>(istream& stream, Triangle& T)
{
	cout << "������� ������� A: ";
	stream >> T.a;
	cout << "������� ������� B: ";
	stream >> T.b;
	cout << "������� ������� C: ";
	stream >> T.c;
	return stream;
}
#pragma endregion
#pragma region �������� ����� ��������������
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
#pragma region �������� ����� ������������� � ������
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
#pragma region �������� ��������� ����� ��������������
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
	cout << "�������� ������������ #1: " << tri1.Perimetr() << endl;
	cout << "������� ����������� #1: " << tri1.Square() << endl;
	cout << "�������� ������������ #2: " << tri2.Perimetr() << endl;
	cout << "������� ����������� #2: " << tri2.Square() << endl;
	cout << endl;
	cout << "+: " << endl << tri1 + tri2 << endl;
	cout << "-: " << endl << tri1 - tri2 << endl;
	cout << "*: " << endl << tri1 * tri2 << endl;
	cout << "/: " << endl << tri1 / tri2 << endl;
	cout << endl;*/

	system("pause");
}