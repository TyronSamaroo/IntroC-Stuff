/* More about loops.
 * See lectures 4,5,6 from Prof. Li.,
 * and chapters 3,4 in the book. */

// the usual stuff:
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

int main()
{
	/* BIG PICTURE IDEAS WITH LOOPS.
	 * 1. "Brute force" -- leverage the speed of the computer to explicitly
	 *    run through an entire space of potential solutions, checking
	 *    each candidate for validity.  This is usually pretty trivial.
	 * 2. Maintaining invariants -- when computing some aggregate function
	 *    of a long list of inputs, initialize a variable to be something
	 *    like "the right answer so far" and then read new inputs one by
	 *    one, *updating your candidate answer* so that after each iteration
	 *    of the loop, it is ALWAYS the "right answer so far".
	 * NOTE: even brute force typically has an invariant hiding somewhere, but
	 * it usually isn't all that interesting.
	 * Let's see some examples: */

	/* exercise: compute the min of integers supplied via stdin. */
#if 0
	int n; /* store input */
	int min; /* minimum of what we've seen *so far*. */
	cin >> n;
	min = n; /* NOTE: at this point, min's value is
				consistent with the meaning we gave it! */
	while (cin >> n) {
		if (n < min) min = n;
		/* NOTE: the *invariant* for this loop is that
		 * min is the smallest value we've read so far.
		 * Initialize min to have this property before the
		 * loop, and then at the end of each iteration, make
		 * sure this property remains true (it's *invariant*).
		 * */
	}
	cout << min << "\n";
	return 0;
#endif

	/* TODO: if you haven't already, be sure you can do this on your own,
	 * as well as similar things like the min, the sum, the product, the
	 * average...  Try to take the following very high level steps:
	 * 1. First, think about how many variables you will need, and for what
	 *    purposes.
	 * 2. Declare the variables, and in comments, state the meaning of each
	 *    variable.
	 * 3. Loop through the input and make sure the meaning of each of your
	 *    variables is preserved at the end of each iteration of the loop.
	 * 4. Finally, print the results.
	 * */

	/* exercise: brute force gcd.  Compute the greatest common
	 * divisor of n and k by an exhaustive search.  */
	/* IDEA: start with the largest possible value that the gcd
	 * could have, then walk *backwards* until you find the first
	 * value that divides both inputs. */
	/* Range of possibilities for a valid answer: {min{a,b}...1} */
	#if 0
	int a,b; /* store the input */
	cin >> a;
	cin >> b;
	/* to make life easier, let's force a to be the smallest one.
	 * So, we swap the contents if needed: */
	if (a > b) { /* need to swap the contents a <--> b */
		int t = a; /* save old value of a */
		a = b;
		b = t;
	}
	/* now we know for sure a <= b */
	for (int i = a; i >= 1; i--) {
		/* test if i is a common divisor.  The first one
		 * we find will be the gcd, since we started from
		 * the largest possible value. */
		if (b % i == 0 && a % i == 0) { /* test if i divides both a and b */
			printf("gcd(%i,%i) == %i\n",a,b,i);
			break;
		}
	}
	return 0;
	#endif

#if 1
	/* TODO: brute force test for perfect cubes.  Check if
	 * n = k^3 for some integer k.  */

int n,k;
cin>> n;
cin>> k;
if(k>n){
	int t=k;
	k=n;
	n=t;
}
for(int i=n;i>1;i--){
if(i*i*i==n)
{
cout<< "Your hairline is a perfect cube"<<"\n";}
}
#endif
#if 0
int n,k;
cin>> n;
cin>> k;
if(k*k*k==n)
cout<<"Perfect Cube \n";
else
cout<<"Not Perfect Cube \n";
#endif
# if 0
	/* TODO: write a loop that prints the sum of the first n odd cubes. */
int n,k,i=1;
int sum= 0;
cin>> n;
while(i<=n)
	{
if(i%2!=0){
	i--;
	k=i;
	sum += k*k*k;

cout<<sum<<"\n";}
}
#endif

#if 0
int n,i;
int sum;
cin>> n;
for(i=1;i<=n;i+=2)
	{
	sum += i*i*i;
	}
cout<<sum<<"\n";


#endif
#if 0

	/* TODO: write code that gets an integer n from the user and prints out
	 * the n-th term of the fibonacci sequence. */
int a=1,b=0,c=1,n;
	cin>>n;
	for(int i=2;i<n;i++)
		{
		a=b;
		b=c;
		c=a+b;
		}
		cout<< "The "<< n << "th term of the fibonacci sequence is "<< c <<endl;
#endif

#if 0
	/* TODO: a slight generalization of an earlier exercise: for integers
	 * n and k, determine the largest power of k that divides n. */
	 int n,k;
	 int count=0;
	 cout<< "Input n: \n";
	 cin>> n;
	 cout << "Input k: \n";
	 cin>>k;

	 while(n%k==0) {
		 count++;
		 n /= k;
	 }
cout<<count<<"\n";
return 0;
#endif

#if 0
	/* TODO: write a program that reads (arbitrarily many) integers from
	 * stdin and outputs the *second* smallest one.  NOTE: you don't need
	 * to store many numbers (all at once, that is) to do this!  You'll
	 * only need a few integer variables.  Think about invariants! */
int main(){
int n,min,secmin,n1,n2;
for(int i=0; i<100;i++){
	while(cin>>n1 &&
cin>>n2){

  if(n1<n2)
  {min=n1;
    secmin=n2;}
else{ min=n2;
  secmin=n1;}
}
 /* while(cin>>n)
{if (n<secmin){
  if(n<min)
  {
  secmin=min;
  min=n;}
else secmin=n;

}
}
*/
}
cout<<secmin<<endl;





return 0;
}

#endif
// vim:foldlevel=1
}