#include <iostream>
#include <vector>
using namespace std;

template <class T>

void display(vector<T> &ar)
{
	for (int i = 0; i < ar.size(); i++)
		{
			cout << ar[i] << " ";
		}
}

int main()
{
	int i,n;
	float data;
	vector<float> arr;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> data;
		arr.push_back(data);
	}
	
	//before insertion
	display(arr);
	
	vector<float> :: iterator iter = arr.begin();
	arr.insert(iter,5,45.6);
	
	//After insertion
	display(arr);
	
return 0;
}

