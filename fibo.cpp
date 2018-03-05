#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1=-1,n2=1,n3,n,i;
    cout<<"Enter the number  ";
    cin>>n;
    for(i=0;i<n;i++)
      {
          n3=n1+n2;
          cout<<n3<<"\t";
          n1=n2;
          n2=n3;
      }
    return 0;
}
