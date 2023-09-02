#include <iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
 }
}
void insert(int arr[],int n)
{

//current index to be inserted
for(int i=1; i<n; i++){

for(int j=i; j>=1; j--){

	if(arr[j] < arr[j-1])
		swap(arr[j], arr[j-1]);

	else
		break;

	}
}
}
int main(){
int arr[5]={2,1,3,4,0};
insert(arr,5);
print(arr,5);
return 0;
}
