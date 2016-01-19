#ifndef LIST
#define LIST

#include <algorithm>
#include <functional>
#include <vector>
#include <time.h>
using namespace std;

template <class T> class FilterableList{
private:
	vector<T> fList;
public:
	
	FilterableList(){
		srand(time(NULL));
		fList;
	}
	~FilterableList(){
		fList.clear();
	}
	void add(T e){
		fList.push_back(e);
	}
	void remove(T e){
		fList.erase(std::remove(fList.begin(), fList.end(), e), fList.end());
	}
	bool has(T e){
		bool res = false;
		for each (T i in fList){
			if (i == e){
				res = true;
			}
		}
		return res;
	}
	
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

	float randomFloat(){
		float rFloat;
		rFloat = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/100.0));
		rFloat = rFloat - 50;
		return rFloat;
	}
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