//#ifndef VECTOR1_H
//#define VECTOR1_H

class vector1 {
public:
	vector1(int s);
	double& operator[](int i);
	int size();

private:
	double* elem; // pointer to array of sz doubles
	int sz; // number of elements
};

//#endif