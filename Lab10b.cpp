
#include <iostream>
#include <cmath>
int multiplyRecursive(int a, int b);
int multiply(int a, int b);

int main()
{
	int a, b,c;
	std::cout << "Введите два числа для умножения: ";
	std::cin >> a >> b;

	// Умножение с использованием рекурсии
	std::cout << "Результат умножения с помощью рекурсии: " << multiplyRecursive(a, b) << std::endl;

	// Умножение без использования рекурсии
	std::cout << "Результат умножения без рекурсии: " << multiply(a, b) << std::endl;

	return 0;
}
// Функция умножения двух чисел с использованием рекурсии
int multiplyRecursive(int a, int b)
{
	if (b == 0) {
		return 0;
	}
	else 
	{
		return a + multiplyRecursive(a, b - 1);
	}
}

// Функция умножения двух чисел без использования экскурсии
int multiply(int a, int b) {
	int result = 0;
	for (int i = 0; i < b; i++) {
		result += a;
	}
	return result;
}



