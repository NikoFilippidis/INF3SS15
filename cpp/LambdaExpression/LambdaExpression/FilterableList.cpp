#include "FilterableList.h"
#include<iostream>
using namespace std;



FilterableList::FilterableList()
{
	fList;
}

FilterableList::~FilterableList()
{
	//delete  ;
}

//template <class  T>
void FilterableList::add(int e){
	fList.push_back(e);
}

//template <class  T>
void FilterableList::remove(int e){
	fList.erase(std::remove(fList.begin(), fList.end(), e), fList.end());
}

//template <class  T>
bool FilterableList::has(int e){
	bool res = false;
	for each (int i in fList){
		if (i == e){
			res = true;
		}	
	}
	return res;
}
