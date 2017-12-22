// cpp_lab_1_3_8_1-A_edube.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	int n;
	cout << "Max Value? ";
	cin >> n;
	if (n % 2 != 0)
	{
		n++;
	}
	vector<int> v1(n / 2);
	vector<int> v2(n / 2);
	int k = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		k++;
		v1[i] = k;
		k++;
		v2[i] = k;
	}
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			cout << v1[i]+v2[j]<< " " ;
		}
		cout << endl;
	}
	for (int i = v1.size()-1; i >= 0; i--)
	{
		for (int j = v2.size()-1; j >= 0; j--)
		{
			cout << v1[i] + v2[j] << " ";
		}
		cout << endl;
	}
	//your code
	return 0;
}

