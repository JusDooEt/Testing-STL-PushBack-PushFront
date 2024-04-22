/*************************************************
* Program: HW11a
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include <iostream>
#include <ctime>
#include <vector>
#include <deque>
#include <list>
using namespace std;

int main()
{
	clock_t start;
	clock_t end;
	vector<int> intVec;
	deque<int>	intDeque;
	list<int>	intList;

	start = clock();
	for (int i = 0; i < 150000000; i++)
	{
		// Use the push_back() function to push i into the vector
		intList.push_back(i);
	}
	end = clock();
	cout << "list time: " << (end - start) / CLK_TCK << " seconds.\n\n";

	start = clock();
	for (int i = 0; i < 150000000; i++)
	{
		// Use the push_back() function to push i into the vector
		intVec.push_back(i);
	}
	end = clock();
	cout << "vector time: " << (end - start) / CLK_TCK << " seconds.\n\n";

	start = clock();
	for (int i = 0; i < 150000000; i++)
	{
		// Use the push_back() function to push i into the vector
		intDeque.push_back(i);
	}
	end = clock();
	cout << "deque time: " << (end - start) / CLK_TCK << " seconds.\n\n";
	return 0;
}

/* OUTPUT
list time: 31 seconds.

vector time: 7 seconds.

deque time: 24 seconds.

*/