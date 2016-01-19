#include "FilterableList.h"
#include <string>
#include<iostream>
using namespace std;

int main(){
	FilterableList<int>  intList;
	intList.add(1);
	intList.add(5);
	intList.add(3);
	intList.add(2);

	//creating a new String-List
	FilterableList<string> stringList;
	//adding random Strings
	stringList.add(stringList.randomString());
	stringList.add(stringList.randomString());
	stringList.add(stringList.randomString());
	
	//creating a new Float-List
	FilterableList<float> floatList;
	//adding random Floats
	floatList.add(floatList.randomFloat());
	floatList.add(floatList.randomFloat());
	floatList.add(floatList.randomFloat());

	//String-Filtering
	cout << "Words equal or longer than 3 characters" << endl;
	stringList.filter([](string s) -> bool {return s.length() > 2; });
	cout << "Words with 's'" << endl;
	//stringList.filter([](string s) {return s.find("s"); });
	stringList.filter([](string s) {if (s.find('s') != string::npos) { return true; } else{ return false; } });
	
	//Float-Filtering
	cout << "all Numbers >= 5" << endl;
	floatList.filter([](float f) -> bool {return f >= 5; });
	cout << "all negative Numbers" << endl;
	floatList.filter([](float f) -> bool {return f < 0; });
	cout << "all even Numbers" << endl;
	floatList.filter([](float f) -> bool {if (f < 0){ f -= 0.5; } else { f += 0.5; }; return !(int(f) % 2); });

	std::system("pause");
	return 0;
}