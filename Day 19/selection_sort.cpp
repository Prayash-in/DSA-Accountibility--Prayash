#include<iostream>
using namespace std;

int main(){
    int n;
cout<<"Enter the size of the array= ";
cin>>n;
int arr[n];
cout<<"Enter array elements= "<<endl;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i++){
int index =i;
    for(int j=i+1;j<n;j++ ){
        if(arr[j]<arr[index]){
            index=j;
        }
    }
        swap(arr[index],arr[i]);
}

cout<<"Selection sort: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}


    return 0;
}