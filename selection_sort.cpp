#include <iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void select(int arr[],int n)
{
    
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){

        if(arr[j] < arr[i] )
            swap(arr[j], arr[i]);

    }
}



}
int main()
{
    int arr[18] = {1,2,3,1,2,5,6,7,88,9,9,0,110,11,20,81,-1,89};
    select(arr,18);
    print(arr,18);
    return 0;
}