#include<iostream>
using namespace std;
int min(int arr[],int n)
{
    int m,j,l;
    for(int i=0;i<n;i++)
    {
        
        l=i;
        for(j=i+1;j<=n;j++)
        {
            if(arr[l]>arr[j])
            {
                m=arr[j];
                l=j;
            }
        }
    }
        return l;

}


int main ()
{
int i,n,loc,temp;
cout<<"How many: ";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}

 for(i=0;i<n;i++)
 {
    loc= min (arr,n);
    temp=arr[loc];
    arr[loc]=arr[i];
    arr[i]=temp;
 }

for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}