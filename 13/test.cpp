#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set> /* <-- new stuff. */
using std::set;
#include <string>
using std::string;
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <vector>
using std::vector;


void vecsort(){
vector<int>S1;
int x;
  while(cin>>x){
    S1.push_back(x);
  }
  set<int> A;
  for (int i=0;i<S1.size(); i++){
    A.insert(S1[i]);}

    vector<int>S2;

    for(set<int>::iterator j=A.begin(); j !=A.end();j++){
      S2.push_back(*j);}

  for(size_t a=0; a<S2.size(); a++){
    cout<< S2[a] << endl;
  }}


  int main(void)

{
  vecsort();
  return 0;
  }




void Vecsort1(){
vector<int> temp;
int x;
vector<int> v;
while (cin >> x) {
		v.push_back(x);
	}

set<int> S1;
for(size_t i=0; i< v.size(); i++){
		S1.insert(v[i]);
}

for (set<int>::iterator i = S1.begin();i != S1.end(); i++) {

	temp.push_back(*i);
}
v=temp;
for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}