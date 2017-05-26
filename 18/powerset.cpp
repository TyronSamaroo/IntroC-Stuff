#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <set>
using std::set;

/* TODO: try to re-write the powerset function from lecture. */

/* with sets: */
set<set<int> > powerSet(set<int>& S)
{
	/* check base case: */
	if (S.size() == 0) {
		set<int> empty;
		set<set<int> > P;
		P.insert(empty);
		return P;
	}
	int leftout = *S.begin();
	S.erase(leftout);

	set<set<int> > T = powerSet(S);

	set<set<int> > P(T); /* copy T into P */

	for (set<set<int> >::iterator i = T.begin(); i!=T.end(); i++) {
		set<int> U = *i;
		U.insert(leftout);
		P.insert(U);
	}
	return P;
}

typedef vector<int>::iterator vi;
typedef vector<vector<int> >::iterator vvi;
vector<vector<int> > powerSet1(vector<int>& S)
{

	if (S.size() == 0) {

		return vector<vector<int> >(1,vector<int>());

	}
	int leftout = S.back();
	S.pop_back();
	vector<vector<int> > PS_prime = powerSet1(S);
	vector<vector<int> >P(PS_prime);

	for (vvi i = PS_prime.begin(); i != PS_prime.end() ; i++) {

		vector<int> T(*i);
		T.push_back(leftout);
		P.push_back(T);
	}

	S.push_back(leftout);
	return P;
}

/* TODO: trace the above by hand on small-ish input (say a 3 or 4 element set).
 * Make sure you understand every detail.  Then trace it with gdb.  For this,
 * I would recommend compiling with `make -B debug`.  NOTE: I have disabled
 * optimization for the debug target.  Failing to do so might make the trace
 * a little confusing...  We'll go through this next class, but one command
 * in gdb that will be useful is 'bt' which prints the call stack. */
/* For this, assume all elements of the vector are distinct. */

int main()
{
#if 1
	/* TODO: test code goes here */
	set<int> S = {0,1,2};
	set<set<int> > P = powerSet(S);
	cout << "{\n";
	for (set<set<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "},\n";
	}
	cout << "}\n";

#endif
#if 0
	/* TODO: test code goes here */
	vector<int> S = {0,1,2};
	vector<vector<int> > P = powerSet1(S);
	cout << "{\n";
	for (vector<vector<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
		for (vector<int>::iterator j = i->begin(); j!=i->end(); j++) {
			cout << *j << " ";
		}
		cout << "},\n";
	}
	cout << "}\n";
#endif
	return 0;
}

/* TODO: try to finish the extended gcd (xgcd) algorithm from last time. */
