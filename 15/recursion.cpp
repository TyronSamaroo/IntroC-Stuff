#include <iostream>
using std::cout;
using std::cin;

/* TODO: WITHOUT compiling and running this, see if you can predict
 * the output of f(4). */
void f(int n) {
	if (n == 0) {
		cout << 0 << " ";
		return;
	}
	cout << n << " ";
	f(n-1);
	cout << n << " ";
}


/* TODO: write the factorial example from lecture. */
int fac(int n){
	if(n == 1)
	return 1;

	return fac(n-1)*n;
}


/* TODO: review mathematical induction, and if possible practice
 * some proofs.  */
/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
int power(int n,int x){
	if(n == 0) return 1;
	return x * power(x,n-1);
}
/* TODO: write a function that recursively computes terms of the
 * fibonacci sequence.  Be careful -- it will likely be quite
 * slow on large inputs!  See if you can understand why.  */
int fib(int x){
	if( x == 0) return 0;
	if( x == 1) return 1;
	return fib(x-1)+ fib(x-2);
}
/* TODO: try to implement the idea for recursive sorting from the lecture.
 * IDEA: sort the left and right halves recursively, then combine them
 * together with some kind of "merge" operation.
 * NOTE: this one might be a little tricky! */

int main(void){
	int n,x;
	cout << "What is the square root of your hairline"<< "\n";
	cin >> n;
  cin >> x;
	cout << power(n,x);
	//cout << fib(x);
	//cout << ff(x);
	//cout << fac(x);
  //f(4);
	cout << "\n";
	return 0;

}
