#ifndef LIST
#define LIST

#include <algorithm>
#include <functional>
#include <vector>
#include <time.h>
using namespace std;

template <class T> class FilterableList{
private:
	//Generic Vector
	vector<T> fList;
public:
	//Constructor
	FilterableList(){
		srand(time(NULL));
		fList;
	}
	//Destructor
	~FilterableList(){
		fList.clear();
	}
	/*
	adding an element to the list
	@param: the element to be added
	*/
	void add(T e){
		fList.push_back(e);
	}
	/*
	removing an element to the list
	@param: the element to be removed
	*/
	void remove(T e){
		fList.erase(std::remove(fList.begin(), fList.end(), e), fList.end());
	}
	/*
	checking if an element is part of the list
	@return: bool if the element is in the list
	*/
	bool has(T e){
		bool res = false;
		for each (T i in fList){
			if (i == e){
				res = true;
			}
		}
		return res;
	}
	/*
	generating a random string
	@return: the generated string
	*/
	string randomString(){
		//srand(time(NULL));
		string rString = "";

		int wLength = (rand() % 10) + 1;
		for (int i = 0; i < wLength; i++){
			char randomChar = (rand() % 25) + 97;
			rString += randomChar;
		}
		return rString;
	}
	/*
	generating a random float
	@return: the generated float
	*/
	float randomFloat(){
		float rFloat;
		rFloat = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/100.0));
		rFloat = rFloat - 50;
		return rFloat;
	}
	/*
	the function use to filter the list
	@param: the lambda expression
	*/
	void filter(function<bool(T)> func){
		vector <T> results;
		for (int i = 0; i < fList.size(); i++){
			if (func(fList[i])){
				cout << "True: " << fList[i] << endl;
				results.push_back(fList[i]);
			}
			else {
				cout << "False: " << fList[i] << endl;
			}
		}
	}
};

#endif  