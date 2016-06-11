#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;

struct p {
	double x1;
	double	x2;
};

class Equa {				//����� ���������
private:
	int a, b, c;		//���� ���������
public:
	Equa() {			//����������� ������, ������������� �����
		a = 1, b = c = 0;
	}
	void In() {			//�������(�����), ���� ������
		cout << "Enter a!=0";
		cin >> a;
		cout << "Enter b";
		cin >> b;
		cout << "Enter c";
		cin >> c;
	}
	int Dskr() {		//�������, ������� ����������� ����������� ���������
		int D;
		D = b*b - 4 * a*c;
		return D;
	}
	p Korn() {	//�������, ������� ��� ����� ����������� ���������
		double x1, x2;
		if (Dskr()>0)//���������� 2 �����, ����������� ������ 0
		{
			double d1;
			d1 = pow(Dskr(), 0.5);
			x1 = (-b + d1) / 2 / a;
			x2 = (-b - d1) / 2 / a;
		}
		else if (Dskr() == 0)//����������� 0, ���� ������
		{
			x1 = x2 = (-b / 2 / a);
		}
		else//����������� ������ 0, ��� ������������ ������
		{
			cout << "no real solution" << endl;
			x1 = x2 = 0;
		}
		p p1;
		p1.x1 = x1;
		p1.x2 = x2;
		return p1;
	}
	~Equa() {		//���������� ������
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



