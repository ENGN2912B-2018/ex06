#include <iostream>

using namespace std;

int main(int nargc, char* argv[])
{

	const unsigned int N = 9;

	// initialize contents of array
	double *x;
	x = new double[N] {0};
	
	// display contents of array (using range-based for loop:  c++11)
	for (unsigned int n=0; n < N; n++){
//	for (int &n : *x) {
		if (n > 0)
			x[n] = x[n-1]+1;
		cout << "x[" << n << "] = " << x[n] << endl;
	}

	delete[] x;

    return 0;
}

