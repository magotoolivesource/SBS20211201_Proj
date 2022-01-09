#include <stdio.h>
#include <stdlib.h>


#define ARRAYSIZE 10
#define TAG10 40
#define TEMPARRAY(x) tempval[x]


void TestCode2()
{
	int temparr[3] = {10, };

	for (int i = 0; i < 5; ++i)
	{
		temparr[i] = -1;
	}

	int tempat = 20;
	temparr['a'] = 20;
}

void TestCode()
{
	const int size = 30;

	int temparr2[] = { 1, 3, 5 };
	temparr2[0] = 5;
	temparr2[1] = temparr2[1] + 2;
	temparr2[2] = temparr2[1] + 5;

	//printf("�迭�� : %d, %d, %d", temparr2[2], temparr2[1], temparr2[1] );
	for (int i = 3; i > 0; i--)
	{
		printf("�� Ȯ�� [%d] : %d\n", i - 1, temparr2[i - 1] );
	}

}

void TestCode4()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("%d", arr[5]);

	arr[5] = 100;
}

void TestCode5()
{
	int a = 10;
	int b = 0;
	b = a;

	const int size = 6;
	int x[size] = { 1, 2, 3, 4, 5 };
	int y[size] = { 0 };
	// y = x; // error
	//y[0] = x[0];
	//y[1] = x[1];

	int arrsize = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < arrsize; ++i)
	{
		y[i] = x[i];
	}

	int isequal = 1;
	for (int i = 0; i < arrsize; ++i)
	{
		if (y[i] != x[i])
		{
			isequal = 0;
			break;
		}
	}

	if ( isequal == 1 )
	{
		printf("�ι迭���� �����ϴ�.");
	}

}


void TestCode6()
{
	int data[] = { 78, 34, 52, 15, 63, 15, 25 };

	int arrsize = sizeof(data) / sizeof(data[0]); // 7

	int key = 15;
	scanf_s("%d", &key);

	int index = -1;
	//int i;
	for (int i = 0; i < arrsize; i++)
	{
		if (data[i] == key)
		{
			index = i;
			break;
		}
	}

	if (index >= 0)
	{
		printf("���ϴ� ���� ã�� �ε���[%d] :  %d ", index, data[index] );
	}
	else
	{
		printf("ã���� �ϴ� ���� �����ϴ�. ");

	}
	
}


void TestCode7()
{
	//int arr[] = {7, 3, 9, 5, 1};

	//// �������� ����
	//// 1, 3, 5, 7, 9
	//int resultarr[5] = {};

	//// �������� ����
	//// 9, 7, 5, 3, 1
	//int reversarr[5] = {};

	// ------>> �о��
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	int arrsize = sizeof(arr) / sizeof(arr[0]);
	int lastval = arr[arrsize - 1];
	//arr[4] = arr[3];
	//arr[3] = arr[2];
	//arr[2] = arr[1];
	//arr[1] = arr[0];
	for (int i = arrsize - 1; i > 0; --i)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = lastval;


}


#define ARRSIZE 4 
void TestCode8()
{
	// <<------ �о��
	int arr[ARRSIZE] = { 10, 20, 30, 40 };
	//int arrsize = 
	int tempval = arr[0];
	//arr[0] = arr[1]; // 0 -> 20
	//arr[1] = arr[2]; // 1 -> 30
	//arr[2] = arr[3]; // 1 -> 30
	for (int i = 0; i < ARRSIZE -1; ++i)
	{
		arr[i] = arr[i + 1];
	}

	arr[ARRSIZE -1] = tempval;


}

void TestCode9()
{
	//int arr[] = {7, 3, 9, 5, 1};
	int arr[] = { 1, 2, 5, 12, 11 };
	// ���� �������� �ٲٵ��� �ϱ�

	for (int j = 0; j < 5 - 2; ++j)
	{
		int keyat = j;
		for (int i = keyat; i < 5 - 1; ++i)
		{
			if (arr[keyat] < arr[i + 1])
			{
				int tempval = arr[keyat];
				arr[keyat] = arr[i + 1];
				arr[i + 1] = tempval;
			}


		}
	}

	
	int tempval = 0;

	
	for (int i = 0; i < 5 - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int tempval = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tempval;
		}
	}
	int tempval2 = 0;
	

	//if (arr[0] > arr[1])
	//{
	//	// [0] <-> [1]
	//	int tempval = arr[0];
	//	arr[0] = arr[1];
	//	arr[1] = tempval;
	//}
	//if (arr[1] > arr[2])
	//{
	//	// [0] <-> [1]
	//	int tempval = arr[2];
	//	arr[1] = arr[2];
	//	arr[2] = tempval;
	//}
	//if (arr[2] > arr[3])
	//{
	//	// [0] <-> [1]
	//	int tempval = arr[2];
	//	arr[2] = arr[3];
	//	arr[3] = tempval;
	//}
	//if (arr[3] > arr[4])
	//{
	//	// [0] <-> [1]
	//	int tempval = arr[3];
	//	arr[3] = arr[4];
	//	arr[4] = tempval;
	//}

	


}



void SelectSort()
{
	int data[] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;

	int datasize = sizeof(data) / sizeof(data[0]);

	for (i = 0; i < datasize - 1; i++)  // 0~(i-1)������ ���ĵ� �����̴�.
	{
		index = i;   // ���� ���ĵ��� ���� ���� �� ���� ���� ������ �ε���
		for (j = i + 1; j < datasize; j++) {
			// data[i]~data[SIZE-1]�߿��� ���� ���� ������ �ε����� index�� �����Ѵ�.
			if (data[index] > data[j])
				index = j;
		}
		// i��° ���Ҹ� index�� �ִ� ���ҿ� �¹ٲ۴�.
		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}   // i��° ���Ұ� i��°�� ���� ���� �ȴ�.
	}
	printf("���� ��: ");
	for (i = 0; i < datasize; i++)
		printf("%d ", data[i]);
	printf("\n");

}


void main()
{
	SelectSort();



	//TestCode9();

	//TestCode8();

	//TestCode7();

	//TestCode6();

	//TestCode5();

	//TestCode4();
	
	//TestCode();

	//TestCode2();



	
	

	//------------------
	//const int size = 100;
	//int temparr[100];

	//int at = 2;
	//temparr[at] = 10;

	//for ( int i = 0 ; i<100; ++i )
	//{
	//	temparr[i] = 0;
	//}
	//

	////temparr[0] = 0;
	//temparr[1] = 10;
	///*temparr[2] = 0;
	//temparr[3] = 0;
	//temparr[4] = 0;*/
	//------------------


	////int TEMPARRAY(10);
	//int tempval[10];

	//int tempval = TAG10;

	//const int size2 = 200;
	//int size = 100;

	//scanf_s("%d", &size);

	//int tempval[size2];





}


