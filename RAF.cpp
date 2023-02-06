#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];

    int j = 0;
    cin>>num[j];
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        num[i+1] = num[i] + 1;
        if(mx < num[i])
        {
            mx = num[i];
        }
    }
    cout<<"Maximum is: "<<mx<<endl;
//    for(int i = 0; i < n; i++)
//    {
//        cout<<num[i]<<endl;
//    }

    return 0;
}
