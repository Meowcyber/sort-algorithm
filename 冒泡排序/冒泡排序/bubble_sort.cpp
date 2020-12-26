#include<iostream>
using namespace std;

template<class T>
void bubble_sort(T arr[], int len)
{
	for (int i = 0;i < len-1; i++)
	{
		for (int j =0; j < len-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
template<class T>
void print(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	float arr[] = {6.1,3.0,5.7,7.8,4.2,9.6,1.5,8.9,2.0,10.4};
	int len = (sizeof(arr) / sizeof(*arr));
	cout << "ÅÅÐòÇ°£º" << endl;
	print(arr, len);
	cout << "ÅÅÐòºó£º" << endl;
	bubble_sort(arr,len);
	print(arr, len);
	system("pause");
	return 0;
}
