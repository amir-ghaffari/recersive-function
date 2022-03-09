#include<iostream>
#include<math.h>

using namespace std;

void func (int x,int n,int a) {				//////// I am not sure if this is the type of recurtion you wanted but
	if (a>x) {									///  it's the best I could do...
		cout<<"no (more) set of numbers found";
	}
	else{
		int repeat=x;
		
		for (int i=0;i<=(x/2);i++) {
			x=x-pow (a,n)-pow (i,n);
			if (x==0) {
				cout<<a<<"  "<<i<<endl;
			}
			else {
				x=repeat;
			}
		}

	
	return (func(x,n,a+1));
	}
}

int main () {
	int x,n;
	cout<<"please enter the x factor: ";
	cin>>x;
	cout<<"please enter the pwoer (n factor): ";
	cin>>n;
	
	func(x,n,1);
}
