#include<iostream>
#include<time.h>
using namespace std;
//���������� ����������
const int M{ 5 };//������� ��N
const int N{ 6 };
//������������� �������
void InitMatr(int matr[M][N], int rows, int cols)
{
	int b{};
	b++;
		cout<< b << " ����� �������"<< endl;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matr[i][j] = rand() % 61 - 30;
		}
	}
};
	//�������� ������� � ����� �������
	void ShowMatr(int matr[M][N], int, int);
	//����� �������
	void ShiftRight(int matr[M][N],int rows,int cols,int shift) {
		shift = shift % cols;//�� ����� ���� ������ ������� �������
		//������ shift ���
		for (size_t s = 0; s < shift; s++)
		{
			//����� �� 1 ������
			for (size_t i = 0; i < rows; i++)
			{
				int tmp = matr[i][cols - 1];//�������� ������� ���������� �� �������
				for (size_t j = cols-1; j > 0; j--)
				{
					matr[i][j] = matr[i][j - 1];
				}
				matr[i][0] = tmp;//���������� ������� �� 1 �����
			}
		}
	}
	void ShiftDown(int matr[M][N], int rows, int cols, int shift) {
		shift = shift % cols;//�� ����� ���� ������ ������� �������
		//������ shift ���
		for (size_t s = 0; s < shift; s++)
		{
			//����� �� 1 ������
			for (size_t j = 0; j < cols; j++)
			{
				int tmp = matr[rows-1][j];//�������� ������� ���������� �� �������
				for (size_t  i=rows-1 ;i > 0; j++)
				{
					matr[i][j] = matr[i-1][j];
				}
				matr[0][j] = tmp;//���������� ������� �� 1 �����
			}
		}
	}
int main() {
	const int M{ 5 };//������� ��N
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

	//����� �������
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






	
