#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a = 0;
	int b = 0;
	int t = 0;
    cout<<"enter"<<endl;
	cin>>t;
	for(int i=0; i < t; i++){
        cout<<"again"<<endl;
	    cin>>a>>b;
	    if(a == 0){
	        cout<<"Liquid"<<endl;
	    }
	    else if(b == 0){
	        cout<<"Solid"<<endl;
	    }
	    else{
	        cout<<"Solution"<<endl;
	    }
	}
	return 0;
}
