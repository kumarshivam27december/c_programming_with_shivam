#include  <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
	bool isprime = true;
	while(i<n){
	if(n%i==0)
	{
		isprime = false;
		break;
	}i++;
     }

	if(isprime)
	{
	  cout<<"It is prime";
	}else{cout <<"It is not a prime";}


	return 0;


}
