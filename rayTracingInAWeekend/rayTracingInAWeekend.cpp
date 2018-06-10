// rayTracingInAWeekend_v03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream myfile;
	myfile.open("C:/Users/sped/Documents/Visual Studio 2015/Projects/rayTracingInAWeekend_v03/test.ppm");
	//myfile << "Writing this to a file.\n";
	//myfile.close();

	int nx = 200;
	int ny = 100;
	myfile << "P3\n" << nx << " " << ny << "\n255\n";
	//std::cout << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			float r = float(i) / float(nx);
			float g = float(j) / float(ny);
			float b = 0.2;
			int ir = int(255.99*r);
			int ig = int(255.99*g);
			int ib = int(255.99*b);
			//std::cout << ir << " " << ig << " " << ib << "\n";
			myfile << ir << " " << ig << " " << ib << "\n";
		}
	}
	myfile.close();
}