﻿#include <stdio.h>        // подключаем заголовочный файл stdio.h
//#include "stdafx.h"
#include <conio.h>
#pragma warning (disable:4996)
#include <locale.h>

#include <limits.h>
#include <float.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

//int main()
//{
//	int a(0), b(0), c(0);
//	int v(0);
//	printf("\n\t Input a,b,c: ");
//	scanf("%d%d%d", &a, &b, &c);
//
//	v = a * b*c;
//	printf("\t\t v = %d\n", v);
//	getch();
//	return 0;
//}

//1.2
//main()
//{
//	setlocale(LC_ALL, "Rus");
//	float fahr, celsius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	fahr = lower;
//	
//	printf("\t Программа преобразования температурб Фаренгейт в Цельсий\n");
//
//	while (fahr <= upper) {
//		celsius = (5.0/9.0) * (fahr - 32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//
//	}

/*  lower = -10;
	upper = 50;
	step = 5;

	celsius = lower;

	printf("\t Программа преобразования температур, Цельсий в Фаренгейт\n");

	while (celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius + 32);
		printf("%3.0f\t%6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}*/
//
//}

//1.3
//main()
//{
//	int fahr;
//
//	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
//}

//1.6
//main()
//{
//	int c;
//
//	c = getchar() != EOF;
//	if (c == 1)
//		printf("1");
//	else
//		printf("0");
//
//	return 0;
//}

//1.7
//main() 
//{
//	printf("EOF = %d\n\n", EOF);
//	return 0;
//}

//main()
//{
//	long nc;
//
//	nc = 0;
//	while (getchar() != EOF)
//		++nc;
//	printf("%ld\n", nc);
//
//	double nc;
//
//	for (nc = 0; getchar() != EOF; ++nc)
//		;
//	printf("%.0f\n", nc);
//}

//1.8
//main()
//{
//	int c, nl, nt, ns;
//	nl = 0;
//	nt = 0;
//	ns = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c == '\n')
//			++nl;
//		else if (c == '\t')
//			++nt;
//		else if (c == ' ')
//			++ns;
//	}
//		printf(" lines: %d\n tabulations:%d\n spaces:%d", nl, nt, ns);
//	return 0;
//}

//1.9
//main()
//{
//	int c, space;
//	space = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c != ' ') {
//			putchar(c);
//			space = 0;
//		}
//		else if (c == ' ') {
//			if (space == 0) {
//				putchar(c);
//				space = 1;
//			}
//		}
//	}
//	return 0;
//}

//1.10
//main()
//{
//	int c;
//	while ((c = getchar()) != EOF) {
//		if (c == '\t') {
//			putchar('\\');
//			putchar('t');
//		}
//		else if (c == '\b') {
//			putchar('\\');
//			putchar('b');
//		}
//		else
//			putchar(c);
//	}
//}

//#define IN 1
//#define OUT 0
//
//main()
//{
//	int c, state;
//	state = OUT;
//
//	while ((c = getchar()) != EOF) {
//		if (c != ' ' && c != '\n' && c != '\t') {
//			state = IN;
//			putchar(c);
//		}
//		else if (state == IN) {
//			state = OUT;
//			putchar('\n');
//		}
//	}
//	return 0;
//}

//1.6
//main() {
//	int c, i, nwhite, nother;
//	int ndigit[10];
//
//	nwhite = nother = 0;
//	for (i = 0; i < 10; ++i)
//		ndigit[i] = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9')
//			++ndigit[c - '0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++nwhite;
//		else
//			++nother;
//	}
//	printf("digits =");
//
//	for (i = 0; i < 10; ++i)
//		printf(" %d", ndigit[i]);
//
//	printf(", white space = %d, other = %d\n", nwhite, nother);
//
//	return 0;
//}


//#define MAX 10
//main()
//{
//	int c, i, j, ncw;
//	int wlength[MAX];
//
//	ncw = 0;
//	for (i = 0; i < MAX; ++i)
//		wlength[i] = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {
//			wlength[ncw] = wlength[ncw] + 1;
//			ncw = 0;
//		}
//		else
//			++ncw;
//		}
//
//	for (i = 0; i < MAX; ++i)
//		printf("%d", i);
//		printf("\n");
//
//	for (i = 0; i < MAX; ++i) {
//		printf("%d : ", i);
//		for (j = 1; j <= wlength[i]; ++j)
//			printf("-");
//		printf(" %d\n", wlength[i]);
//	}
//
//	return 0;
//}

//#define MAX 12
//main()
//{
//	int c, i, j;
//	int various_char[MAX];
//
//	for (i = 0; i < MAX; ++i)
//		various_char[i] = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9')
//			++various_char[c - '0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++various_char[10];
//		else
//			++various_char[11];
//		}
//
//	for (i = 0; i < MAX; ++i) {
//		printf("%d : ", i);
//		for (j = 1; j <= various_char[i]; ++j)
//			printf("-");
//		printf(" %d\n", various_char[i]);
//	}
//
//	return 0;
//}
//int power(int m, int n);
//
//main()
//{
//	int i;
//
//	for (i = 0; i < 10; ++i)
//		printf("%d %d %d\n", i, power(2, i), power(-3, i));
//	return 0;
//}
//
//int power(int base, int n)
//{
//	int i, p;
//
//	p = 1;
//	for (i = 1; i <= n; ++i)
//		p = p * base;
//	return p;
//}


//1.15
//main()
//{
//	int fahr;
//
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
//	return 0;
//}
//
//float celsius(float f)
//{
//	return (5.0 / 9.0)*(f - 32);
//}

//#define MAXLINE 1000
////#define MAXLINE 80
//
//int cutSpacesInLines(char line[], int maxline);
////int getline(char line[], int maxline);
//void copy(char to[], char from[]);

//1.16
//main()
//{
//	int len, count;
//	char line[MAXLINE];
//	char longest[MAXLINE];
//
//	count = 0;
//
//	while ((len = getline(line, MAXLINE)) > 0) {
//		if ((len - 1) > 80) {
//			copy(longest, line);
//			count = count + len;
//			}
//		}
//			if (count > 80)
//				printf("Lines longer than 80 symbols:%s", longest, count);
//			else
//				printf("There isn't lines longer than 80 symbols.\n");
//	/*}*/
//	return 0;
//}

//1.17
//main()
//{
//	int len;
//	int max;
//	char line[MAXLINE];
//	char longest[MAXLINE];
//	max = 0;
//
//	while ((len = getline(line, MAXLINE)) > 0) {
//		if (len == MAXLINE - 1) {
//			printf("%s", line);
//			while (len == MAXLINE - 1) {
//				len = getline(line, MAXLINE);
//				printf("%s", line);
//			}
//		}
//	}
//	return 0;
//}

//1.18
//main()
//{
//	char line[MAXLINE];
//
//	while ((cutSpacesInLines(line, MAXLINE)) > 0)
//			printf("%s", line);
//	return 0;
//}
//
//int cutSpacesInLines(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i) {
//		if (c == '\t')
//			c = ' ';
//		if ((c == ' ') || (c == '\n')) {
//			if ((i > 0) && (s[i - 1] == c))
//				--i;
//		}
//		s[i] = c;
//	}
//	s[i] = '\0';
//
//	return i;
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//
//void copy(char to[], char from[])
//{
//	int i;
//
//	i = 0;
//	while ((to[i] = from[i]) != '\0')
//		++i;
//}

//1.19

//#define MAXLINE 1000
//
//int reverseLines(char line[], int maxline);
//void reverse(char line[]);
//
//main()
//{
//	char line[MAXLINE];
//
//	while ((reverseLines(line, MAXLINE)) > 0)
//			printf("%s\n", line);
//	return 0;
//}
//
//void reverse(char s[])
//{
//	int i, j, tempor;
//	i = 0;
//	while (s[i] != '\0')
//		i++;
//	i--;
//	if (s[i] != '\n')
//		i--;
//	printf("\n");
//
//	for (j = i - 1; j > i / 2 - 1; j--) {
//		tempor = s[j];
//		s[j] = s[i - j - 1];
//		s[i - j - 1] = tempor;
//	}
//}
//
//int reverseLines(char s[], int lim)
//{
//	int c, i;
//	
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	reverse(s);
//	return i;
//}

//1.10
//#define MAXLINE 1000
//
//int max;
//char line[MAXLINE];
//char longest[MAXLINE];
//
//
//int geline(void);
//void copy(void);
//
//main()
//{
//	int len;
//	extern int max;
//	extern char longest[MAXLINE];
//
//	max = 0;
//
//	while ((len = getline()) > 0)
//		if (len > max) {
//			max = len;
//			copy();
//			}
//		if (max > 0)
//				printf("%s", longest);
//	return 0;
//}
//
//int getline(void)
//{
//	int c, i;
//	extern char line[];
//
//	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		line[i] = c;
//	if (c == '\n') {
//		line[i] = c;
//		++i;
//	}
//	line[i] = '\0';
//	return i;
//}
//
//
//void copy(void)
//{
//	int i;
//	extern char line[], longest[];
//
//	i = 0;
//	while ((longest[i] = line[i]) != '\0')
//		++i;
//}

//#define MAXLINE 100
//#define TABVALUE 8
//
//int turnTabsToSpaces(char line[], int maxline);
//
//main()
//{
//	char line[MAXLINE];
//
//	while ((turnTabsToSpaces(line, MAXLINE)) > 0)
//			printf("%s", line);
//	return 0;
//}
//
//int turnTabsToSpaces(char s[], int lim)
//{
//	int i, j, c, countSpaces;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		if (c == '\t') {
//			i--;
//			countSpaces = (TABVALUE - ((i + 1) % TABVALUE));
//			for (j = 0; j < countSpaces; j++) {
//				i++;
//				s[i] = '.';
//			}
//		} else 
//			s[i] = c;
//
//		if (c == '\n') {
//			s[i] = c;
//			i++;
//	}
//	s[i] = '\0';
//	return i;
//}

//1.22

//#define MAXLINE 50
////#define TABVALUE 8
//
//int longToShortLines(char line[], int maxline);
//
//main()
//{
//	char line[MAXLINE];
//	int charOnNextLine = 0;
//
//	while ((charOnNextLine = longToShortLines(line, MAXLINE - charOnNextLine)) > 0)
//			printf("%s", line);
//	return 0;
//}
//
//int longToShortLines(char s[], int lim)
//{
//	int i, j, c, lastSpace, onNewLine;
//	j = lim - 1;
//	lastSpace = 0;
//	onNewLine = 1;
//
//	for (i = 0; i < lim - 3 && (c = getchar()) != EOF && c != '\n'; ++i) {
//		if ((c == ' ') || (c == '\t'))
//			lastSpace = i;
//		s[i] = c;
//	}
//	if (c == '\n') {
//		s[i] = c;
//		i++;
//	}
//	if (i > lim - 4) {
//		s[i] = '-';
//		i++;
//		s[i] = '\n';
//		i++;
//	}
//	else {
//		onNewLine = MAXLINE - 1 - lastSpace;
//		for (j = lim - 1; j > lastSpace + 1; --j) {
//			s[j] = s[j - 1];
//		}
//		s[j - 1] = '\n';
//	}
//	s[i] = '\0';
//	return onNewLine;
//}

//#define MAXLINE 50   /* максимальная длина строки ввода */
//#define LINEWIDTH 30 /* максимальная длина строки вывода */
//#define BORDER 5     /* ширина правого края строки вывода */
//
//int getline(char line[], int maxline);
//void justify(char to[], char from[]);
//
//int len; /* длина текущей строки */
//
//int main()
//{
//	char line[MAXLINE]; /* текущая строка */
//	char newline[MAXLINE]; /* преобразованная строка */
//
//	printf("0123456789ABCDEF\n"); // шкала позиций символов    
//	len = 0;
//	while ((len = getline(line, MAXLINE)) > 0) {
//		justify(newline, line);
//		printf("%s\n", newline);
//	}
//	return 0;
//}
//
///* justify: формирует из строкИ 'from' стрОки, выровненные
// *          по правому краю в 'to'                         */
//void justify(char to[], char from[])
//{
//	int i, j, c, ns, nstmp, start;
//
//	j = ns = nstmp = start = 0;
//	while (len - ns > LINEWIDTH) {
//		ns += LINEWIDTH;
//		for (i = ns - BORDER; i < ns; ++i) {
//			c = from[i];
//			if (c == ' ' || c == '\t' || c == '\n') {
//				nstmp = i;
//			}
//		}
//		if (nstmp > ns - BORDER)
//			ns = nstmp + 1;
//		for (i = start; i < ns - 1; ++i, ++j)
//			to[j] = from[i];
//		to[ns - 1] = '\n';
//		++j;
//		start = ns;
//	}
//	i = ns;
//	while ((to[j] = from[i]) != '\0') {
//		++i;
//		++j;
//	}
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (i == lim - 2) {
//		s[i] = '\n';
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}

//1.23

//#define MAXLINE 50
//
//int getLinesWithoutComments(char line[], int maxLine);
//
//main() 
//{
//	char line[MAXLINE];
//
//	while ((getLinesWithoutComments(line, MAXLINE)) > 0)
//		printf("%s", line);
//	return 0;
//}
//
//int getLinesWithoutComments(char s[], int lim) 
//{
//	int c, i;
//	int instructions = 1;
//	int previusChar = 0;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && !((c == '\n') && (instructions)); ++i) {
//		if (instructions) // программа - пишем в массив
//			s[i] = c;
//		else              // комментарии, - тормозим цикл
//			i--;
//		
//		if ((c == '*') && (previusChar == '/')) {
//			instructions = 0; i--;
//		}
//		else if ((c == '/') && (previusChar == '*')) {
//			instructions = 1; i--;
//		}
//		previusChar = c;
//	}
//
//	if (c == '\n') {
//		s[i] = c;
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}

//1.24

//#define MAXLINE 50 /* */
//
//int preProcessingNextString(char line[], int charCount[], int maxLine);
//
//main() 
//{
//	char line[MAXLINE]; /* текущая строка */
//	int charCount[7] = { 0, 0, 0, 0, 0, 0, 0 };
//	/* 0. previusChar 1. () 2. {} 3.[] 4." " 5. ' ' 6. / * * /  */
//	while ((preProcessingNextString(line, charCount, MAXLINE)) > 0);
//	//printf("%s", line);
//	printf("Unpaired elements ():%i, {}:%i, []:%i, \":%i, \':%i, /**/:%i\n",
//		charCount[1], charCount[2], charCount[3], charCount[4] - (charCount[4] / 2) * 2,
//		charCount[5] - (charCount[5] / 2) * 2, charCount[6]);
//	return 0;
//}
//
//int preProcessingNextString(char s[], int charCount[], int lim) 
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//		s[i] = c;
//		if (c == '(') charCount[1]++; else if (c == ')') charCount[1]--;
//		if (c == '{') charCount[2]++; else if (c == '}') charCount[2]--;
//		if (c == '[') charCount[3]++; else if (c == ']') charCount[3]--;
//		if ((c == '\"') && (charCount[0] != '\\')) charCount[4]++;
//		if ((c == '\'') && (charCount[0] != '\\')) charCount[5]++;
//		if ((c == '*') && (charCount[0] == '/'))
//			charCount[6]++;
//		else if ((c == '/') && (charCount[0] == '*'))
//			charCount[6]--;
//		if ((c == '\\') && (charCount[0] == '\\')) c = ' ';
//		charCount[0] = c;
//	}
//
//	if (c == '\n') {
//		s[i] = c;
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}

//2.1

//main()
//{
//	printf("Integer datatypes:\n");
//
//	printf("%d <= char <= %d\n", CHAR_MIN, CHAR_MAX);
//	printf("%d <= signed char <= %d\n", SCHAR_MIN, SCHAR_MAX);
//	printf("0 <= unsigned char <= %d\n", UCHAR_MAX);
//
//	printf("%d <= int <= %d\n", INT_MIN, INT_MAX);
//	printf("0 <= unsigned int <= %u\n", UINT_MAX);
//
//	printf("%d <= short <= %d\n", SHRT_MIN, SHRT_MAX);
//	printf("0 <= unsigned short <= %d\n", USHRT_MAX);
//
//	printf("%ld <= long <= %ld\n", LONG_MIN, LONG_MAX);
//	printf("0 <= unsigned long <= %lu\n\n", ULONG_MAX);
//
//	short x;
//	for (x = 1; x > x - 1; ++x) {
//		if (x < 0)
//			break;
//		/*printf("%d\n", x);*/ // печатаем для отладки программы
//	}
//
//	printf("MIN: %d\n", x);
//	printf("MAX: %d\n\n", --x);
//
//	printf("Float datatypes:\n");
//	printf("%e <= float <= %e\n", FLT_MIN, FLT_MAX);
//	printf("%e <= double <= %e\n\n", DBL_MIN, DBL_MAX);
//
//	float y;
//	for (y = 1; y > y / 2; y *= 2) {
//		printf("%e\n", y);
//	}
//
//	return 0;
//}

//2.2
//for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
//	s[i] = c;
//
//while (i < lim - 1) {
//	c = getchar();
//		if (c == '\n')
//			break;
//		if (c == EOF)
//			break;
//		s[++i] = c;
//}

//2.3
//#define MAXLINE 50
//
//main()
//{
//	char number[MAXLINE];
//
//	getline(number, MAXLINE);
//	printf("%d", htoi(number));
//
//	return 0;
//}
//
//int htoi(char s[])
//{
//	char c; int i, newNumber = 0;
//
//	if (s[0] == '0' && toupper(s[1]) == 'X') {
//		for (i = 2; s[i] != '\0'; ++i) {
//			c = toupper(s[i]);
//			if (c >= 'A' && c <= 'F')
//				newNumber = newNumber * 16 + 15 - ('F' - c);
//			else if (isdigit(c))
//				newNumber = newNumber * 16 + c - '0';
//		}
//	}
//	return newNumber;
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}

////2.4
//
//int len;
//int any(char s1[], char s2[]);
////void squeeze(char s1[], char s2[]);
//int strlen(char s[]);
////
//main()
//{
//	char s1[50];
//	printf("First string: ");
//	scanf("%s", s1);
//	printf("s1: %s\n\n", s1);
//
//	char s2[25];
//	printf("Second string: ");
//	scanf("%s", s2);
//	printf("s2: %s\n\n", s2);
//
//	len = strlen(s2);
//
//	squeeze(s1, s2);
//	printf("New s1: %s\n", s1);
//
//	return 0;
//}

//void squeeze(char s1[], char s2[])
//{
//	int i, j, k;

//	for (i = j = 0; s1[i] != '\0'; i++) {
//		for (k = 0; s2[k] != s1[i] && s2[k] != '\0'; k++);
//		if (k == len)
//			s1[j++] = s1[i];
//	}
//	s1[j] = '\0';
//}
//
//int strlen(char s[])
//{
//	int i = 0;
//
//	while (s[i] != '\0')
//		++i;
//
//	return i;
//}

//2.5
//#define MAXLINE 50
//
//int any(char s1[], char s2[]);
//int strlen(char s[]);
//int getline(char line[], int maxline);
//
//int main()
//{
//	char s1[MAXLINE];
//	printf("First string: ");
//	getline(s1, MAXLINE);
//	printf("s1: %s\n\n", s1);
//
//	char s2[MAXLINE];
//	printf("Second string: ");
//	getline(s2, MAXLINE);
//	printf("s2: %s\n\n", s2);
//
//	printf("Position of first occurrence: %d\n", any(s1, s2));
//
//	return 0;
//} 
//
//int any(char s1[], char s2[])
//{
//	int i, j, k;
//	int len = strlen(s1);
//	int first = len;
//
//	for (i = j = 0; s1[i] != '\0'; i++)
//		for (k = 0; s2[k] != '\0'; k++)
//			if (s2[k] == s1[i] && i < first)
//				first = i;
//	if (first == len)
//		first = -1;
//
//	return first;
//}
//
//int strlen(char s[])
//{
//	int i = 0;
//
//	while (s[i] != '\0')
//		++i;
//
//	return i;
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}

//2.6
//unsigned setbits(unsigned x, int p, int n, unsigned p) 
//{
//	(~((~(~0 << n)) << p) & x) | ((~(~0 << n) & y) << p)
//}

//2.7
//unsigned invert(unsigned x, int p, int n)
//{
//	return  (~x & (~(~0 << n)) << p) | (x & (~(~(~0 << n)) << p));
//}

//2.8
//unsigned rightrot(unsigned x, int p, int n)
//{
//	return  (((~x(~0 << n)) & x) << sizeof(x)*8-n) | (x >> n);
//}

//2.9
//int bitcount(unsigned x)
//{
//	int b;
//	for (b = 0; x != 0; x &= (x - 1))
//		b++;
//	return b;
//}

//2.10
//int lower(int c)
//{
//	if (c >= 'A' %% c <= 'Z')
//		return c + 'a' - 'A';
//	else
//		return c;
//}

//int lower(int c);
//
//int main()
//{
//	int i;
//
//	char s[20];
//	scanf("%s", s);
//	printf("s = %s\n", s);
//
//	printf("lower s = ");
//	for (i = 0; s[i] != '\0'; i++)
//		printf("%c", lower(s[i]));
//	printf("\n");
//
//	return 0;
//}
//
//
//int lower(int c)
//{
//	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
//}

//3.1
//int binsearch(int x, int v[], int n);
//
//int main()
//{
//	int x = 7;
//	int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	
//	printf("%d\n", binsearch(x, v, 10));
//	
//	return 0;
//}
//
//int binsearch(int x, int v[], int n)
//{
//	int low, mid, high;
//	low = 0;
//	high = n - 1;
//	mid = (low + high) / 2;
//
//	while (low <= high && x != v[mid]) {
//		if (x < v[mid])
//			high = mid - 1;
//		else
//			low = mid + 1;
//		mid = (low + high) / 2;
//	}
//	return (x == v[mid]) ? mid : -1;
//}

//3.2
//#define MAXLEN 50
//void escape(char s, char t);
//void unescape(char s, char t);
//int getline(char line[], int maxlen);
//
//int main()
//{
//	char input[MAXLEN], output[MAXLEN];
//	getline(input, MAXLEN);
//	printf("Original: %s\n", input);
//	
//	escape(output, input);
//	printf("Escaped: %s\n", output);
//
//	unescape(input, output);
//	printf("Unescaped: %s\n", input);
//
//	return 0;
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\0'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//void escape(char s[], char t[])
//{
//	int i, j;
//
//	for (i = 0, j = 0; s[i]; i++, j++)
//		switch (t[i]) {
//		case '\t':
//			s[j++] = '\\';
//			s[j] = 't';
//			break;
//		case '\n':
//			s[j++] = '\\';
//			s[j] = 'n';
//			break;
//		default:
//			s[j] = t[i];
//			break;
//		}
//	s[j] = t[i]; 
//}
//
//void unescape(char s[], char t[])
//{
//	int i, j;
//
//	for (i = 0, j = 0; s[i]; i++, j++)
//		switch (t[i]) {
//		case '\\':
//			switch (t[++i]) {
//			case 't':
//				s[j] = '\t';
//				break;
//			case 'n':
//				s[j] = '\n';
//				break;
//			}
//			break;
//		default:
//			s[j] = t[i];
//			break;
//		}
//	s[j] = t[i];
//}

//3.3
//#define MAXLEN 50
//
//void expand(char s1[], char s2[]);
//
//int main()
//{
//	char in[MAXLEN] = "-1-67-9-Ab-h-7-9\0";
//	char out[MAXLEN];
//
//	printf("s1 = %s\n", in);
//	expand(in, out);
//	printf("s2 = %s\n", out);
//
//	return 0;
//}
//
//void expand(char s1[], char s2[])
//{
//	int i, j;
//	char t;
//
//	for (i = 0, j = 0; s1[i] != '\0'; i++) {
//		if (s1[i] == '-') {
//			if ((isdigit(s1[i - 1]) && isdigit(s1[i + 1]) && (s1[i - 1] < s1[i + 1])) ||
//				(islower(s1[i - 1]) && islower(s1[i + 1]) && (s1[i - 1] < s1[i + 1])) ||
//				(isupper(s1[i - 1]) && isupper(s1[i + 1]) && (s1[i - 1] < s1[i + 1])))
//				for (t = (char)(s1[i - 1] + 1); t < s1[i + 1]; t++)
//					s2[j++] = t;
//			else
//				s2[j++] = s1[i];
//		}
//		else
//			s2[j++] = s1[i];
//	}
//	s2[j] = '\0';
//}

//3.4
//void itoa(int n, char s[]);
//void reverse(char s[]);
//
//int main()
//{
//	char buffer[20];
//	int i = 85;
//
//	printf("Number: %d\n", i);
//	itoa(i, buffer);
//	printf("Buffer : %s\n", buffer);
//
//	printf("INT_MIN: %d\n", INT_MIN);
//	itoa(INT_MIN, buffer);
//	printf("Buffer : %s\n", buffer);
//
//	return 0;
//}
//
///* itoa: преобразование n в строку s */
//void itoa(int n, char s[])
//{
//	int i, sign;
//	sign = n; /* сохраняем знак */
//
//	i = 0;
//	do { /* генерируем цифры в обратном порядке */
//		s[i++] = abs(n % 10) + '0'; /* следующая цифра */
//	} while (n /= 10);            /* исключить ее */
//	if (sign < 0)
//		s[i++] = '-';
//
//	s[i] = '\0';
//	reverse(s);
//}
//
//void reverse(char s[])
//{
//	int c, i, j;
//	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
//		c = s[i];
//		s[i] = s[j];
//		s[j] = c;
//	}
//}
//
//3.5
//void itob(int n, char s[], int b);
//void reverse(char s[]);
//
//int main(void) {
//	char buffer[100];
//	int i = 31;
//
//	printf("Number: %d\n", i);
//	itob(i, buffer, 16);
//	printf("Buffer : %s\n", buffer);
//
//	printf("INT_MIN: %d\n", INT_MIN);
//	itob(INT_MIN, buffer, 16);
//	printf("Buffer : %s\n", buffer);
//
//	return 0;
//}
//
///* itob: преобразование n в строку s, представляющую
// * число по основанию b (2 <= b <= 16)               */
//void itob(int n, char s[], int b) {
//	int i, sign;
//	char digits[] = "0123456789ABCDEF";
//
//	sign = n; /* сохраняем знак */
//
//	i = 0;
//	do { /* генерируем цифры в обратном порядке */
//		s[i++] = digits[n % b]; /* следующая цифра */
//	} while (n /= b);         /* исключить ее */
//	if (sign < 0)
//		s[i++] = '-';
//
//	s[i] = '\0';
//	reverse(s);
//}
//
//void reverse(char s[])
//{
//	int c, i, j;
//	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
//		c = s[i];
//		s[i] = s[j];
//		s[j] = c;
//	}
//}

//3.6
//#define MAXLEN 20
//
//void itoa(int n, char s[], int width);
//void reverse(char s[]);
////int getline(char line[], int maxlen);
//
//
////	char input[MAXLEN], output[MAXLEN];
////	getline(char input, int maxlen);
//
//
//int main()
//{
//	int width = 7;
//	int n = 1876;
//	char s[MAXLEN];
//	
//	//int n, width;
//	//printf("Enter the number: ");
//	//getline(n, MAXLEN);
//	//printf("Enter the field width: ");
//	//getline(width, MAXLEN); /* отчего-то не работает, не было время ковырять */
//
//	itoa(n, s, width);
//	printf("The result:%s", s);
//	printf("\n");
//
//	return 0;
//}
//
///* itoa: преобразование n в строку s */
//void itoa(int n, char s[], int width)
//{
//	int i, sign;
//	sign = n; /* сохраняем знак */
//
//	i = 0;
//	do { /* генерируем цифры в обратном порядке */
//		s[i] = abs(n % 10) + '0';
//		i++; /* следующая цифра */
//	} while ((n /= 10) != 0); /* исключить ее */
//	if (sign < 0)
//		s[i++] = '-';
//	while ((i+1) <= width)
//		s[i++] = ' ';
//		//s[i++] = '*'; /* для лучшей наглядности */
//	s[i] = '\0';
//	reverse(s);
//}
//
//void reverse(char s[])
//{
//	int i, j;
//	char c;
//	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
//		c = s[i];
//		s[i] = s[j];
//		s[j] = c;
//	}
//}
//
////int getline(char s[], int lim)
////{
////	int c, i;
////
////	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\0'; ++i)
////		s[i] = c;
////	if (c == '\n') {
////		s[i] = c;
////		++i;
////	}
////	s[i] = '\0';
////	return i;
////}

//4.1
//
//#define MAXLINE 1000
//
//int getline(char s[], int max);
//int strrindex(char source[], char searchfor[]);
//
//char pattern[] = "ould"; /*образец для поиска*/
//
////поиск всех строк, содержащих заданный образец
//int main()
//{
//	char line[MAXLINE];
//	int found = 0;
//
//	int rindex;
//
//	while (getline(line, MAXLINE) > 0)
//		if ((rindex = strrindex(line, pattern)) >= 0) {
//			printf("%d-%s", rindex, line);
//			found++;
//		}
//	return found;
//}
//
////считывает строку в s, возвращает её длину
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}
//
//
////возвращает индекс строки t в s, -1 при отсутствии
//int strrindex(char s[], char t[])
//{
//	int i, j, k;
//	int tmp = -1;
//
//	for (i = 0; s[i] != '\0'; i++) {
//		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//			;
//		if (k > 0 && t[k] == '\0' && i > tmp)
//			tmp = i;
//	}
//	return tmp;
//}

//4.2
//#define MAXLINE 100
//
//int getline(char s[], int lim);
//
//int main()
//{
//	/*double sum;*/
//	double atof(char[]);
//	char line[MAXLINE];
//	int getline(char line[], int max);
//
//	/*sum = 0;*/
//	while (getline(line, MAXLINE) > 0)
//		printf("\t%g\n", /*sum +=*/ atof(line));
//	return 0;
//}
//
//
//double atof(char s[])
//{
//	double val, power;
//	int i, sign, exp;
//
//	for (i = 0; isspace(s[i]); i++)
//		;
//	sign = (s[i] == '-') ? -1 : 1;
//	if (s[i] == '+' || s[i] == '-')
//		i++;
//	for(val = 0.0; isdigit(s[i]); i++)
//		val = 10.0 * val + (s[i] - '0');
//	if (s[i] == '.')
//		i++;
//	for (power = 1.0; isdigit(s[i]); i++) {
//		val = 10.0 * val + (s[i] - '0');
//		power *= 10;
//	}
//	val = sign * val / power;
//
//	if (s[i] == 'e' || 'E') {
//		i++;
//		sign = (s[i] == '-') ? -1 : 1;
//		if (s[i] == '+' || s[i] == '-')
//			i++;
//		for (exp = 0; isdigit(s[i]); i++)
//			exp = 10 * exp + (s[i] - '0');
//		if (sign == 1)
//			for (; exp > 0; exp--)
//				val *= 10;
//		else
//			for (; exp > 0; exp--)
//				val /= 10;
//	}
//	return val;
//}
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}



//4.5
//#include <stdio.h>
//#include <stdlib.h> //atof()
//#include <math.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAXOP 100	//максимальный размер операнда или знака
//#define MAXVAL 100	//максимальный размер val стека
//#define BUFSIZE 100
//#define NUMBER '0'	//сигнал, что обнаружено число
//#define NAMEFUNC 'a' //сигнал, что обнаружена функция
//
//int getop(char[]);
//void push(double);
//double pop(void);
////void clear(void);
//void mathfunc(char[]);
//
////калькулятор с обратной польской записью
//int main()
//{
//	int type;
//	double op2, op1;
//	char s[MAXOP];
//
//	while ((type = getop(s)) != EOF)
//	{
//		switch (type)
//		{
//		case NUMBER:
//			push(atof(s));
//			break;
//		
//		case NAMEFUNC:
//			mathfunc(s);
//			break;
//
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() + pop());
//			break;
//		case '-':
//			op2 = pop();
//			push(pop() - op2);
//			break;
//		case '/':
//			op2 = pop();
//			if (op2 != 0)
//				push(pop() / op2);
//			else
//				printf("error: zero devisior\n");
//			break;
//		case '%':
//			op2 = pop();
//			if (op2 != 0.0)
//				push(fmod(pop(), op2));
//			else
//				printf("error: zero devisor\n");
//			break;
//
//		//либо функции, либо работа со стеком :\
//		//case 'p':
//		//	op2 = pop();
//		//	printf("\t%.8g\n", op2);
//		//	push(op2);
//		//	break;
//		//case 'd': //double
//		//	op2 = pop();
//		//	push(op2);
//		//	push(op2);
//		//	break;
//		//case 'r': //reverse
//		//	op1 = pop();
//		//	op2 = pop();
//		//	push(op1);
//		//	push(op2);
//		//	break;
//		//case 'c': //clean
//		//	clear();
//		//	break;
//
//		case '\n':
//			printf("\t%.8g\n", pop());
//			break;
//		default:
//			printf("error: unknown command %s\n", s);
//			break;
//		}
//	}
//	return 0;
//}
//
//
//double val[MAXVAL];	//стек значений
//int sp = 0;	//следующая свободная позиция в стеке
//
////push: помещает число f в стек операндов
//void push(double f)
//{
//	if (sp < MAXVAL)
//		val[sp++] = f;
//	else
//		printf("error: stack full, can`t push %g\n", f);
//}
//
////pop: извлекает и возвращает верхнее число из стека
//double pop(void)
//{
//	if (sp > 0)
//		return val[--sp];
//	else
//	{
//		printf("error: stack empty\n");
//		return 0.0;
//	}
//}
//
////функция для очистки стека, подключить для операций со стеком
////void clear(void)
////{
////	sp = 0;
////}
//
//int getch(void);
//void ungetch(int);
//
////getop: извлекает следующий операнд или знак операции
//int getop(char s[])
//{
//	int i, c;
//	while ((s[0] = c = getch()) == ' ' || c == '\t')
//		;
//	s[1] = '\0';
//	i = 0;
//
//	if (islower(c))	//комманда или имя
//	{
//		while (islower(s[++i] = c = getch()))
//			;
//		s[i] = '\0';
//		if (c != EOF)
//			ungetch(c);
//		if (strlen(s) > 1)
//			return NAMEFUNC;
//		else
//			return c;
//	}
//
//	if (!isdigit(c) && c != '.' && c != '-')	//не число
//		return c;
//
//	if (c == '-')
//	{
//		if (isdigit(c = getch()) || c == '.')
//			s[++i] = c;		//отрицательное число
//		else
//		{
//			if (c != EOF)
//				ungetch(c);
//			return '-';
//		}
//	}
//	if (isdigit(c))		//сбор целой части
//		while (isdigit(s[++i] = c = getch()))
//			;
//	if (c == '.')	//сбор десятичной части
//		while (isdigit(s[++i] = c = getch()))
//			;
//	s[i] = '\0';
//	if (c != EOF)
//		ungetch(c);
//	return NUMBER;
//}
//
//char buf[BUFSIZE];  //буфер для ungetch
//int bufp = 0;	//следующая свободная позиция в buf
//
//int getch(void)		//ввод символа (возможно, возвращение в поток)
//{
//	return (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetch(int c) //возвращение символа в поток ввода
//{
//	if (bufp >= BUFSIZE)
//		printf("ungetch: too many characnters\n");
//	else
//		buf[bufp++] = c;
//}
//
//
//void mathfunc(char s[]) //математические функции
//{
//	double op2;
//	if (strcmp(s, "sin") == 0)
//		push(sin(pop()));
//	else if (strcmp(s, "exp") == 0)
//		push(exp(pop()));
//	else if (strcmp(s, "pow") == 0)
//	{
//		op2 = pop();
//		push(pow(pop(), op2));
//	}
//	else
//		printf("error: unknown command %s\n", s);
//}

//4.6
//#include <stdio.h>
//#include <stdlib.h> //atof()
//#include <math.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAXOP 100	//максимальный размер операнда или знака
//#define NUMBER '0'
//#define NAMEFUNC 'a' //сигнал, что обнаружена функция//сигнал, что обнаружено число
//
//
//int getop(char[]);
//void push(double);
//double pop(void);
////void clear(void);
//void mathfunc(char[]);
//
////калькулятор с обратной польской записью
//int main()
//{
//	int type;
//	double op2, op1;
//	char s[MAXOP];
//
//	int i, val;
//	double lttr;
//	double alphabet[26];
//
//	val = 0;
//	for (i = 0; i < 26; i++)
//		alphabet[i] = 0.0;
//
//	while ((type = getop(s)) != EOF)
//	{
//		switch (type)
//		{
//		case NUMBER:
//			push(atof(s));
//			break;
//
//		case NAMEFUNC:
//			mathfunc(s);
//			break;
//
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() + pop());
//			break;
//		case '-':
//			op2 = pop();
//			push(pop() - op2);
//			break;
//		case '/':
//			op2 = pop();
//			if (op2 != 0)
//				push(pop() / op2);
//			else
//				printf("error: zero devisior\n");
//			break;
//		case '%':
//			op2 = pop();
//			if (op2 != 0.0)
//				push(fmod(pop(), op2));
//			else
//				printf("error: zero devisor\n");
//			break;
//
//			//либо функции, либо работа со стеком :\
//			//case 'p':
//			//	op2 = pop();
//			//	printf("\t%.8g\n", op2);
//			//	push(op2);
//			//	break;
//			//case 'd': //double
//			//	op2 = pop();
//			//	push(op2);
//			//	push(op2);
//			//	break;
//			//case 'r': //reverse
//			//	op1 = pop();
//			//	op2 = pop();
//			//	push(op1);
//			//	push(op2);
//			//	break;
//			//case 'c': //clean
//			//	clear();
//			//	break;
//
//		case '=':
//			pop();
//			if (val >= 'A' && val <= 'Z')
//				alphabet[val - 'A'] = pop();
//			else
//				printf("error: not name of a letter\n");
//			break;
//
//		case '\n':
//			printf("\t%.8g\n", pop());
//			break;
//		default:
//			if (type >= 'A' && type <= 'Z')
//				push(alphabet[type - 'A']);
//			else if (type == 'lttr')
//				push(lttr);
//			else
//				printf("error: unknown command %s\n", s);
//			break;
//		}
//		val = type;
//	}
//	return 0;
//}
//
//#define MAXVAL 100 //максимальный размер val стека
//
//double val[MAXVAL];	//стек значений
//int sp = 0;	//следующая свободная позиция в стеке
//
////push: помещает число f в стек операндов
//void push(double f)
//{
//	if (sp < MAXVAL)
//		val[sp++] = f;
//	else
//		printf("error: stack full, can`t push %g\n", f);
//}
//
////pop: извлекает и возвращает верхнее число из стека
//double pop(void)
//{
//	if (sp > 0)
//		return val[--sp];
//	else
//	{
//		printf("error: stack empty\n");
//		return 0.0;
//	}
//}
//
////функция для очистки стека, подключить для операций со стеком
////void clear(void)
////{
////	sp = 0;
////}
//
//int getch(void);
//void ungetch(int);
//
////getop: извлекает следующий операнд или знак операции
//int getop(char s[])
//{
//	int i, c;
//	while ((s[0] = c = getch()) == ' ' || c == '\t')
//		;
//	s[1] = '\0';
//	i = 0;
//
//	if (islower(c)) 	//комманда или имя
//	{
//		while (islower(s[++i] = c = getch()))
//			;
//		s[i] = '\0';
//		if (c != EOF)
//			ungetch(c);
//		if (strlen(s) > 1)
//			return NAMEFUNC;
//		else
//			return c;
//	}
//
//	if (!isdigit(c) && c != '.' && c != '-')	//не число
//		return c;
//
//	if (c == '-')
//	{
//		if (isdigit(c = getch()) || c == '.')
//			s[++i] = c;		//отрицательное число
//		else
//		{
//			if (c != EOF)
//				ungetch(c);
//			return '-';
//		}
//	}
//	if (isdigit(c))		//сбор целой части
//		while (isdigit(s[++i] = c = getch()))
//			;
//	if (c == '.')	//сбор десятичной части
//		while (isdigit(s[++i] = c = getch()))
//			;
//	s[i] = '\0';
//	if (c != EOF)
//		ungetch(c);
//	return NUMBER;
//}
//
//#define BUFSIZE 100
//
//
//char buf[BUFSIZE];  //буфер для ungetch
//int bufp = 0;	//следующая свободная позиция в buf
//
//int getch(void)		//ввод символа (возможно, возвращение в поток)
//{
//	return (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetch(int c)		//возвращение символа в поток ввода
//{
//	if (bufp >= BUFSIZE)
//		printf("ungetch: too many characnters\n");
//	else
//		buf[bufp++] = c;
//}
//
////4.8
////char buf = 0;
////int bufp = 0;	//следующая свободная позиция в buf
////
////int getch(void)		//ввод символа (возможно, возвращение в поток)
////{
////	int c;
////
////	if (buf == 0)
////		c = getchar();
////	else
////		c = buf;
////	buf = 0;
////
////	return c;
////}
////
////void ungetch(int c) //возвращение символа в поток ввода
////{
////	if (buf != 0)
////		printf("ungetch: too many characnters\n");
////	else
////		buf = c;
////}
//
//void mathfunc(char s[]) //математические функции
//{
//	double op2;
//	if (strcmp(s, "sin") == 0)
//		push(sin(pop()));
//	else if (strcmp(s, "cos") == 0)
//		push(cos(pop()));
//	else if (strcmp(s, "tan") == 0)
//		push(tan(pop()));
//	else if (strcmp(s, "exp") == 0)
//		push(exp(pop()));
//	else if (strcmp(s, "pow") == 0)
//	{
//		op2 = pop();
//		push(pow(pop(), op2));
//	}
//	else
//		printf("error: unknown command %s\n", s);
//}

//4.7
//void ungets(char s[])
//{
//	int len = strlen(s);
//
//	while (len > 0)
//		ungetch(s[--len]);
//
//}

//4.9
//непонятно как работает о.О
//int buf[BUFSIZE];	//буфер для ungetch, поменяли на int!!! потому что EOF - int
//int bufp = 0;     //следующая свободная позиция в buf
//
//int main(void)
//{
//	int c = '|';
//
//	ungetch(c);
//
//	while ((c = getch()) != EOF)
//		putchar(c);
//
//	return 0;
//}
//
//int getch(void)		//ввод символа (возможно, возвращение в поток)
//{
//	return (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetch(int c)		//возвращение символа в поток ввода
//{
//	if (bufp >= BUFSIZE)
//		printf("ungetch: too many characters \n");
//	else
//		buf[bufp++] = c;
//}

//4.10
//#include <stdio.h>
//#include <stdlib.h> //для atof()
//#include <math.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAXOP 100  //максимальный размер операнда или знака
//#define MAXLINE 100
//#define NUMBER '0' //сигнал, что обнаружено число
//#define NAMEFUNC 'a' //сигнал, что обнаружена функция
//
//
//int getop(char[]);
//void push(double);
//double pop(void);
//void mathfunc(char[]);
//int getline(char[], int);
//
//char line[MAXLINE];
//int line_i;
//
////калькулятор с обратной польской записью;
//int main()
//{
//	int type;
//	double op2, op1;
//	char s[MAXOP];
//
//	int i, val;
//	double lttr;
//	double alphabet[26];
//
//	val = 0;
//	for (i = 0; i < 26; i++)
//		alphabet[i] = 0.0;
//
//	while (getline(line, MAXLINE) != 0)
//	{
//		line_i = 0;
//		while ((type = getop(s)) != '\0')
//		{
//			switch (type)
//			{
//			case NUMBER:
//				push(atof(s));
//				break;
//
//			case NAMEFUNC:
//				mathfunc(s);
//				break;
//
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() + pop());
//				break;
//			case '-':
//				op2 = pop();
//				push(pop() - op2);
//				break;
//			case '/':
//				op2 = pop();
//				if (op2 != 0)
//					push(pop() / op2);
//				else
//					printf("error: zero devisior\n");
//				break;
//			case '%':
//				op2 = pop();
//				if (op2 != 0.0)
//					push(fmod(pop(), op2));
//				else
//					printf("error: zero devisor\n");
//				break;
//
//			case '=':
//				pop();
//				if (val >= 'A' && val <= 'Z')
//					alphabet[val - 'A'] = pop();
//				else
//					printf("error: not name of a letter\n");
//				break;
//
//			case '\n':
//				printf("\t%.8g\n", pop());
//				break;
//			default:
//				if (type >= 'A' && type <= 'Z')
//					push(alphabet[type - 'A']);
//				else if (type == 'lttr')
//					push(lttr);
//				else
//					printf("error: unknown command %s\n", s);
//				break;
//			}
//			val = type;
//		}
//	}
//	return 0;
//}
//
//#define MAXVAL 100 //максимальный размер val стека
//
//double val[MAXVAL];	//стек значений
//int sp = 0;	//следующая свободная позиция в стеке
//
////push: помещает число f в стек операндов
//void push(double f)
//{
//	if (sp < MAXVAL)
//		val[sp++] = f;
//	else
//		printf("error: stack full, can`t push %g\n", f);
//}
//
////pop: извлекает и возвращает верхнее число из стека
//double pop(void)
//{
//	if (sp > 0)
//		return val[--sp];
//	else
//	{
//		printf("error: stack empty\n");
//		return 0.0;
//	}
//}
//
////getop: извлекает следующий операнд или знак операции
//int getop(char s[])
//{
//	int i, c;
//	while ((s[0] = c = line[line_i++] == ' ' || c == '\t')
//		;
//	s[1] = '\0';
//	i = 0;
//
//	if (islower(c)) 	//комманда или имя
//	{
//		while (islower(s[++i] = c = line[line_i++]))
//			;
//		s[i] = '\0';
//		/*if (c != EOF)
//			ungetch(c);*/
//		if (strlen(s) > 1)
//			return NAMEFUNC;
//		else
//			return c;
//	}
//
//	if (!isdigit(c) && c != '.' && c != '-')	//не число
//		return c;
//
//	if (c == '-')
//	{
//		if (isdigit(c = line[line_i++] || c == '.')
//			s[++i] = c;		//отрицательное число
//		else
//			return '-';
//	}
//	if (isdigit(c))		//сбор целой части
//		while (isdigit(s[++i] = c = line[line_i++]))
//			;
//	if (c == '.')	//сбор десятичной части
//		while (isdigit(s[++i] = c = line[line_i++]))
//			;
//	s[i] = '\0';
//	line_i--;
//
//	return NUMBER;
//}
//
//
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i++] = c;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//
//void mathfunc(char s[]) //математические функции
//{
//	double op2;
//	if (strcmp(s, "sin") == 0)
//		push(sin(pop()));
//	else if (strcmp(s, "cos") == 0)
//		push(cos(pop()));
//	else if (strcmp(s, "tan") == 0)
//		push(tan(pop()));
//	else if (strcmp(s, "exp") == 0)
//		push(exp(pop()));
//	else if (strcmp(s, "pow") == 0)
//	{
//		op2 = pop();
//		push(pow(pop(), op2));
//	}
//	else
//		printf("error: unknown command %s\n", s);
//}
