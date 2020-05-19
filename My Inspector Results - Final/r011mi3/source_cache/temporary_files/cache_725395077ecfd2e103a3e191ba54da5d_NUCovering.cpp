﻿#include "fragmentation.h"
#include <locale.h>

/// параметры начальной прямоугольной области
/*
const double g_l1_max = 12.0;
const double g_l2_max = g_l1_max;
const double g_l1_min = 8.0;
const double g_l2_min = g_l1_min;
const double g_l0 = 5.0;

/// точность аппроксимации рабочего пространства
const double g_precision = 0.25;
*/

int main()
{
	setlocale(LC_ALL, "Rus");

	high_level_analysis main_object;
	high_resolution_clock::time_point start = high_resolution_clock::now();
	main_object.GetSolution();
	high_resolution_clock::time_point finish = high_resolution_clock::now();
	duration<double> duration = (finish - start);


	cout << "Duration: " << duration.count() << " seconds" << endl;


	const char* out_files[3] = { "Solution.txt", "Boundary.txt", "Not_Solution.txt" };
	WriteResults(out_files); 

	return 0;
}