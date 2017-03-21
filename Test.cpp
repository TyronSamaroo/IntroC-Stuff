#include<iostream>
using std::cin;
using std::cout;

int main()
{
	int min,secmin,n;
cin>>n;
cin>>secmin;
while(cin>>n)
{
			if(n<min)
			n=min;
					if(n<secmin && secmin>min)
					secmin=n;


}
cout<<"Your Lucky Number is "<<secmin<<"!"<<"\n";

return 0;
}