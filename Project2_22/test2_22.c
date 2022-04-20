#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>


//void  menu()
//{
//	printf("************************\n");
//	printf("*******  1 play   ******\n");
//	printf("*******  0 exit   ******\n");
//	printf("************************\n");
//}
//void  game()
//{
//	char  mine[ROWS][COLS];
//	char  show[ROWS][COLS];
//	BoardInit(mine,ROWS,COLS,'0');
//	BoardInit(show,ROWS,COLS,'*');
//	Display(mine,ROW,COL);
//	Display(show,ROW,COL);
//	Setmine(mine,ROW,COL);
//	Display(mine,ROW,COL);
//}
//void  test()
//{
//	int  input =0;
//	srand((unsigned  int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case  1:
//			game();
//			break;
//		case  0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("wrong重新选择\n");
//			break;
//		}
//	}while(input);
//}
//
//int  main()
//{
//	int  a = 0x11111111;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pa+2);
//	/*test();*/
//	return 0;
//}
//
//void  prin1(int(*pa)[5], int x, int y)
//{
//	int  i = 0;
//	int j = 0;
//	for (i = 0;i < x;i++)
//	{
//		for (j = 0;j < y; j++)
//		{
//			printf("%d  ", *(*(pa + i) + j));
//		}
//		printf("\n");
//	}
//}
//int  main()
//{
//	/*int  arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p1)[10] = &arr1;
//	int* p2 = arr1;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);*/
//	int  arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int  arr2[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{4,5,6,7,8} };
//	int(*p1)[5] = arr2;
//	int* p2 = &arr1;
//	int* p3 = &arr2;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr1+1);
//	printf("%p\n", p3);
//	printf("%p\n", p3 + 1);
//	prin1(arr2,3,5);
//
//	return  0;
//}

int  main()
{
	char a = "abcdef";
	const char* p1 = "abcdef";
	printf("%p\n", p1);
	printf("%p\n", p1 + 1);
}





