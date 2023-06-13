#include <iostream>
#include <Windows.h>
#include "PersList.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	PersList peoples(5);

	peoples.representation();

	peoples.conversation();

	return 0;
}