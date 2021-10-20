#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

		//formula for no of cycles in n sided polygon

        long long int cyc=n+1*(n-1)+(n-1)*(n-2);
        cout<<cyc<<endl;
    }
}
