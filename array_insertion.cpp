#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }

    int position,key;
    cout<<"Enter the position where you want to insert a new element:";
    cin>>position;
    cout<<"Enter the value to insert:";
    cin>>key;

    for(int i=n;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=key;
    n++;
    cout<<"Updated array:"<<"endl";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
         }

}