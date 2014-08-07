#include "stdafx.h"
#include <iostream>
#include "vector1.h"

using namespace std;

vector1::vector1(int s)
{
	//vector1::vector1(int s) : elem{ new double[s] }, sz{ s } 
	if (s < 0) throw length_error{ "length error" };
	elem = new double[s];
	sz = s;


} //constructor, created on the heap, vector1 object will always be the same size

double& vector1::operator[](int i)
{
	if (i < 0 || size() <= i) throw out_of_range{ "vector1::operator[]" };
	return elem[i];
}

int vector1::size()
{
	return sz;
}

