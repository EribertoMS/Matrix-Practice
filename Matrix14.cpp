/* August 31, 2025 */

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int rows,columns,rand1;

	cout << "Enter the number of rows and columns the matrix will have." << "\n";
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
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

		cout << "\n";
	}
	return 0;
}
