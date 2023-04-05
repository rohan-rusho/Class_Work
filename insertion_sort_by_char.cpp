#include<iostream>
using namespace std;
void insert(string str)
{
    int i,j;
    char temp;
     str[0]=10;
     int l = str.length()-1;
    for(i=2;i<=l;i++)
    {
        temp=str[i];
        j=i-1;
        while(temp<str[j])
            {
                str[j+1]=str[j];
                j=j-1;
            }
            str[j+1]=temp;
    }
    cout<<"Sorted Data: ";
    for(i=1;i<=l;i++){
    cout<<str[i]<<" ";
    }

}


int main ()
{
    int n,i;
    string str;
    cout<<"Enter Word :";
    cin>>str;
   insert(str);
  
return 0;
}