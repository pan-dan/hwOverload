#include <iostream>

using namespace std;

const int n = 4;
const int ROWS = 4;
const int COLS = 4;

#define delimetr "|------------------------------------------------|" << endl

//-------------------------------------	���������� ������

//-------------------------------------	��� int

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n);

//-------------------------------------	��� double

void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(double arr[], const int n);
double Sum(double arr[], const int n);
double Avg(double arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);
void Sort(double arr[], const int n);

//-------------------------------------	��� float

void FillRand(float arr[], const int n);
void Print(float arr[], const int n);
int Sum(float arr[], const int n);
double Avg(float arr[], const int n);
int minValueIn(float arr[], const int n);
int maxValueIn(float arr[], const int n);
void Sort(float arr[], const int n);

//-------------------------------------	��� char

void FillRand(char arr[], const int n);
void Print(char arr[], const int n);
int Sum(char arr[], const int n);
double Avg(char arr[], const int n);
int minValueIn(char arr[], const int n);
int maxValueIn(char arr[], const int n);
void Sort(char arr[], const int n);



//-------------------------------------	��������� ������

//-------------------------------------	��� int
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
int minValueIn(int arr[ROWS][COLS], const int m, const int n);
int maxValueIn(int arr[ROWS][COLS], const int m, const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

//-------------------------------------	��� double
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);
double minValueIn(double arr[ROWS][COLS], const int m, const int n);
double maxValueIn(double arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);

//-------------------------------------	��� float
void FillRand(float arr[ROWS][COLS], const int m, const int n);
void Print(float arr[ROWS][COLS], const int m, const int n);
float Sum(float arr[ROWS][COLS], const int m, const int n);
double Avg(float arr[ROWS][COLS], const int m, const int n);
float minValueIn(float arr[ROWS][COLS], const int m, const int n);
float maxValueIn(float arr[ROWS][COLS], const int m, const int n);
void Sort(float arr[ROWS][COLS], const int m, const int n);

//-------------------------------------	��� char
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);
int Sum(char arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);
int minValueIn(char arr[ROWS][COLS], const int m, const int n);
int maxValueIn(char arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);



void main()
{
	setlocale(LC_ALL, "Rus");


	int arr[n];


	cout << "\t\t���������� ������" << endl;
	cout << "\t\t��� int" << endl;

	cout << "���������� ������ ���� int:\n";
	FillRand(arr, n);
	Print(arr, n);

	cout << "  ����� ��������� ������� ���� int: " << Sum(arr, n) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(arr, n) << endl;

	cout << "  ����������� �������� ������� ���� int: " << minValueIn(arr, n) << endl;

	cout << "  ������������ �������� ������� ���� int: " << maxValueIn(arr, n) << endl;

	cout << "��������������� ������ ���� int: \n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimetr;

	cout << "\t\t��� double" << endl; 



	cout << "���������� ������ ���� double:\n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);

	cout << "  ����� ��������� �������: " << Sum(brr, n) << endl;

	cout << "  ������� ��������������: " << Avg(brr, n) << endl;

	cout << "  ����������� �������� �������: " << minValueIn(brr, n) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(brr, n) << endl;

	cout << "��������������� ������: \n";
	Sort(brr, n);
	Print(brr, n);
	cout << delimetr;



	cout << "\t\t��� float" << endl;

	float frr[n];
	cout << "���������� ������ ���� char:\n";
	FillRand(frr, n);
	Print(frr, n);

	cout << "  ����� ��������� �������: " << Sum(frr, n) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(frr, n) << endl;

	cout << "  ����������� �������� �������: " << minValueIn(frr, n) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(frr, n) << endl;

	cout << "��������������� ������: \n";
	Sort(frr, n);
	Print(frr, n);
	cout << delimetr;



	cout << "\t\t��� char" << endl;

	char crr[n];
	cout << "���������� ������ ���� char:\n";
	FillRand(crr, n);
	Print(crr, n);

	cout << "  ����� ��������� �������: " << Sum(crr, n) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(crr, n) << endl;

	cout << "  ����������� �������� �������: " << minValueIn(crr, n) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(crr, n) << endl;

	cout << "��������������� ������: \n";
	Sort(crr, n);
	Print(crr, n);
	cout << endl;
	cout << delimetr;


	cout << "\t\t��������� ������" << endl; //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	cout << "\t\t��� int" << endl;

	cout << "��������� ������ ���� int:\n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	cout << "  ����� ��������� ������� ����: " << Sum(arr2, ROWS, COLS) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(arr2, ROWS, COLS) << endl;

	cout << "  ����������� �������� ������� ����: " << minValueIn(arr2, ROWS, COLS) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(arr2, ROWS, COLS) << endl;

	cout << "��������������� ������: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimetr;

	cout << "\t\t��� double" << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);

	cout << "  ����� ��������� ������� ����: " << Sum(brr2, ROWS, COLS) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(brr2, ROWS, COLS) << endl;

	cout << "  ����������� �������� ������� ����: " << minValueIn(brr2, ROWS, COLS) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(brr2, ROWS, COLS) << endl;

	cout << "��������������� ������: \n";
	Sort(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << delimetr;

	cout << "\t\t��� float" << endl;

	float frr2[ROWS][COLS];
	FillRand(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);

	cout << "  ����� ��������� ������� ����: " << Sum(frr2, ROWS, COLS) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(frr2, ROWS, COLS) << endl;

	cout << "  ����������� �������� ������� ����: " << minValueIn(frr2, ROWS, COLS) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(frr2, ROWS, COLS) << endl;

	cout << "��������������� ������: \n";
	Sort(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << delimetr;

	cout << "\t\t��� char" << endl;

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);

	cout << "  ����� ��������� ������� ����: " << Sum(crr2, ROWS, COLS) << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(crr2, ROWS, COLS) << endl;

	cout << "  ����������� �������� ������� ����: " << minValueIn(crr2, ROWS, COLS) << endl;

	cout << "  ������������ �������� �������: " << maxValueIn(crr2, ROWS, COLS) << endl;

	cout << "��������������� ������: \n";
	Sort(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << delimetr;
}


//-------------------------------------	���������� ������

//-------------------------------------	��� int

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//-------------------------------------	��� double

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % 100) / 10.1;
	}
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

double Sum(double arr[], const int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//-------------------------------------	��� float

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % 100) / 10.1;
	}
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(float arr[], const int n)
{
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}

int minValueIn(float arr[], const int n)
{
	float min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxValueIn(float arr[], const int n)
{
	float max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//-------------------------------------	��� char

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(char arr[], const int n)
{
	char sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(char arr[], const int n)
{
	return (char)Sum(arr, n) / n;
}

int minValueIn(char arr[], const int n)
{
	char min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxValueIn(char arr[], const int n)
{
	char max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//-------------------------------------	��������� ������

//-------------------------------------	��� int

void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	
	}

	return sum;
}

double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return Sum(arr, m, n) / (n*m);
}

int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}

	return min;
}

int maxValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int max = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}	
	}

	return max;
}

void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

}

//-------------------------------------	��� double

void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = (rand() % 100) / 10.1;
		}
	}
}

void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

double Sum(double arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

double Avg(double arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, m, n) / (n*m);
}

double minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}

	return min;
}

double maxValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double max = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}

	return max;
}

void Sort(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

}

//-------------------------------------	��� float

void FillRand(float arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = (rand() % 1000) / 10.1;
		}
	}
}

void Print(float arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

float Sum(float arr[ROWS][COLS], const int m, const int n)
{
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

double Avg(float arr[ROWS][COLS], const int m, const int n)
{
	return (float)Sum(arr, m, n) / (n * m);
}

float minValueIn(float arr[ROWS][COLS], const int m, const int n)
{
	float min = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}

	return min;
}

float maxValueIn(float arr[ROWS][COLS], const int m, const int n)
{
	float max = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}

	return max;
}

void Sort(float arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						float buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

}


//-------------------------------------	��� char

void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
	}
}

void Print(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(char arr[ROWS][COLS], const int m, const int n)
{
	char sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

double Avg(char arr[ROWS][COLS], const int m, const int n)
{
	return Sum(arr, m, n) / (n * m);
}

int minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char min = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}

	return min;
}

int maxValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char max = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}

	return max;
}

void Sort(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

}


























