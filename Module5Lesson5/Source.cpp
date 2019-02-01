#include<stdio.h> 
#include<iostream> 

void task1()
{

	int i, j, A[4][4] = { { 0 },{ 0 } };

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int prod = 1;
	for (i = 0; i < 4; i++)
	{
		prod *= A[0][i];
	}
	printf("Production of numbers in first row is %d\n", prod);
	system("pause");
}


void task2()

{
	int i, j, A[4][4] = { { 0 },{ 0 } }, B[4][2] = { {0},{0} };
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
			sum += A[i][j];
		}
		printf("\n");
		B[i][0] = i;
		B[i][1] = sum;
	}

	int c, a;
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j >= i; j--)
		{
			if (B[j][1] > B[j + 1][1])
			{
				c = B[j][1];
				B[j][1] = B[j + 1][1];
				B[j + 1][1] = c;

				a = B[j][0];
				B[j][0] = B[j + 1][0];
				B[j + 1][0] = a;
			}
		}
	}


	printf("Sorted array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[B[i][0]][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task3()
{

	int A[5][10] = { 0 }, i, j;
	int sum = 0, min = 40, indmin;

	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 10; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
			sum += A[i][j];
		}
		printf("\n");
		if (sum < min)
		{
			min = sum;
			indmin = i;
		}
	}

	printf("Min sum %d is in row number %d\n", min, indmin);
	system("pause");
}

void task5()
{
	int A[5][4] = { { 0 },{ 0 } }, i, j, count = 0;

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int row = 0;
	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		row = 0;
		for (j = 0; j < 4; j++)
		{
			for (size_t i1 = 0; i1 < 4; i1++)
			{
				if (j != i1 && A[i][i1] == A[i][j])
				{
					row = 1;
					break;
				}
			}
		}
		if (row == 0)
		{
			for (size_t i2 = 0; i2 < 4; i2++)
			{
				A[i][i2] = 0;
			}
		}
	}
	printf("New array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task6()
{

	int A[4][4] = { { 0 },{ 0 } }, i, j, count = 0;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int min = 50, ind1, ind2;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((A[i][j] < A[i + 1][j + 1]) && (A[i][j] < min))
			{
				min = A[i][j];
				ind1 = i;
				ind2 = j;
			}
		}
		printf("\n");
	}
	printf("Min number in the main diagonal is A[%d][%d] = %d\n", ind1, ind2, A[ind1][ind2]);
	for (i = 0; i < 4; i++)
	{
		A[ind1][i] = 0;
	}
	printf("\New array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task7()
{
	int A[4][4] = { { 0 },{ 0 } }, i, j, count = 0;
	int num = 1;
	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 3; j >= 0; j--)
			{
				A[i][j] = num;
				num++;
			}
		}
		if (i % 2 != 0)
		{
			for (j = 0; j < 4; j++)
			{
				A[i][j] = num;
				num++;
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	system("pause");
}

void task8()
{

	int A[4][4] = { { 0 },{ 0 } }, i, j, count = 0;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int a;
	printf("\nWrite any number: ");
	scanf_s("%d", &a);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] == a)
			{
				count++;
			}
		}
	}
	if (count == 0)
		printf("\nThere is no number %d in array\n", a);
	else
		printf("\nNumber %d meets %d times in array\n", a, count);
	system("pause");
}

void task9()
{
	int A[5][5] = { { 0 },{ 0 } }, i, j;
	int num = 1;
	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = -5 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		if (A[0][i] < 0)
		{
			A[0][i] = 0;
		}
	}
	printf("New array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}


	system("pause");
}

void task10()
{
	/*10. Дана целочисленная прямоугольная матрица размера M·N.
	Отсортировать каждый столбец с четным номером по неубыванию, а каждый столбец с нечетным номером -по невозрастанию.*/
	int A[5][6] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			A[i][j] = 0 + rand() % 7;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int a, c, i1;
	for (i = 0; i < 6; i += 2)
	{
		for (j = 0; j < 4; j++)
		{
			for (i1 = 3; i1 >= j; i1--)
			{
				if (A[i1][i] > A[i1 + 1][i])
				{
					a = A[i1][i];
					A[i1][i] = A[i1 + 1][i];
					A[i1 + 1][i] = a;
				}
			}
		}
	}

	for (i = 1; i < 6; i += 2)
	{
		for (j = 0; j < 4; j++)
		{
			for (i1 = 3; i1 >= j; i1--)
			{
				if (A[i1][i] < A[i1 + 1][i])
				{
					a = A[i1][i];
					A[i1][i] = A[i1 + 1][i];
					A[i1 + 1][i] = a;
				}
			}
		}
	}
	printf("\nNew array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}


	system("pause");
}

void task11()
{
	/*10. 11. Дана целочисленная прямоугольная матрица размера M·N.
	Сформировать одномерный массив, состоящий из элементов, лежащих в интервале [1,20]. Найти среднеарифметическое полученного одномерного массива.*/
	int A[5][6] = { { 0 },{ 0 } }, i, j, B[20] = { 0 };

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			A[i][j] = 0 + rand() % 7;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int count = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			B[count] = A[i][j];
			count++;
			if (count == 20)
				break;
		}
		if (count == 20)
			break;
	}

	int sum = 0;
	float av;
	printf("New array:\n");
	for (i = 0; i < 20; i++)
	{
		sum += B[i];
		printf("B[%d] = %d\n", i, B[i]);
	}

	av = float(sum) / float(20);
	printf("Sum is %d\n", sum);
	printf("The average is %.2f\n", av);

	system("pause");
}

void task12()
{
	/*12.	Дана матрица целых чисел размера NxM. Вывести номер строки, 
	содержащей минимальное число одинаковых элементов.*/
	int B[15] = { 0 }, i, j;
	float A[15] = { 0 }, b;
	printf("Results:\n");
	for (i = 0; i < 15; i++)
	{
		b = float(1 + rand() % 99) / float(100);
		A[i] = (11 + rand() % 4) + b;
		B[i] = i + 1;
		printf("Student %d: %.2f seconds\n", B[i], A[i]);
	}

	int a;
	float c;
	for (i = 0; i < 14; i++)
	{
		for (j = 13; j >= i; j--)
		{
			if (A[j] > A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;

				a = B[j];
				B[j] = B[j + 1];
				B[j + 1] = a;
			}
		}
	}


	printf("\n4 best students:\n");
	for (i = 0; i < 4; i++)
	{
		printf("Student %d: %.2f seconds\n", B[i], A[i]);
	}

	system("pause");
}

void task13()
{
	int A[5][5] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = -5 + rand() % 10;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	
	printf("New array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = A[i][j] * (-3);
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}


	system("pause");
}

void task14()
{
	int A[5][5] = { { 0 },{ 0 } }, i, j, B[10];

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	int ind = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			B[ind++] = A[i][j];
		}
	}
	printf("New array\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", B[i]);
	}
}

int main()

{
	int task, flag;

start:

	printf("Write the number of task: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task5();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task11();

		break;
	}
	case 12:
	{
		task12();

		break;
	}
	case 13:
	{
		task13();

		break;
	}
	case 14:
	{
		task14();

		break;
	}
	}

	printf("Do you want to continue? 1 or 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}