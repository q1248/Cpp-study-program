#include"function.h"
#include<cassert>

 int literal() {

	return 34;
}
int main() {
	
	int a=1;
	int b = 2;

	using debug::Swap_test;
	Swap_test(a, b);
	cout << a << " " << b << endl;
	using df = decltype(Swap_test)*;
	auto *demo = literal;
	df test;
	int h = 1;
	int i = 3;
	test(h,i);

	cout << a <<" "<< b << endl;

	
	
	
	


	
	system("pause");
	return EXIT_SUCCESS;
}