#include "FilterableList.h"
#include<iostream>
using namespace std;

int main(){
	FilterableList  intList;
	intList.add(1);
	intList.add(5);
	intList.add(3);
	intList.add(2);

	cout << intList.has(1) << endl;
	intList.remove(1);
	cout << intList.has(1) << endl;
	system("pause");
	return 0;
}