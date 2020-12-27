#include<iostream>
using namespace std;

template<class T>
void insert_sort(T arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}
template<class T>
void print(T arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = {5,2,6,7,10,1,3,9,8,4};
	int len = sizeof(arr) / sizeof(*arr);
	cout << "ÅÅÐòÇ°£º" << endl;
	print(arr, len);
	cout << "ÅÅÐòºó£º" << endl;
	insert_sort(arr, len);
	print(arr, len);
	system("pause");
	return 0;
}