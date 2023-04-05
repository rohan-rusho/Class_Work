#include<iostream>
#include<string.h>
using namespace std;

int selectionSort(string str,int i)
{
    int j,min,loc;
      int l = str.length()-1;
        min=str[i];
        loc = i;
        for(j=i+1;j<=l;j++)
            if (min > str[j])
            {
                min=str[j];
                loc= j;
               
            }   
    
    return loc;
    
}
int main()
{
    
    int i,j;
    char temp;
     string str;
    int l = str.length()-1;
  
    cout<<"Enter Word: ";
      
        cin>>str;
      
        for(i=1;i<=l-1;i++)
        {
               
               int loc=selectionSort(str,i);
                temp=str[loc];
                str[loc]=str[i];
                str[i]=temp;

        }

        cout<<"Sorted Data: ";
        
     for(i=1;i<=l-1;i++)
        
        cout<<str;
     
    
    
    return 0;
}