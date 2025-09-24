/* September 3, 2025 */
#include <iostream>
#include <ctime>

int getDimensions(int &rows, int &columns);
int getRand1(int rand1);

int main()
{
	int rows,columns,rand1;

	srand(time(NULL));

	getDimensions(rows,columns);

	int matrix[rows][columns];

	for(int i = 0; i < rows; ++i)
	{
		for(int j = 0; j < columns; ++j)
		{
			matrix[i][j] = getRand1(rand1);
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

int getRand1(int rand1)
{
	rand1 = (rand() % 11);

	return rand1;
}

int getDimensions(int &rows,int &columns)
{

	std::cout << "Enter the dimensions of the matrix: " << std::endl;
	std::cout << "Rows: ";
	std::cin >> rows;
	std::cout << "Columns: ";
	std::cin >> columns;

	return rows,columns;
}

