#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *_abs - program calculates absolute value of input
  *@a: input
  *Return: absolute value of a
  */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
