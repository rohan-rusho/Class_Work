#include<iostream>
using namespace std;
int main ()
{
    int flag=0,pos;
    char  n[9];
    char arr[50]="rohan";
    cout<<"Enter the letter: ";
    cin>>n;
    for(int i=0;i<5;i++)
    {
        if (n[0]==arr[i])
        {
            flag++;
            pos=i;
            break;
        }

    }
    if(flag!=0)
    {
        cout<<"Match Found in "<< pos <<" Posiotion"<<endl;
    }
    else
    {
        cout<<"Not Match Found"<<endl;
    }

     return 0;
}
