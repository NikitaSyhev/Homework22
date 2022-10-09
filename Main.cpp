//Этот проект создан с помощью классического шаблона
#include <iostream>


void degree_nm (int *n, int m) {
	int tmp  = *n;
	for (int i = 1; i < m; i++) {
		tmp *= *n;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Task 1. Change numbers in the massive: \n";

	int const size = 10;
	int arr[size]{ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };

	int* pArr = arr;

	std::cout << "Изначальный массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << *(pArr + i) << ' ';
	std::cout << "\n";

	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size; i+=2) {
		int tmp = *(pArr + i);
		*(pArr + i) = *(pArr + i + 1);
		*(pArr + i + 1) = tmp;
		std::cout << *(pArr + i) << ' ' << *(pArr + i + 1) << ' ';
	}
	std::cout << "\n\n";


	std::cout << "Task2. Degree function void: \n";
	int n, m;
	n = 10;
	int* pn = &n;
	std::cout << "Введите число: ";
	std::cin >> m;
	degree_nm(&n, m);























	return 0;
}