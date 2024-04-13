/**
 * @file main.cpp
 * @brief Программа для работы с треугольниками в двумерном пространстве.
 */
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cmath>
using namespace std;
/**
 * @brief Класс, представляющий треугольник в двумерном пространстве.
 */
class Triangle
{
protected:
	double x1, y1, x2, y2, x3, y3;
public:
	/**
	 * @brief Инициализирует объект треугольника с заданными координатами вершин.
	 */
	void Init(double x1, double y1, double x2, double y2, double x3, double y3);
	/**
	 * @brief Считывает координаты вершин треугольника с клавиатуры.
	 */
	void Read();
	/**
	 * @brief Отображает информацию о треугольнике.
	 */
	void Display();
	Triangle add(Triangle one, Triangle two);
	/**
	 * @brief Вычисляет периметр треугольника.
	 * @return Периметр треугольника.
	 */
	double Perimetr();
	/**
	 * @brief Конструктор класса Triangle.
	 */
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	/**
	 * @brief Пустой конструктор класса Triangle.
	 */
	Triangle();
	/**
	 * @brief Получает координату x первой вершины треугольника.
	 */
	double Getx1();
	/**
	 * @brief Получает координату y первой вершины треугольника.
	 */
	double Gety1();
	/**
	 * @brief Получает координату x второй вершины треугольника.
	 */
	double Getx2();
	/**
	 * @brief Получает координату y второй вершины треугольника.
	 */
	double Gety2();
	/**
	 * @brief Получает координату x третьей вершины треугольника.
	 */
	double Getx3();
	/**
	 * @brief Получает координату y третьей вершины треугольника.
	 */
	double Gety3();
	// Остальные методы и функции класса Triangle
};
Triangle::Triangle(){}
double Triangle:: Getx1() {
	return x1;
}
double Triangle::Gety1() {
	return y1;
}
double Triangle::Getx2() {
	return x2;
}
double Triangle::Gety2() {
	return y2;
}
double Triangle::Getx3() {
	return x3;
}
double Triangle::Gety3() {
	return y3;
}
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}
void Triangle::Init(double x1, double y1, double x2, double y2, double x3, double y3) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}
void Triangle::Read() {
	cout << "Введите координаты" << endl;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "ВВедите y1: ";
	cin >> y1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "ВВедите y2: ";
	cin >> y2;
	cout << "Введите x3: ";
	cin >> x3;
	cout << "ВВедите y3: ";
	cin >> y3;
}
void Triangle::Display() {
	cout << "Данные треугольника:" << endl;

	cout << "x1: " << x1 << endl;
	cout << "y1: " << y1 << endl;

	cout << "x2: " << x2 << endl;
	cout << "y2: " << y2 << endl;

	cout << "x3: " << x3 << endl;
	cout << "y3: " << y3 << endl;
}
double Triangle::Perimetr() {
	double d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double d3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	double P = d1 + d2 + d3;
	return P;
}
/*!
 * \image html test.png
 * \image latex test.png
 */
Triangle Triangle::add(Triangle one, Triangle two) {
	Triangle temp;
	temp.x1 = one.x1 + two.x1;
	temp.y1 = one.y1 + two.y1;
	temp.x2 = one.x2 + two.x2;
	temp.y2 = one.y2 + two.y2;
	temp.x3 = one.x3 + two.x3;
	temp.y3 = one.y3 + two.y3;
	return temp;
}
/**
 * @brief Класс, представляющий треугольник с дополнительным параметром.
 */
class Triangles :public Triangle
{
private:
	double z;
public:
	void Get();
	void Put();
	void Init(double z, double x1, double y1, double x2, double y2, double x3, double y3);
	double Perimetr2();
	void Display();
	/**
	 * @brief Инициализирует объект треугольника с дополнительным параметром и координатами вершин.
	 */
	Triangles(double z, double x1, double y1, double x2, double y2, double x3, double y3);
	Triangles();
	/**
	 * @brief Оператор присваивания, копирующий координаты вершин от другого треугольника.
	 */
	void operator = (Triangle b);
};
Triangles::Triangles(){}
/**
 * @brief Вычисляет площадь треугольника по формуле Герона.
 * @f[ S = \sqrt{p \cdot (p - a) \cdot (p - b) \cdot (p - c)} @f]
 * где @f$ p @f$ - полупериметр, @f$ a @f$, @f$ b @f$, @f$ c @f$ - длины сторон треугольника.
 * @return Площадь треугольника.
 */
void Triangles :: operator = (Triangle b) {
	this->x1 = b.Getx1();
	this->y1 = b.Gety1();
	this->x2 = b.Getx2();
	this->y2 = b.Gety2();
	this->x3 = b.Getx3();
	this->y3 = b.Gety3();
	this->z = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
Triangles::Triangles(double z1, double x1, double y1, double x2, double y2, double x3, double y3) :Triangle( x1,  y1,  x2,  y2,  x3,  y3) {
	this->z = z1;
}
void Triangles::Init(double z1, double x1, double y1, double x2, double y2, double x3, double y3) {
	Triangle::Init(x1,y1,x2,y2,x3,y3);
	this->z = z1;
}
/**
	 * @brief Отображает информацию о треугольнике, включая значение дополнительного параметра.
	 */
void Triangles::Display() {
	Triangle::Display();
	cout << "z= " << z<<endl;
}
/**
	 * @brief Вычисляет периметр треугольника с дополнительным параметром.
	 * @return Периметр треугольника с дополнительным параметром.
	 */
double Triangles::Perimetr2() {
	double p,o;
	double d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double d3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	double P = d1 + d2 + d3;
	o = P + z;
	return o;
}
int main(int arec, char const* argv[]) {
	SetConsoleOutputCP(1251);
	Triangle a(1, 2, 3, 6, 5, 4);
	double p,n,m;
	
	cout << "Треугольник 1" << endl;
	//a.Init(1,2,3,6,5,4);
	a.Display();
	cout << "Треугольник второй" << endl;
	Triangles b(8, 7, 8, 9, 4, 5, 6);
	//b.Init(8, 7, 8, 9, 4, 5, 6);
	b.Display();
	n = b.Perimetr();
	cout << "Периметр наследуемый = " << n <<endl;
	m = b.Perimetr2();
	cout << "Периметр собственный = " << m << endl;
	b = a;
	b.Display();
	Triangle* c = new Triangle(4, 5, 6, 7, 8, 9);
	cout << "Треугольник третийй" << endl;
	m=c->Perimetr();
	c->Display();
	cout << "Периметр = " << m << endl;
	delete c;
}

