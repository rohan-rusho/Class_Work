#include<iostream>
using namespace std;

int selectionSort(int arr[], int n,int i)
{
    int j,min,loc;
    
        min=arr[i];
        loc = i;
        for(j=i+1;j<=n;j++)
            if (min > arr[j])
            {
                 min=arr[j];
                loc= j;
               
            }   
    
    return loc;
    
}
int main()
{
    
    int i,j,n,temp;
    cout<<"How many: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
        for(i=1;i<=n-1;i++)
        {
               
               int loc=selectionSort(arr,n,i);
                temp=arr[loc];
                arr[loc]=arr[i];
                arr[i]=temp;

        }

        cout<<"Sorted Data: ";
     for(i=1;i<=n;i++)
     {
        cout<<arr[i]<<" ";
     }
    
    
    return 0;
}