#include<iostream>
using namespace std;
#include<algorithm>

//基于冒泡，分治
void quick_sort(int arr[], int start, int end) {
	if (start < end)
	{
		int left = start;
		int right = end;
		int pivot = arr[left];  //基准，一般设置为第一个
		while (left < right) {
			//以temp为界限，比temp大的放左边
			while (arr[right] > pivot && left < right) {
				right--;
			}
			//以temp为界限，比temp小的放右边
			while (arr[left] <= pivot && left < right) {
				left++;
			}
			if (left < right) {
				swap(arr[left], arr[right]);
			}
		}
		swap(arr[start], arr[right]);

		//递归
		quick_sort(arr, start, left - 1);
		quick_sort(arr, left + 1, end);

	}
}
int main() {
	int arr[10] = { 50,100,40,80,30,20,60,90,70,5 };
	quick_sort(arr, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}