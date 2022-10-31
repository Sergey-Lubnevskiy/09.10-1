#include <iostream>
using namespace std;

class Circle
{
protected:
	double diameter;
public:
	Circle()
	{
		diameter = 0;
	}
	Circle(double a)
	{
		diameter = a;
	}
	void Show()
	{
		cout << "Диаметыр = " << diameter << endl;
	}
};

class Square
{
protected:
	double size;
public:
	Square()
	{
		size = 0;
	}
	Square(double a)
	{
		size = a;
	}
	void Show()
	{
		cout << "Размер = " << size << endl;
	}
};

class CircleInSquare : public Circle, public Square
{
public:
	CircleInSquare(double d, double s)
	{
		diameter = d;
		size = s;
	}
	bool Check()
	{
		bool temp;
		if (size > diameter)
			temp = true;
		else
			temp = false;
		return temp;
	}
	void ShowCS()
	{
		Circle::Show();
		Square::Show();
		if (Check())
			cout << "труе\n";
		else
			cout << "фолсе\n";
	}
};

int main()
{
	setlocale(0, "ru");
	CircleInSquare obj(1, 5);
	obj.ShowCS();
}