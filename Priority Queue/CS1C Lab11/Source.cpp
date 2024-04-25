/*************************************************
* Program: Lab #11 - STL - Priority Queue
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	string name;
	priority_queue<string> pq;

	cout << "Enter the names of 5 students.\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a name: ";
		getline(cin, name);
		pq.push(name);
	}

	cout << "\nNow popping names from the priority queue:\n";
	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
	cout << "\nThe queue is empty.\n";

	return 0;
}

/* OUTPUT
Enter the names of 5 students.
Enter a name: Tom
Enter a name: Joe
Enter a name: Kim
Enter a name: Adam
Enter a name: Becky

Now popping names from the priority queue:
Tom
Kim
Joe
Becky
Adam

The queue is empty.						*/