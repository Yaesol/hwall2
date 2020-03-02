#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

void main()
{
	ofstream f1, f2, f3, f4;

	double x[45], y[16];

	char c1[5] = "$t00";
	char c2[4] = "$t0";
	char c3[3] = "$t";

	char c[7] = ".pos=[";
	char command[30];

	for (int i = 0; i < 45; i++) {
		x[i] = (1.1) + (2.2)*i;
	}

	for (int i = 0; i < 16; i++) {
		y[i] = (3.1) + (6.2)*i;
	}

	f1.open("surface2_truncatedcone1.ms");

	for (int i = 0; i < 9; i++) {
		int j = i/45;
		int num = i - j*45;
		f1 << c1 << i+1 << c << x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 9; i <100; i++) {
		int j = i/45;
		int num = i - j * 45;
		f1 << c2 << i + 1 << c << x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 100; i < 720; i++) {
		int j = i/45;
		int num = i - j * 45;
		f1 << c3 << i + 1 << c << x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	f1.close();

	f2.open("surface2_truncatedcone2.ms");

	for (int i = 0; i < 9; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f2 << c1 << i + 1 << c << x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 9; i < 100; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f2 << c2 << i + 1 << c << x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 100; i < 720; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f2 << c3 << i + 1 << c << x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	f2.close();

	f3.open("surface2_truncatedcone3.ms");

	for (int i = 0; i < 9; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f3 << c1 << i + 1 << c << -x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 9; i < 100; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f3 << c2 << i + 1 << c << -x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 100; i < 720; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f3 << c3 << i + 1 << c << -x[num] << "," << y[j] << "," << 1.3 << "]" << endl;
	}

	f3.close();

	f4.open("surface2_truncatedcone4.ms");

	for (int i = 0; i < 9; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f4 << c1 << i + 1 << c << -x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 9; i < 100; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f4 << c2 << i + 1 << c << -x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	for (int i = 100; i < 720; i++) {
		int j = i / 45;
		int num = i - j * 45;
		f4 << c3 << i + 1 << c << -x[num] << "," << -y[j] << "," << 1.3 << "]" << endl;
	}

	f4.close();

}
