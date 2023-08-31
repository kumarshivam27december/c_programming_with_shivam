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
    int arr[5] = {5,4,3,2,1};
    select(arr,5);
    print(arr,5);
    return 0;
}