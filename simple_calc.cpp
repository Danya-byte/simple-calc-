#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	float num1, num2;
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	char math;
	std::cout << "Введите действие с числами: ";
	std::cin >> math;
	switch (math)
	{
	case '+':
		std::cout << "Результат: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl; break;
	case '-': 
		std::cout << "Результат: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl; break;
	case '*':
		std::cout << "Результат: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl; break;
	case '/':
		if (num2 != 0) {
			std::cout << "Результат: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl; break;
		}
		else {
			std::cout << "Ошибка: Делить на ноль нельзя" << std::endl; break;
		}
	default:
		std::cout << "Error" << std::endl;
	}
	return 0;
}

