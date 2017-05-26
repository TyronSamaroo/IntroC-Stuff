#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<time.h>
#include <cstdlib> // for atol
#include <map>
using std::map;
#include <vector>
using std::vector;

/* TODO: review that "print vertically" function.  Make sure you can write
 * it on your own and that you understand why it works (you can trace the
 * sequence of calls) */

/* TODO: write code to compute the greatest common divisor of two integers
 * Do this with recursion -- no loops!  */
int gcd(int a, int b)
{ if(b==0){
	return a;}

	return gcd(b,a%b);
}

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets u and v such that ua + vb = gcd(a,b) Warning: this might take a
 * little bit of thinking (if you don't just look up the answer online).  Save
 * it for last. */
int xgcd(int a, int b, int& u, int& v)
{if(b==0){
	u=1;
	v=0;
	return a;
}
int u1,v1;
cout << u1 << v1 << "\n";
xgcd(b,a%b,u1,v1);
u=v1;
v=u1-(a/b)*v1;
	return xgcd(b,a%b,u1,v1);
}

void gcdTest()
{
	// TODO: modify this to test your *extended* gcd algorithm,
	// once you've written it, that is.
	int a,b,d,x,y;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = xgcd(a,b,x,y);
		cout << "The gcd is: " << d<<" "<<x<< " "<<y << endl;
	}
}

int main(int argc, char** argv)
{
	gcdTest();

	return 0;
}
