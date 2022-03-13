#pragma warning(disable : 4996)
#include <iostream>
#include "windows.h"
#include "conio.h"
#include <vector>
#include <map>
#include <string>

//#include <stack>
//#include <queue>
//#include <set>
//#include <hash_map>


using namespace std;

#define BLOCKSIZE 4
#define EMPTYVAL 0
#define MAGIC_KEY 224

//#define KEYBOARDUPKEY 72
//#define KEYBOARDLEFTKEY 75
//#define KEYBOARDRIGHTKEY 77
//#define KEYBOARDDOWNKEY 80

enum class E_KEYBOARD : int
{
	UP = 72,
	LEFT = 75,
	RIGHT = 77,
	DOWN  = 80
};


enum E_KEYBOARD22
{
	UP = 72,
	LEFT = 79,
	RIGHT = 77,
	DOWN = 80
};

int g_Emptysize = 0;
int g_EmptyArray[BLOCKSIZE * BLOCKSIZE] = { 0, };


// 콘솔창에 특정 위치에 커서 이동하는 방법
void MySetCursorPos(int p_x, int p_y)
{
	COORD dwCursorPosition;
	dwCursorPosition.X = p_x;
	dwCursorPosition.Y = p_y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE)
		, dwCursorPosition);
}

void DrawAllStage()
{
	system("cls");
	printf("+-----|-----|-----|-----+\n");
	printf("|     |     |     |     |\n");
	printf("|     |     |     |     |\n");
	printf("|-----|-----|-----|-----|\n");
	printf("|     |     |     |     |\n");
	printf("|     |     |     |     |\n");
	printf("|-----|-----|-----|-----|\n");
	printf("|     |     |     |     |\n");
	printf("|     |     |     |     |\n");
	printf("|-----|-----|-----|-----|\n");
	printf("|     |     |     |     |\n");
	printf("|     |     |     |     |\n");
	printf("|-----|-----|-----|-----|\n");

	
}

void DrawBlock( int p_allvalarr[][BLOCKSIZE] )
{
	for (int y = 0; y < BLOCKSIZE; y++)
	{
		for (int x = 0; x < BLOCKSIZE; x++)
		{
			MySetCursorPos((x * 6) + 1, (y * 3) + 1);
			if (p_allvalarr[y][x] == 0)
			{
				printf(" ", p_allvalarr[y][x]);
			}
			else
			{
				printf("%d", p_allvalarr[y][x]);
			}
		}
	}
}

void SetRandomVal_Old(int p_allvalarr[][BLOCKSIZE], int p_testat = -1)
{
	// 방법 한가지
	while (true)
	{
		int randx = rand() % BLOCKSIZE;
		int randy = rand() % BLOCKSIZE;

		if (EMPTYVAL == p_allvalarr[randy][randx])
		{
			p_allvalarr[randy][randx] = 2;
			// 내부적으로 처리할것들 작업

			return;
		}
	}
}

template< typename T>
T TestFN(T p_val)
{
	T tempval = p_val;
	return tempval;
}

#define ARRAYSIZE 10
void TempFN2( int p_temparr[], int p_size )
{
	for (size_t i = 0; i < ARRAYSIZE; i++)
	{

	}
}

void TempFN3()
{
	std::map<int, int> tempmap2;
	std::vector<int> tempvec2;
	std::string tempstr2;
	tempstr2 = "가나다";
	tempstr2 += " 우리들은";






	// 배열 대신 사용하도록 만들어진 타입
	// 배열 대신 사용할수 있음
	std::vector<int> tempvec;
	int size = tempvec.size();
	tempvec.push_back(10);
	tempvec.push_back(7);
	tempvec.push_back(12);
	tempvec.push_back(27);
	tempvec.pop_back(); // 27 사라짐

	auto var = tempvec.begin();
	var++;

	tempvec.erase(var); // 
	int tempvv = tempvec[0];

	// 예전에 쓰는 방식의 vector for 
	for (int i = 0; i < tempvec.size(); i++)
	{
		int tempval = tempvec[i];
	}
	// 2번째 for문 방식
	for (auto iter = tempvec.begin(); iter == tempvec.end(); ++iter)
	{

	}
	for (auto item : tempvec)
	{

	}



	int temparr3[3] = { 6, 10, 22 };
	for (auto item : temparr3)
	{

	}
}

void SetRandomVal( int p_allvalarr[][BLOCKSIZE], int p_testat = -1 )
{

	if (g_Emptysize <= 0)
		return;

	int indexat = rand() % g_Emptysize;

	// 테스트
	if (p_testat >= 0)
		indexat = p_testat;

	int p_allvalat = g_EmptyArray[indexat];

	// 1차원 -> 2차원
	int posx = p_allvalat % BLOCKSIZE;
	int posy = (int)(p_allvalat / BLOCKSIZE);

	p_allvalarr[posy][posx] = 2;
	--g_Emptysize;

	for (int i = indexat; i < (BLOCKSIZE * BLOCKSIZE) - 1; i++)
	{
		g_EmptyArray[i] = g_EmptyArray[i + 1];
	}

	//std::vector<int> tempvec;
	//tempvec.erase()

	// 2차원 -> 1차원
	// x + (y * BLOCKSIZE)


	

	

}

bool ISCheckGame(int p_allvalarr[][BLOCKSIZE])
{
	if (g_Emptysize <= 0)
		return false;

	return true;

	//for (int y = 0; y < BLOCKSIZE; y++)
	//{
	//	for (int x = 0; x < BLOCKSIZE; x++)
	//	{
	//		if (EMPTYVAL == p_allvalarr[y][x])
	//			return true;
	//	}
	//}

	//return false;
}

int GetKeyPress()
{
	int keypress = _getch();
	if (keypress == 224)
	{
		// 방향키 누를때 반환값
		keypress = _getch(); // 75값
	}
	else
	{
		if ('A' <= keypress && keypress <= 'Z')
		{
			keypress += 'a' - 'A';
		}
		
	}
	
	return keypress;
}

void MoveLeft(int p_allvalarr[][BLOCKSIZE])
{

	for (int y = 0; y < BLOCKSIZE; ++y)
	{
		int yy = y;
		for (int i = 1; i < 4; i++)
		{
			int at = i;
			if (p_allvalarr[yy][at] != EMPTYVAL)
			{
				for (int x = 0; x < i; x++)
				{
					int prevval = (at - x) - 1;
					if (p_allvalarr[yy][prevval] == EMPTYVAL)
					{
						p_allvalarr[yy][prevval] = p_allvalarr[yy][prevval + 1];
						p_allvalarr[yy][prevval + 1] = EMPTYVAL;
					}
					else if (p_allvalarr[yy][prevval] == p_allvalarr[yy][prevval + 1])
					{
						p_allvalarr[yy][prevval] *= 2;
						p_allvalarr[yy][prevval + 1] = EMPTYVAL;
					}
				}
			}
		}
	}
	
	




	//for (int i = 1; i < 4; i++)
	//{
	//	int at = i;
	//	if (p_allvalarr[0][at] != EMPTYVAL)
	//	{
	//		p_allvalarr[0][0] = p_allvalarr[0][at];
	//		p_allvalarr[0][at] = EMPTYVAL;
	//	}
	//}
	
	
	/*at = 2;
	if (p_allvalarr[0][at] != EMPTYVAL)
	{
		p_allvalarr[0][0] = p_allvalarr[0][at];
		p_allvalarr[0][at] = EMPTYVAL;
	}

	at = 3;
	if (p_allvalarr[0][at] != EMPTYVAL)
	{
		p_allvalarr[0][0] = p_allvalarr[0][at];
		p_allvalarr[0][at] = EMPTYVAL;
	}*/

}

void main()
{
	int AllValArray[BLOCKSIZE][BLOCKSIZE] = { 0, };

	for (int y = 0; y < BLOCKSIZE; y++)
	{
		for (int x = 0; x < BLOCKSIZE; x++)
		{
			g_EmptyArray[x + (y * BLOCKSIZE)] = x + (y * BLOCKSIZE);
		}
	}
	g_Emptysize = BLOCKSIZE * BLOCKSIZE;
	
	srand( time(NULL) );


	//SetRandomVal(AllValArray, 3);
	SetRandomVal(AllValArray, 0);
	SetRandomVal(AllValArray, 1);
	SetRandomVal(AllValArray, 3);
	SetRandomVal(AllValArray, 4);
	SetRandomVal(AllValArray, 3);

	while (true)
	{
		DrawAllStage();
		DrawBlock( AllValArray );


		int keypress = GetKeyPress();

		// 2048 C++ source 찾아보시면서
		if ('a' == keypress || (int)E_KEYBOARD::LEFT == keypress)
		{
			// 왼쪽으로 이동
			//int tempaa = 10;
			MoveLeft(AllValArray);
		}

		if ('d' == keypress || (int)E_KEYBOARD::RIGHT == keypress)
		{
			// 오른쪽 이동
			int tempaa = 20;
		}

		// 
		//SetRandomVal(AllValArray);
		if ( !ISCheckGame(AllValArray) )
		{
			break;
		}
		

	}
	


	

}
