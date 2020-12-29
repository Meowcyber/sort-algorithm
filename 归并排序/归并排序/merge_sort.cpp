#include<iostream>
using namespace std;

const int num = 10;
int arr[num] = { 3,6,5,9,2,7,1,4,8,10 };
int temp[num];//辅助数组
int len = (int)sizeof(arr) / sizeof(*arr);

void merge(int start, int mid, int end) {
	int left = start;
	int right = mid + 1;
	int n = start;
	while (left < mid + 1 && right < end + 1) {
		if (arr[left] > arr[right]) {
			temp[n++] = arr[right++];
		}
		else {
			temp[n++] = arr[left++];
		}
	}
	while (left < mid + 1) {
		temp[n++] = arr[left++];
	}
	while (right < end + 1) {
		temp[n++] = arr[right++];
	}
	for (int i = start; i <= end; i++) {
		arr[i] = temp[i];
	}
}
void merge_sort(int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;
		//分
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		//合
		merge(start, mid, end);
	}
}
int main()
{
	cout << "排序前:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "排序后:" << endl;
	merge_sort(0, 10);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}