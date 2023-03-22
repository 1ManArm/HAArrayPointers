#include <iostream>

void p_swap(int* pnum1, int* pnum2) {
	int tmp;
	tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

void arrSwapper(int arr[], int size) {
	for (int i = 0; i < size; i++)
		if (i % 2 == 0)
			p_swap(&arr[i], &arr[i + 1]);
}

void ascend(int* num1, int num2) {
	int res = *num1;
	for (int i = 1; i < num2; i++)
		res = res * *num1;
	std::cout << res;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Задача 1.
	std::cout << "Задание 1.\nМассив:\n";
	const int size1 = 10;
	int arr1[size1]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << "\nМассив после махинаций:\n";
	arrSwapper(arr1, size1);
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";

	//Задача 2.
	std::cout << "\n\nЗадание 2.\n";
	int n2 = 6;
	std::cout << "Введите степень -> ";
	int m2;
	std::cin >> m2;
	ascend(&n2, m2);

	return 0;
}