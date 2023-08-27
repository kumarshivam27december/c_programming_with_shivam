#include <iostream>
using namespace std;
int main()
{
    /*
    321
    321
    321
    
    */
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=n;
        int j=1;
        while(j<=n)
        {
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
    }

}