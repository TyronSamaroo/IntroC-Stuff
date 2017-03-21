/* strings.cpp
 * More examples working with strings...
 * */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#if 1
/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * We did this in class, but it is a good self-test.  Try to write it
 * from scratch without looking.
 * */
size_t Func(const string& s, char c)
{size_t count=0;
 for(size_t i=0; i<s.length();i++){
   if (s[i]==c)
    count++;}
	return count;
}
int main()
{
string s;
char c;
cout<<"Please Enter A Word!: ";
cin>>s;
cout<<"Please Enter A Letter!: ";
cin>>c;
cout<<"There is "<<Func(s,c)<<" "<<c<<" In The Word "
 <<s<<endl;
 cout<< "HAVE A HORRIBLE FUCKING DAY! GOODBYE!"<<endl;


return 0;
}

#endif
#if 0
/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

#endif
#if 0
/* TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of the second.  Remember
 * that the return value should be the index at which the string was found, or
 * -1 to indicate that the string was not found.
 * */
int isSubstring(const string& s1, const string& s2) {
 int n1=s1.length();
 int n2=s2.length();
 int j;
for(int i=0;i<n1-n2;i++){
for(j=0;j<n2;j++){
 if(s1[i+j]!=s2[j])
  break;
}
if(j==n2)
 return i;
}
	return -1;
}

int main(){
 string s1;
 string s2;
 cin>>s1;
 cin>>s2;
 cout<< isSubstring(s1,s2)<<endl;
 return 0;
}
#endif
#if 0
/* NOTE: there is a built-in string function for this (find(str,pos)).
 * TODO: try it out (but don't use it to solve the above, of course!).
 * */

/* TODO: write a function that takes a string by reference and reverses it.
 * We outlined this in lecture.  Make sure you can do it on your own.
 * */
void reverse(string& s){
 for(size_t i=0; i< s.length()/2;i++){
  //swap s[i] s[s.length()-i-1]//
  char swap=s[i];
  s[i]=s[s.length()-i-1];
  s[s.length()-i-1]=swap;
 }
}
int main(){
string x;
string s;

cin>>x;
s+=x ;

reverse(s);
for(size_t i=0; i<s.size();i++){
cout << s[i];
}
cout<<endl;
return 0;
}

#endif
#if 0
int main() {
	/* TODO: write test code for all of the functions you wrote above */
	return 0;
}
#endif