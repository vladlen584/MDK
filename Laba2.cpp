

#include <iostream>
#include<math.h>
using namespace std;
void task1A();
void task2B();

int main()
{
	task2B();

}

void task1A()
{
	int x, y, z;
	cout << "Please Enter number:";
	cin >> x;
	cout << "Please Enter number2:";
	cin >> y;
	cout << "Please Enter number3:";
	cin >> z;
	if (x > y && x > z)
	{
		cout << "Max number:" << x << "";
	}
	else
	{
		if (y > x && y > z)
		{
			cout << "Max number:" << y << "";
		}
		else
		{
			if (z > x && z > y)
			{
				cout << "Max number:" << z << "";
			}
			else
			{
				if (z = x)
				{
					cout << "the numbers are equal";
				}
				else
				{
					if (y = x)
					{
						cout << "the numbers are equal";
					}
				}
			}
		}
	}

}



void task2B()
{
	setlocale(LC_ALL, "RUS");
	float x, y, fx=0, a = 0;
	int g;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Выберите нужную вам функцию: \n(1) - sh(x)\n(2)-e^x\n(3)-x^2\nЧто выбираете: ";
	cin >> g;
	switch (g)
	{
	case 1:
		fx = sinh(x);
		break;
	case 2:
		fx = exp(x);
		break;
	case 3:
		fx = pow(x, 2);
		break;
	default:
		cout << "Ошибка, введенное вами число не соответствует ни одной функции!";
		break;

	}
	if (a = (x*y) > 0)
	{
		a = pow((fx + y),2)-cbrt(fabs(fx));

	}
	if (a = x * y < 0) 
	{
		a = pow((fx + y), 2) + sin(x);
	}
	if (a=x*y==0)
	{
		a = pow((fx + y), 2) + pow(y, 3);
	}
	cout << "Значение функции равно: " << a << "\n";
	
}
