#include<iostream>
using namespace std;

template<typename T>
void select_sort(T arr, int len)
{

	for (int i = 0; i < len; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}
template<class T>
void print(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 5,4,6,3,7,2,10,1,9,8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	print(arr, len);
	cout << "ÅÅÐòºó£º" << endl;
	select_sort(arr, len);
	print(arr, len);
	system("pause");
	return 0;
}