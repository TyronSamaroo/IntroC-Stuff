#include <iostream>
using std::cout;
using std::cin;
#include <vector>
using std::vector;

/* TODO: Try to finish the outline given below. */
/* TODO: If you have to look at the spoiler, then study it carefully
 * and try to explain it to a friend, or your cat (or an inanimate object
 * if none of the above seem to in the mood for conversation). */

vector<vector<int> > perms(vector<int> V)
{

	if (V.size() == 1) return vector<vector<int> >(1,V);

	vector<vector<int> > R;
	for (size_t i = 0; i < V.size(); i++) {

		#if 1
		int last = V[i];
		V[i] = V[V.size()-1];

		V.pop_back();
		vector<vector<int> > T = perms(V);

		for (size_t j = 0; j < T.size(); j++) {
			T[j].push_back(last);
			R.push_back(T[j]);
		}

		V.push_back(V[i]);
		V[i] = last;
		#endif

	}
	return R;
}

int main()
{
	/* TODO: test this out more.  Here's some sample output from mine:
	 * $ echo {0..2} | ./perms
	 * 1 2 0
	 * 2 1 0
	 * 2 0 1
	 * 0 2 1
	 * 1 0 2
	 * 0 1 2
	 * */
	vector<int> V;
	int n;
	while (cin >> n) {
		V.push_back(n);
	}
	vector<vector<int> > R = perms(V);
	for (size_t i = 0; i < R.size(); i++) {
		for (size_t j = 0; j < R[i].size(); j++) {
			cout << R[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
