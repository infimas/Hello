#include<iostream>
using namespace std;
int BinarySearch(int Array[],int n ,int key){
    int start = 0;
    int last = n-1;
    while(start<=last){
        int mid = (start+last)/2;
        if(Array[mid]==key){
         cout<<"the index of key is"<<mid;
         return mid;   

        }
        if(key > Array[mid]){
            start = mid +1;
        }
         if(key < Array[mid]){
            last = mid -1;
        }
        mid = (start + last)/2;
    }
    cout<<"the key is actually not present";


}
int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int Array[n];
    for(int i = 0; i<=n-1; i++){
        cin>>Array[i];
    }
    cout<<"your input array is :"<<endl;
    for(int i = 0; i<=n-1; i++){
        cout<<Array[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the value of key :"<<endl;
    cin>>key;
    int index = BinarySearch(Array,n,key);
    
   
return 0;
}