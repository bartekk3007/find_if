#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector

int main () 
{
	std::vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);

	std::vector<int>::iterator it = std::find_if(myVector.begin(), myVector.end(), [](int number)
	{
		return number % 7 == 0 ? true : false;
	});
	
	if (it != myVector.end())
	{
		std::cout << "Pierwsza wartosc spelniajaca warunek to " << *it << '\n';
	}
	else
	{
		std::cout << "Zadna wartosc nie spelnia warunku\n";
	}

	return 0;
}
