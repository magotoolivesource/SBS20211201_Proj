#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <stdio.h>


// 메인 함수 진입 함수라고도 함
void main()
{

	//if() else else if(), switch() default, for(), while(), do while(), continue, break

	int a = 0;
	do
	{
		a++;

	} while (a < 10);


	while (a > 10)
	{
		
	}



	// 3
	//*****
	// *** 
	//  *
	// 
	
	// 5
	//    *
	//   *** 
	//  *****
	// *******
	//*********

	int star = 5;
	//*****
	// ****
	//  ***
	//   **
	//    *

	for (int i = 0; i < star; i++)
	{
		int result = star - i;
		for (int j = star - 1; j >= 0; j--)
		{
			if (result <= j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			
		}

		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}

		int result = star - i;
		for (int z = 0; z < result; z++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	// int star = 3
	//*
	//**
	//***
	//****
	//*****
	
	for (int i = 1; i < star + 1; i++)
	{
		// 2
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	//*****
	//****
	//***
	//**
	//*
	for (int i = star; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//printf("*"); printf("\n");
	//printf("*"); printf("*"); printf("\n");
	//printf("*"); printf("*"); printf("*"); printf("\n");

	//printf("*\n");
	//printf("**\n");
	//printf("***\n");

	printf("확인용\n");






	//// 구구단 2~9단 가지 출력해보기
	//for ( int j = 2; j <10 ; ++j )
	//{
	//	int dan = j; // 2, 3, 4, 5

	//	printf("%d단 시작\n", dan);

	//	for (int i = 1; i < 10; i++)
	//	{
	//		printf("%d X %d = %d\n", dan, i, dan * i);
	//	}
	//	printf("\n");
	//}
	//
	//printf("확인용\n");





	int width = 5;
	int height = 3;

	for (int j = 0; j < height; ++j )
	{
		for (int i = 0; i < width; ++i)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("확인용\n");

	//for (int i = 0; i < width; ++i)
	//{
	//	printf("*");
	//}
	//printf("\n");
	//for (int i = 0; i < width; ++i)
	//{
	//	printf("*");
	//}
	//printf("\n");
	//for (int i = 0; i < width; ++i)
	//{
	//	printf("*");
	//}
	//printf("\n");




	//printf("*****");
	//printf("*****");
	//printf("*****");

	// 가로 갯수 지정한대로 별모양 사용하기
	// 세로 갯수 입력한대로 세로에 가로갯수만큼 뿌려주기
	
	// *******
	// *******
	// *******

	


	




	//// 구구단제작

	////printf("3X1=%d", 3 * 1);
	////printf("3X2=%d", 3 * 2);
	////printf("3X3=%d", 3 * 3);
	//printf("단을 입력하세요?");
	//int dan = 7;
	//scanf("%d", &dan);
	//for (int i = 1; i< 10; i++ )
	//{
	//	int result = dan * i; // 3, 6, 9
	//	printf("%d X %d = %d \n", dan, i, result);
	//}

	//printf("종료");
	//





	//int aa = 1234.9876;
	//int a = 10;
	//int b = 2;

	//float result = (float)a / b;

	//if (result == 5.0f)
	//{

	//}

	//printf("종료");


	//int a = -10, b = 20, c = 30;
	////int b = 20;
	////int result = 1;
	////if (a > 10)  result = 1;	else  result = 0;
	//
	//// 절대값 
	//int absresult = a >= 0 ? a : -a;

	//int max = a >= b ? a : b;


	//int result = a > 10 ? (a > 20 ? 2 : 3) : (a > 5 ? 2 : 3);


	//
	//int mageweapon = 1 << 0; // 마법사 // bit 0001
	//int holyweapon = 1 << 1; // 성기사 // bit 0010
	//int drodweapon = 1 << 2; // 성기사 // bit 0100


	//// 장비 착용 성기사, 마법사,
	//int myweapon1 = 0x0001; // bit 00001
	//int myweapon2 = 0x0002; // bit 00010
	//int myweapon3 = 0x0004; // bit 00100
	//int myweapon4 = myweapon1 | myweapon2; // bit 00011
	//int myweapon5 = drodweapon | mageweapon | holyweapon;

	//if ( (holyweapon & myweapon1) == holyweapon )
	//{

	//}



	//int a = 1, b = 201;

	//int result = a | b;
	//result = a & b;

	//result = ~a;
	//if ( a & b )
	//{

	//}

	


	//int x = -25;
	//// (10 < x < 50) == (10 < x && x < 50)
	//// (10 < x < 50) !(10 < x && x < 50)
	//if ( //(10 < x && x < 50) == 0
	//	!(10 < x && x < 50) )
	//{

	//}


	//int a = 100, b = 0;
	//int result = a + 100 && a - 100;
	// and
	//T = T && T;
	//F = T && F;
	//F = F && T;
	//F = F && F;
	
	// or
	//T = T || T;
	//T = T || F;
	//T = F || T;
	//F = F || F;

	




	//int x = 3;
	//x *= 2 + 3; // 3 * 5 // 15

	//x = 3;
	//x = x * (2 + 3); // 9

	//x = 2;
	//(x *= 2) + 5;



	//int index1 = 0, index2 = 0;

	//int result1 = ++index1;
	//printf("%d \n", result1); // 
	//int result2 = index1++;
	//printf("%d \n", result2); // 

	//printf("%d \n", index1 = 30); // 2

	



	////!n
	////1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	//int totalcount = 100;
	//scanf("%d", &totalcount);
	//int result = 0;
	//for ( int i = 0; i <= totalcount; ++i )
	//{
	//	result += i; // 1, 3, 6, 
	//}

	//printf( "0 ~ %d 까지 더한값 : %d \n",totalcount, result );

	


	//int i = 0;
	//for ( ; i<10; i++ )
	//{
	//	if (1 == (i % 2))
	//	{
	//		// 홀수 1, 3, 5, 7, 9
	//		printf("반복문 : %d\n", i);
	//	}
	//}

	


	//int icount = 0;
	//for (int i = -100; i < 10; i += 2, ++icount )
	//{
	//	printf("반복문 [%d] : %d\n", icount, i);
	//	//icount++;
	//}

	//for (int i = 0 ; i < 10 ;  ++i )
	//{
	//	if (1)
	//	{

	//	}
	//}




	//while ()
	//{
	//	printf("무한 ");
	//}

	return;



	////continue -> while, for, do while
	//// 짝수만 적용하기
	//int tempval = 0;
	//while (1)
	//{
	//	tempval++;
	//	if (1)
	//	{
	//		if (1)
	//		{
	//			if (1)
	//			{
	//				continue;
	//			}
	//		}
	//	}
	//	


	//	if (0 == tempval % 2)
	//	{
	//		printf("%d 짝수 이다.\n", tempval);
	//	}
	//	else
	//	{
	//		printf("%d 홀수 이다.\n", tempval);
	//	}

	//}
	//




	////break; -> while, for, do while, switch

	//int whileval = 1000;
	//while ( 100 > whileval )
	//{
	//	printf(".");
	//	//whileval = whileval - 1;
	//	//whileval -= 1;
	//	whileval--;

	//	if ( 0 == (whileval % 10) )
	//	{
	//		printf("\n");
	//	}

	//	if (900 >= whileval )
	//	{
	//		if (1)
	//		{
	//			break;
	//		}
	//	}

	//}







 //   int a, b;   // 피연산자
 //   char op;    // 연산자 기호를 문자로 저장할 변수

	//// +, -, /, *, %
 //   printf("수식? ");
	//scanf("%d %c %d", &a, &op, &b);


	//int tempdivresult = 1;
	//int result = 0;
	//if (op == '-')	{
	//	result = a - b;
	//}
	//else if (op == '+')	{
	//	result = a + b;
	//}
	//else if (op == '*')	{
	//	result = a * b;
	//}
	//else if (op == '/') {
	//	if (b == 0) {
	//		tempdivresult = 0;
	//		result = 2147483600;
	//	}
	//	else{
	//		result = a / b;
	//	}
	//}
	//
	//if (tempdivresult == 0)
	//{
	//	printf("나누기에 0값이 등록됨 에러~!");
	//}
	//else
	//{
	//	printf("%d %c %d = %d", a, op, b, result);
	//}
	//


	//return;
	




	//if (age >= 8) {
	//	if (age >= 65) {
	//		fee = 5000;
	//	}
	//	else {
	//		fee = 10000;
	//	}
	//}
	//else {
	//	fee = 0;
	//}

	//printf("입장료: %d원\n", fee);

	int ttval = 20;



}

