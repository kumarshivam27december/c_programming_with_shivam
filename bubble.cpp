#include <iostream>
using namespace std;
void print(int arr[],int n){

for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}cout<<endl;


}
void bubble(int arr[],int n){

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
         if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
           }
       }


}

}
int main(){
int arr[5] = {5,4,3,2,1};
bubble(arr,5);
print(arr,5);
return 0;
}
