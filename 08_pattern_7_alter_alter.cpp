#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            int k=i;
            cout<<k;
             k++;
            j++;
        }
       
        cout<<endl;
        i++;
    }
}