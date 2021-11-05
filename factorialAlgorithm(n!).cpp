#include <iostream>

using namespace std;

class Complexity{
	private: int x;
	public: int facto(int n){
		
		if(n==0){
			return 1;
		}	
		else{
			return n*facto(n-1);
			
		}
	}
	public: void get(){
		cout<<"Enter a number."<<endl;
		cin>>x;
		
		cout<<x<<"!"<<"="<<facto(x)<<endl;
	}
};
int main()
{
	Complexity co;
	co.get();
	return 0;
	
}
