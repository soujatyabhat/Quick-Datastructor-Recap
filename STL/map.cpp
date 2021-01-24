#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int,string> student;
	string name;
	int i,roll;
		
	int n;
	cout << "Enter Number of student : ";
	cin >> n;
	
	for (i = 1; i <=n; i++)
		{
			cout << "Enter roll & student : ";
			cin >> roll >> name;
			student.insert(pair<int,string>(roll,name));
		}
		
	system("cls");
	map<int,string> :: iterator iter;
	
	
	for (iter = student.begin(); iter != student.end(); iter++)
		{
			cout << (*iter).first <<" " << (*iter).second <<endl;
		}
	
		
	return 0;
}
