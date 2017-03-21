/* Lucas sequences. */

// the usual stuff:
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/* Lucas sequences (of the first kind):
	 * U_n(P,Q) = P*U_{n-1}(P,Q) - Q*U_{n-2}(P,Q).
	 * The first two terms are defined as 0 and 1, respectively.
	 * */
	/* TODO: write this.  Try not to just copy what's in the outline
	 * in the notes, but instead try it from scratch first! Also, make
	 * sure your code works for small values of n (0 and 1 in particular).
	* */
	#if 1
int a=1,b=0,c=1,n=0;
	cin>>n;
	if(n==0)
		c=0;
	if(n==1)
		c=1;
	for(int i=2;i<n;i++)
		{
		b=a;
		a=c;
		c=a+b;}
		cout<<"Output "<<c <<endl;
#endif
# if 0
	int a=0,b=0,c=1,n=0;
	cin>>n;
	for(int i=0;i<=n;i++)
		{
		a=b;
		b=c;
		c=a+b;
		cout<< c <<endl;
#endif
	return 0;
}



// vim:foldlevel=1
