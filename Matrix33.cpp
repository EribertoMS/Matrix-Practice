/* September 19, 2025 */

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int rows,columns,rand1;
	
	string prompt("Enter the dimensions of the matrix: "),
    numrows("Enter the number of rows: "),
	numcolumns("Enter the number of columns: ");

	cout << prompt << endl;
	cout << numrows;
	cin >> rows;
	cout << numcolumns;
	cin >> columns;
	
	int matrix[rows][columns];
	
	srand(time(NULL));
	
	for(int i = 0; i < rows; ++i)
	{
		for(int j = 0; j < columns; ++j)
		{
			rand1 = (rand() % 11);
			matrix[i][j] = rand1;
		}
	}
	
	for(int i = 0; i < rows; ++i)
	{
		for(int j = 0; j < columns; ++j)
		{
			cout << matrix[i][j] << "\t";
		}
		
		cout << endl;
		
	}
	
	return 0;
}