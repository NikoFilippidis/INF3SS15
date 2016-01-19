#ifndef LIST
#define LIST

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

class FilterableList{
private:
	vector<int> fList;
public:
	
	FilterableList();
	~FilterableList();
	void add(int e);
	void remove(int e);
	bool has(int e);
	//FilterableList<T>filter(Func<T>, bool);
};

#endif  