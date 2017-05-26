#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/* Let's revisit our example from last class: */
void f(int n) {
	if (n == 0) {
		cout << 0 << " "<<endl;
		return;
	}
cout << n << " "<<endl;
	f(n-1);

	/* TODO: make sure you can trace the sequence of recursive calls that
	 * would result from calling say, f(3).  Flip the order of the cout
	 * statement and the recursive call, and make sure you understand
	 * the output in both cases. */
}

// TODO: write a recursive function that prints the base 10 digits of n
// vertically to cout.  for example, printVertically(2358) would print
// 2
// 3
// 5
// 8
// Rules: you can't use any loops.  You can't use vectors or arrays.
// Just let the recursive function calls do the work for you.
void printVertically(unsigned long n)
{
	if(n<10){

	return n;}
		printVertically(n/10);
		return n%10;
}


	// your code goes here.


// TODO: write a recursive function to compute a^b (a to the b power)
int power(int a,int b){
	if(b == 0) return 1;
	return a * power(a,b-1);
}

/* binary search. */

bool search(int* A, int size, int x)
{
	/* TODO: try to turn the following "plain-English" procedure into
	 * a recursive program:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */
	return false;
}

int main()
{ //int a,b;
	//cin>> a;
	//cin>> b;
	//cout<<power(a,b)<<endl;

	// f(4);
	/* TODO: write test code for your functions. */
	printVertically(234);
	/* binary search test: */
	/* int A[100];
	for (size_t i = 0; i < 100; i++) {
		A[i] = i*i;
	}
	int x;
	while (cin >> x)
		cout << search(A,100,x) << endl;
*/
	return 0;
}

/* TODO: try to write the "memoized" version of fibonacci we outlined
 * during lecture.  NOTE: there are some slightly annoying details if
 * you use vectors.  Maps might be a bit easier. */
