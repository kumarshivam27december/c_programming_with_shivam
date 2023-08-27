#include <iostream>
using namespace std;

int main() {

/*

A A A
B B B
c c c

*/

int n;
cin>>n;
char ch='A';
int row=1;
while(row<=n)
{
    int col=1;
    while(col<=n)
    {
        cout<<ch<<" ";
        
        col++;
    }
    cout<<endl;
    ch++;
    row++;
}

}

