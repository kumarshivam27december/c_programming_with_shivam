#include <iostream>
using namespace std;

int main() {

/*

1
2 1
3 2 1


*/

int n;
cin>>n;
int row=1;
while(row<=n)
{
    int col=1;
    int k=row;
    while(col<=row)
    {
        cout<<k<<" ";
        k--;
        col++;
    }
    cout<<endl;
    row++;
}

}

