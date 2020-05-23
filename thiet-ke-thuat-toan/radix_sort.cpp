#include<iostream>
#include<list>
#include<cmath>
using namespace std;
void in(int* array, int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
void radix_sort(int* arr, int n, int max) {
	int i, j, m, p = 1, index, temp, count = 0;
	list<int> pocket[10];
	for (i = 0; i < max; i++) {
		m = pow(10, i + 1);
		p = pow(10, i);
		for (j = 0; j < n; j++) {
			temp = arr[j] % m;
			index = temp / p;
			pocket[index].push_back(arr[j]);
		}
		count = 0;
		for (j = 0; j < 10; j++) {
			while (!pocket[j].empty()) {
				arr[count] = *(pocket[j].begin());
				pocket[j].erase(pocket[j].begin());
				count++;
			}
		}
	}
}
int main() {
	int n, max;
	cout << "số phần tử: ";
	cin >> n;
	cout << "số kí tự tối đa của phần tử: ";
	cin >> max;
	int arr[n];
	cout << "nhập phần tử:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	radix_sort(arr, n, max);
	cout << "sắp xếp: ";
	in(arr, n);
}
