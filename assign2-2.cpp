// assign2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Book {
	char bid[5];
	char name[30];
	int price;

};
int main()
{
	int rec;
	cout << "enter how many records of a book"<<endl;
	cin >> rec;
	Book* ptr = new Book[rec];
	for (int i = 0; i < rec; i++) {
		char id[5], n[30]; int price;
		cout << "enter bid" << endl;
		cin >> id;
		strcpy_s(ptr[i].bid, id);
		cout << "enter name of book" << endl;
		cin >> n;
		strcpy_s(ptr[i].name, n);
		cout << "enter orice of book";
		cin >> price;
		ptr[i].price = price;
	}
	for (int i = 0; i < rec; i++) {
		cout << "for rec call " << i << endl;
		cout << "book id " << ptr[i].bid << endl;
		cout << "book name " << ptr[i].name << endl;
		cout << "book price " << ptr[i].price << endl;

	}
	delete[] ptr;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
