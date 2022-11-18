#include <iostream>
using namespace std;

int find_largest_element(int arr[],int n){

        int max = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > max)
                    max = arr[i];
  
    return max;

    
}

int main()
{
    int n;
    cout<<"Enter your size or length"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter your number"<<endl;
    for(int i=0;i<n;i++ ){

           cin>>arr[i];
    }
    cout<<"largest:"<<find_largest_element(arr,n);
   
}
