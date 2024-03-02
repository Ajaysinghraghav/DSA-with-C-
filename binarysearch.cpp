#include<iostream>
using namespace std;
int binarysearch( int arr[] ,int n,int key ){
int s=0;
int e=n-1;
while(s<=e){
int mid=s+(e-s)/2;

if(arr[mid]==key){
    return mid;
}
else if(arr[mid]>key){
       e=mid-1;

}
else{
    s=mid+1;
}
}
return -1;
}

int main(){
int n;
cout<<"Enter no of elements you want in array :"<<endl;
cin>>n;
int arr[n];
cout<<"enter the sorted Array :"<<endl;
for(int i=0;i < n;i++){
    cin>>arr[i];
}
int key;
cout<<"enter the key you want to search"<<endl;
cin>>key;
cout<<binarysearch(arr,n,key)<<endl;
return 0;
}