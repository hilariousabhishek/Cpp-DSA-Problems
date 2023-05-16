// Time complexity--
// n(n-1)/2 viz O(n^2)

// Space Complexity --
// O(1)

#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,2,1,5,4};


    for (int i = 0; i <4; i++)
    {
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i]){              
                swap(arr[j],arr[i]);
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 

    
return 0;
}