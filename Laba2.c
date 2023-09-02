#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 26




int main(void)
{
	setlocale(LC_ALL, "RUS");
// Задание 1 -----------------------------------------------------------
	//int a = 7, b = 5;
	//float res = (float)a / b;
	//setlocale(LC_ALL, "RUS");
	//printf("%20s\n", "Это текст");
	//printf("\t%5s\n", "Это текст");
	//printf("%5.5f\n ", 12.234657);
	//printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	//printf("Результат от деления %d на %d равен %2.1f\n ", a, b, res);
	
// Задание 1 -----------------------------------------------------------

// Задание 2 -----------------------------------------------------------
	//int N, K;
	//
	//time_t mytime = time(NULL);
	//struct tm* now = localtime(&mytime);
	//N = (int)now->tm_hour;
	//K = (int)now->tm_min;
	//printf("Сейчас %d часов %d минут %d секунд\n", N, K, (int)now->tm_sec);
	//printf("Идёт %d минута суток\n", (int)now->tm_hour * 60 + (int)now->tm_min + 1);
	//printf("До полуночи осталось %d часа и %d минут\n", (1440 - ((int)now->tm_hour * 60 + (int)now->tm_min)) / 60, (1440 - ((int)now->tm_hour * 60 + (int)now->tm_min)) % 60);
	//printf("С 8.00 прошло %d секунд\n", ((((int)now->tm_hour * 60 + (int)now->tm_min)) * 60 + (int)now->tm_sec) - 480*60);
	//printf("Текущий час  = %d/24 суток  и текущая минута = %d/60 часа\n", (int)now->tm_hour, (int)now->tm_min);
	//return 0;

// Задание 2 -----------------------------------------------------------

// Задание 3 -----------------------------------------------------------
	float n, k, m;
	n = 3;
	k = 4;
	m = 2;
	printf("Дано:\n\t %.0f\n\t 333\n\t __________\nОтвет:\n \t %4.2f", n, (n / 333));
	return 0;
// Задание 3 -----------------------------------------------------------
}