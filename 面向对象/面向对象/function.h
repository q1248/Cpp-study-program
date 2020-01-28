#pragma once
#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

namespace debug {
#define NDEBUG
	void Swap_test(int&c, int &d) {

		int temp;
		temp = c;
		c = d;
		d = temp;
		
	}
	
}