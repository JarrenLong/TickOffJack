#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
void Program(char *String, ...);
void Delay (clock_t MiliSeconds);
void GotoXY (int x, int y);
BOOL SetColor (WORD Color);

void Program(char *String, ...)
{
	va_list List;
	char FormattedString[80] = {0};
    va_start (List, String);
		vsprintf (FormattedString, String, List);
	va_end (List);
	SetConsoleTitle (FormattedString);
}
void Delay (clock_t MiliSeconds)
{
	clock_t EndTime = 0;
	if (MiliSeconds > 0)
	{
		EndTime = clock () + MiliSeconds;
		while (clock () < EndTime);
	}
	else
	{
		if ( !(MiliSeconds > 0) )
		{printf ("Error", MiliSeconds);}
	}
}
void GotoXY (int x, int y)
{
	COORD coord = {0};
	if ( (x >= 0) && (x <= 78) && (y >= 0) && (y <= 24) )
	{
		coord.X = (short) x;
		coord.Y = (short) y;
		SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coord);
	}
	else
	{
		if ( !((x >= 0) && (x <= 78)) )
		{printf ("Error! Value x is not between 0 and 78 (x = %02d).", x);}
		if ( !((y >= 0) && (y <= 24)) )
		{printf ("Error! Value y is not between 0 and 24 (y = %02d).", y);}
	}
}
BOOL SetColor (WORD Color)
{return SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), Color);}
