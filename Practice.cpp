#include <iostream>
using namespace std;

int main()
{
	int myArray[11] = {0,1,2,3,4,5,6,7,8,9,10};

	cout << "In order...." << endl;
	for(int i = 0; i < 11; ++i)
	{
		cout << myArray[i] << ",";
	}

	cout << "\n";
	cout << "In reverse...." << endl;
	for(int i = 10; i >= 0; --i)
	{
		cout << myArray[i] << ",";
	}
	return 0;
}
