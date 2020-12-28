#include<iostream>
using namespace std;

template<class T>
void shell_sort(T Arr, int len)
{
	for (int gap = len / 2; gap > 0; gap = gap / 2)
	{
		for (int i = gap; i < len; i++)
		{
			int j = i;
			while (j - gap >= 0 && Arr[j] < Arr[j - gap])
			{
				swap(Arr[j], Arr[j - gap]);
			}
			//for (int j = i; j -gap >=0; j -= gap)
			//{
			//	if (Arr[j] < Arr[j - gap])
			//	{
			//		swap(Arr[j], Arr[j - gap]);
			//	}
			//	else
			//		break;
			//}
		}
	}
}
template<class T>
void print(T Arr, int len)
{
	int i = 0;
	while (i < len)
	{
		cout << Arr[i] << " ";
		i++;
	}
	cout << endl;
}
int main()
{
	int arr[] = {4,1,6,3,8,10,9,5,2,7,12,11};
	int len = (int)sizeof(arr) / sizeof(arr[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	print(arr, len);
	cout << "ÅÅÐòºó£º" << endl;
	shell_sort(arr, len);
	print(arr, len);
	system("pause");
	return 0;
}
