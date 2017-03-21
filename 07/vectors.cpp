/* Introducing vectors; more on functions. */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::swap;
#include <string>
using std::string;
#include <vector> /* <--- new stuff */
using std::vector;
#include <cstdio>
#include<algorithm>
#if 0
/* TODO: write a function that takes a vector and searches
 * for a particular value x, returning true <==> x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */
bool vectorsearch(vector<int>v,int x){

	for(size_t i=0;i< v.size();i++){
		if(x==v[i]){return true;}
	}
	return false;}

int main(){
vector<int>v;
int x=0;
for(int i=0;i<=50 ;i++){
v.push_back(i);
}
cout<< "This Vector Value Exist Between 0 and 50"<<endl<< "Please Enter a Value Between 0 and 50 To Check If It Exist"<<endl<<"1 Meaning It Exist and 0 Meaning It Does Not Exist"<<endl;
cin>> x;
cout<<vectorsearch(v,x)<<endl;
return 0;}

#endif
#if 1
	/* TODO: read list of integers and print in reverse order.  (There
	 * is a solution outlined in the notes -- use a vector). */
	/* NOTE: remember that vector itself isn't a datatype.  It is like a
	 * machine that creates datatypes: */
	// vector v; /* won't compile -- vector isn't a type */
int main(){
int n;
vector<int>v;
while(cin>>n){v.push_back(n);
}
for(int i=v.size()-1;i>=0;i--)
cout<< v[i]<<"\n";}

#endif
#if 0
	/* TODO: figure out what is wrong with this version.  Note that we
	 * never use push back, but access elements directly. */
	int count = 0;
	while(cin >> s) {
		v[count] = s;
		count++;
	}
	/* NOTE: the above will compile, but it will break at *runtime* even
	 * on relatively small inputs.  For a hint, see capacity-test.cpp.  */

	return 0;
}
#endif
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
#if 0
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  Warning: this could be kind of challenging. */

size_t indexOfSmallest(const vector<int>& V, size_t start){
size_t  smallindex= start;
	for(size_t i=start+1; i<V.size();i++){
		if (V[i]<V[smallindex])
				smallindex=i;}
				return smallindex;
}
void sort(vector<int>& V){
for(size_t i=0; i<V.size()-1;i++){
	swap(V[i],V[indexOfSmallest(V,i)]);

}
}

int main(){
int x;
vector<int> v;

	while(cin>>x){
	v.push_back(x);
}
sort(v);
for(size_t i=0; i<v.size();i++){
	cout << v[i]<<"  ";
}
cout<< "\n";
return 0;
}


#endif












