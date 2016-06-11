#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;

struct p {
	double x1;
	double	x2;
};

class Equa {				//класс уравнение
private:
	int a, b, c;		//кэфы уравнения
public:
	Equa() {			//конструктор класса, инициализация кэфов
		a = 1, b = c = 0;
	}
	void In() {			//функция(метод), ввод данных
		cout << "Enter a!=0";
		cin >> a;
		cout << "Enter b";
		cin >> b;
		cout << "Enter c";
		cin >> c;
	}
	int Dskr() {		//функция, считает дискриминат квадратного уравнения
		int D;
		D = b*b - 4 * a*c;
		return D;
	}
	p Korn() {	//функция, считает два корня квадратного уравнения
		double x1, x2;
		if (Dskr()>0)//Существует 2 корня, дискриминат больше 0
		{
			double d1;
			d1 = pow(Dskr(), 0.5);
			x1 = (-b + d1) / 2 / a;
			x2 = (-b - d1) / 2 / a;
		}
		else if (Dskr() == 0)//Дискриминат 0, один корень
		{
			x1 = x2 = (-b / 2 / a);
		}
		else//Дискриминат меньше 0, нет вещественных корней
		{
			cout << "no real solution" << endl;
			x1 = x2 = 0;
		}
		p p1;
		p1.x1 = x1;
		p1.x2 = x2;
		return p1;
	}
	~Equa() {		//деструктор класса
		cout << "destuct" << endl;
	}
};
int main()
{
	Equa e;
	e.In();
	int i = e.Dskr();
	p p2 = e.Korn();
	return 0;
}



