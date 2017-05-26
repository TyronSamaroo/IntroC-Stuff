#include <iostream>
using std::cout;
#include <vector>
using std::vector;
#include <set>
using std::set;

/* TODO: write a function to compute all *k-subsets* of a given set.
 * Recall that k-subsets are subsets with *precisely* k elements.
 * Below are some function prototypes you could use.  See the notes
 * for the intuition and an outline. */

/* with sets: */
set<set<int> > ksubsets1(set<int>& S, size_t k);
/* or with vectors: */
vector<vector<int> > ksubsets(vector<int>& S, size_t k){
 if(k==0) return vector<vector<int> >(1,vector<int>());
 if(k> S.size()) return vector<vector<int> >();

 int l= S.back();
 S.pop_back();
vector<vector<int> > K= ksubsets(S,k);
vector<vector<int> > T= ksubsets(S,k-1);

 for(size_t i= 0; i< T.size(); i++){
  T[i].push_back(l);
  K.push_back(T[i]);
 }
 S.push_back(l);
 return K;
}

int main()
{
 vector<int> S = {1,2,3};
	vector<vector<int> > P = ksubsets(S,2);
	cout << "{\n";
	for (vector<vector<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
  for (vector<int>::iterator j = i->begin(); j!=i->end(); j++) {
			cout << *j<< " ";
		}
		cout << "},\n";
	}
	cout << "}\n";

	/* TODO: write some test code. */
	return 0;
}
