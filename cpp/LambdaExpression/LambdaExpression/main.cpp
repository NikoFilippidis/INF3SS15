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
	stringList.filter([](string s) -> bool {return s.length() > 2; });
	stringList.filter([](string s) {return s.find('s'); });

	//Float-Filtering
	floatList.filter([](float f) -> bool {return f >= 5; });
	floatList.filter([](float f) -> bool {return f < 0; });
	//todo: rundung fixen!!!
	floatList.filter([](float f) -> bool {f = f + 0.5; std::cout<<f<<endl; return int(f) % 2; });

	system("pause");
	return 0;
}