#include <iostream>
#include <list>
using namespace std;

void addBeg(list<int> &a)
{
	int data;
	cout << "Enter Data : ";
	cin >> data;
	a.push_front(data);
}

void addEnd(list<int> &a)
{
	int data;
	cout << "Enter Data : ";
	cin >> data;
	a.push_back(data);
}

void delBeg(list<int> &a)
{
	list<int> :: iterator iter = a.begin();
	if (*iter)
	{
		cout << *iter<< " has been deleted" <<endl;
		a.pop_front();
	}
	else
	{
		cout << "List empty" <<endl;
	}
}

void delEnd(list<int> &a)
{
	list<int> :: iterator iter = --a.end();
	if(*iter)
	{
		cout << *iter<< " has been deleted" <<endl;
		a.pop_back();
	}
	else
	{
		cout << "List empty" <<endl;
	}
}

void display(list<int> &a)
{
	cout << "Display : ";
	list<int> :: iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++)
		{
			cout << *iter <<  " ";
		}
	cout << endl;
}

int main()
{
	list<int> ar;
	int i,n,data,ch;		
	while(1)
	{
		cout <<"\n1.AddBeg\n2.AddEnd\n3.DelBeg\n4.DelEnd:\n5.Display\n6.Exit\n\nEnter Choose : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				addBeg(ar);
				break;
			case 2:
				addEnd(ar);
				break;
			case 3:
				delBeg(ar);
				break;
			case 4:
				delEnd(ar);
				break;
			case 5:
				display(ar);
				break;
			case 6:
				exit(1);
				break;	
			default:
				cout << "Input data fault"<<endl;
		}
  }
ar.clear();
return 0;
}
