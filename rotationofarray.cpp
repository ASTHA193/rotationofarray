#include<iostream>
using namespace std;
int main()
{
    int n,r,arr[20],fr;
    cout<<"\n no of elements to input";
    cin>>n;
    cout<<"\n array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        cout<<"\n no of rotations";
        cin>>r;
        if(r>0)
        {
            fr=(r%n);
        }
        else if(r<0)
        {
            fr=(r%n);
            fr=n-fr;
        }
        while(fr!=0)
        {
            int last_value=arr[n-1];
            for(int i=n-1;i>=0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=last_value;
            fr--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
        }
}
