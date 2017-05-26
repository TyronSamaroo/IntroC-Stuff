#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* TODO: try to reproduce this entire thing on your own. */

/* merge two sorted arrays into one */
void merge(vector<int>& A, size_t low, size_t mid, size_t high)
{
	vector<int> merged;
	size_t l=low;
	size_t r=mid+1;
	while (l <= mid && r <= high) {
		if (A[l] < A[r])
			merged.push_back(A[l++]);
		else
			merged.push_back(A[r++]);}
while(l<=mid) merged.push_back(A[l++]);

while(r<=high) merged.push_back(A[r++]);

for(size_t i=low; i<=high; i++)
	A[i]=merged[i-low];

}

/* sort A[low...high], inclusive. */
void mergeSort(vector<int>& A, size_t low, size_t high)
{

	if (low >= high)return;

	size_t mid = (low+high) / 2;
	mergeSort(A,low,mid);
	mergeSort(A,mid+1,high);
	merge(A,low,mid,high);
	/* TODO: convince yourself (ideally, with mathematical proof) that
	 * the subarrays we computed above will always be non-trivial.  That
	 * is, neither subarray will be the entire array A[low..high].
	 * (This is crucial to prevent infinite recursion!) */

}


int main(void)
{
	vector<int> A;
	int temp;
	while (cin >> temp) {
		A.push_back(temp);
	}
	mergeSort(A,0,A.size()-1);
	for (size_t i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
	return 0;
}

/* TODO: test this out.  A not very interesting test could look like:
 * $ echo {10..1} | ./test
 * */
/* TODO: trace this with gdb.  Build with `make -B debug`, run it
 * under gdb, step through the code, and remember the `bt` command
 * which shows you the current "stack" of function calls. */
