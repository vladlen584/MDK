#include <iostream>
void bubbleSort(int arr[], int n);
// Ghange 
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	std::cout << "Введите размер массива: ";
	std::cin >> n;

	int* arr = new int[n];
	std::cout << "Введите " << n << " целых чисел: ";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	bubbleSort(arr, n);

	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}

	return 0;
}
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				// Обмен значениями
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
