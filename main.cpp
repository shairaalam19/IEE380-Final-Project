#pragma once
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <limits.h>
#include <iostream>

using namespace std;

int main() {
	FILE* ifile;
	int size = 50;
	ifile = fopen("Data.csv", "w");
	srand((unsigned)time(0));
	int max = 100;
	int min = -100;
	for (int i = 0; i < size; i++) {
		int data = min + rand() % (max - min + 1);
		fprintf(ifile, "%d\n", data);
	}

	fclose(ifile);
	return 0;
}

