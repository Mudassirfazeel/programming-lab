/*
lab			:01	-	T1
Name		:Mudassir Fazeel
Roll No		:2026-SE-25
Date		:123-11-2026
Purpose		:Primt a student profile
*/
#include <iostream>
using namespace std;		//BUG 1: missing ; after std

int main()
{
	cout << "Welcome to the lab!" << endl;				//BUG 2: missing ; after endl
	cout << "Today we learn \"C ++\"." << endl;			//BUG 3: 'c' is capital in cout statement
	cout << "Files are in C:\\Lab01" << endl;			//BUG 4: \ is missing after "\" which doesn't print "\"
	cout << "Bye!" << endl;								//BUG 5: " is not closed after Bye!			
	return 0;
}
