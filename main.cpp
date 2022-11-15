#include <iostream>
using namespace std;

int find_largest_element(int arr[],int n){
       int store;

       for(int i =0;i<n;i++){
             if(arr[0]<arr[i])
             {
                 arr[0]=arr[i];
             }
             else{
                store =  0 + arr[0];
             }

        }

       return store;
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
    return 0;
}
