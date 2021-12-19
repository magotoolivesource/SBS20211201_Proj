#include "stdio.h"
#include "math.h"


void TestMathF()
{
	// sqrt() // 제곱근 구하기 -> 
	// ceil(); // 올림
	// floor(); // 버림
	// round(); // 반올림
	// atan2()
	// sin(), cos(), tan()
	// fabs() // 절대값
	// fmod(10.3f, 0.9f) // (10 % 2)
	
}


int Add(int p_src, int p_dest)
{
	return p_src + p_dest;
}

int Divide(int p_src, int p_dest)
{
	if (p_dest == 0)
	{
		return 0;
	}

	return (double)p_src / p_dest;
}


// 함수 선언하기
int TestFNA2(int p_val);
int TestFNA2(int p_val)
{

	return 0;
}

// 선언 구현
void TestFNB()
{
	printf("호출 B\n");
	//TestFNA();
}

void TestFNA()
{
	printf("호출 A\n");
	//TestFNB();
}


int Factorial(int p_factorial)
{
	int result = 1;
	for (int i = 1; i < p_factorial; ++i)
	{
		result *= i;
	}

	return result;
}

// 제곱근 함수
int POW2(int p_src, int p_powval)
{
	int result = 1;
	for (int i = 0; i < p_powval; ++i)
	{
		result *= p_src;
	}

	return result;
}

int g_val = 0;
double Get_CircleArea(double p_radius)
{
	g_val += 10;

	const double PI = 3.141595;
	return p_radius* p_radius* PI;
}

//int aa = 30;


int g_Count = 0;

void TestFNCall()
{
	printf("함수를 호출 하였습니다.");
	g_Count++;
}
void main()
{




	TestFNCall();
	TestFNCall();
	TestFNCall();
	TestFNCall();
	
	printf("함수 호출 갯수 : %d", g_Count);


	g_val += 10;
	printf("원넓이 : %.2f \n", Get_CircleArea(5) );

	printf("글로별 변수 : %d\n", g_val);


	int a = 10, b = 20, c = 6;
	int resultmax = a >= b ? (a >=c ? a : c) : (b >= c ? b : c);


	// 3^5;

	int result = 1;
	//result *= 3;
	//result *= 3;
	//result *= 3;
	//result *= 3;
	//result *= 3;
	int src = 3;
	int powval = 5;
	for (int i=0 ; i < powval; ++i )
	{
		result *= src;
	}


	int resulat1 = Factorial(20);
	int resulat2 = Factorial(10);


	//int fatorialval = 20;
	//int result = 1;
	//for( int i = 1 ; i< fatorialval ; ++i )
	//{
	//	result *= i;
	//}


	//fatorialval = 40;
	//result = 1;
	//for (int i = 1; i < fatorialval; ++i)
	//{
	//	result *= i;
	//}




	TestFNB();
	int resultaa = TestFNA2(10);

	int resultdiv = Divide(10, 2);
	int resultdiv2 = Divide(10, 0);

	int testfn = 20;
	printf("함수입니다.\n ");

	//int resultadd = Add(10, 20);
	//int resultadd = 10 + 20;

	//int src = 10;
	//int dest = 20;
	//if (dest != 0)
	//{
	//	int result = src / dest;
	//}
	//
	//


}





