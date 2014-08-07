// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "vector1.h"

namespace my_code {
	class complex {};
} // create namespace with stuff


using namespace std;







/*

void f1(vector1 v) {
	try {
		v[v.size()] = 7;
	}

	catch (out_of_range){
		printf("out of range error, what to do?\n");
	}

}

void test_vector1()
{
	try{
		vector1 v(-1);
	}
	catch (length_error){
		//handle negative error
	}
	catch (bad_alloc){
		//handle memory exhaustion
	}
}

*/






void f(vector1 v, vector1& rv, vector1* pv)

{
	//int i1 = v.sz;
	//int i2 = rv.sz;
	//int i3 = pv->sz;

	//printf("%d\n",i);
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int cndmv = 17;
	int nvar = 10;
	cout << "Hello World!" << endl;
	//constexpr double max1 = nvar^2;
	vector<int> v;
	//if (1) throw out_of_range{ "test" };
	vector1 v1(4);
	
	printf("hello world\n");

//	f1(v1);

	return 0;
}

