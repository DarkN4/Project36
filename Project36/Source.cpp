#include<iostream>
#include<time.h>
using namespace std;
//глобальные переменные
const int M{ 5 };//матрица ћхN
const int N{ 6 };
//инициализаци€ матрицы
void InitMatr(int matr[M][N], int rows, int cols)
{
	int b{};
	b++;
		cout<< b << " показ матрицы"<< endl;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matr[i][j] = rand() % 61 - 30;
		}
	}
};
	//прототип функции и вывод матрицы
	void ShowMatr(int matr[M][N], int, int);
	//сдвиг матрицы
	void ShiftRight(int matr[M][N],int rows,int cols,int shift) {
		shift = shift % cols;//не может быть больше размера матрицы
		//делаем shift раз
		for (size_t s = 0; s < shift; s++)
		{
			//сдвиг на 1 вправо
			for (size_t i = 0; i < rows; i++)
			{
				int tmp = matr[i][cols - 1];//сохранил элемент выпадающий из матрицы
				for (size_t j = cols-1; j > 0; j--)
				{
					matr[i][j] = matr[i][j - 1];
				}
				matr[i][0] = tmp;//возвращаем элемент на 1 место
			}
		}
	}
	void ShiftDown(int matr[M][N], int rows, int cols, int shift) {
		shift = shift % cols;//не может быть больше размера матрицы
		//делаем shift раз
		for (size_t s = 0; s < shift; s++)
		{
			//сдвиг на 1 вправо
			for (size_t j = 0; j < cols; j++)
			{
				int tmp = matr[rows-1][j];//сохранил элемент выпадающий из матрицы
				for (size_t  i=rows-1 ;i > 0; j++)
				{
					matr[i][j] = matr[i-1][j];
				}
				matr[0][j] = tmp;//возвращаем элемент на 1 место
			}
		}
	}
int main() {
	const int M{ 5 };//матрица ћхN
	const int N{ 6 };
	int matr[M][N]{};
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	InitMatr(matr, M, N);
	ShowMatr(matr, M, N);
	cout << endl;
	ShiftRight(matr, M, N, 10);
	cout << endl;
	ShiftDown(matr, M, N, 5);
	ShowMatr(matr, M, N);
	return 0;
	}

	//вывод матрицы
	void ShowMatr(int matr[M][N], int rows, int cols) {
		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				cout << matr[i][j] << "\t";
			}
			cout << endl;
		}
	}






	
