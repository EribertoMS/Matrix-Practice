/* September 10, 2025 */

#include <iostream>
#include <ctime>

void getDimensions(int &rows,int &columns);

int main()
{
	int rows,columns,rand1;

	getDimensions(rows,columns);

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
			std::cout << matrix[i][j] << "\t";
		}

		std::cout << "\n";
	}
	return 0;
}

void getDimensions(int &rows, int &columns)
{
	std::cout << "Enter the dimensions of the matrix:" << "\n";
	std::cout << "Enter the number of rows: ";
	std::cin >> rows;
	std::cout << "Enter the number of columns: ";
	std::cin >> columns;
}
