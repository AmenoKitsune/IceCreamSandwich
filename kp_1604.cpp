#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main() {
	string stringString;
	cout << "Input string: ";
	cin >> stringString;
	vector<char> charArray;
	bool isIceCream = false;
	bool isSandwich = false;
	char sandwichElement = 0;
	for (char symbol : stringString){
		charArray.push_back(symbol);
	}
	char iceCreamElement = charArray[0];

	if ((charArray[0] == charArray[charArray.size() - 1]) && ((charArray[0] == iceCreamElement) && (charArray[charArray.size() - 1] == iceCreamElement)))
	{
		isIceCream = true;
		if (!charArray.empty()) charArray.pop_back();
		if (!charArray.empty()) charArray.erase(charArray.begin());
		sandwichElement = charArray[0];
	}

	for (char symbol : charArray)
	{
		if (symbol == sandwichElement)
		{
			isSandwich = true;
		}
		if (symbol != sandwichElement)
		{
			isSandwich = false;
		}
	}

	if (isSandwich && isIceCream)
	{
		cout << "ICESANDWICH!!!" << endl;
	}
	else
	{
		cout << "Not icesandwich(((" << endl;
	}
}