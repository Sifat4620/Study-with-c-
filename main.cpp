#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
        int l=0;
        int r= n-1;
       while(l<=r){
        int mid= (l+r)/2;
        if(key==arr[mid]){
        return mid;
       }
       else if(key>arr[mid]){
            l =mid+1;
       }
       else{
        r = mid-1;
       }

   }
   return -1;

}


int main(){
cout<<"Enter array size :"<<endl;
int n;
cin>>n;
cout<<"Input number:"<<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int key;
cout<<"Enter your Search value "<<endl;
cin>>key;

cout<<binary_search(arr,n,key);
return 0;

}
