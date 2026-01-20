#include<iostream>
using namespace std;

int main(){
int arr[5];
cout<<"Enter 5 array elements= ";
for(int i=0;i< 5;i++){
    cin>>arr[i];
}

int max=0, sec_max=0;
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}


int i=0;
while(arr[i]!=max){
    if(arr[i]>sec_max){
        sec_max=arr[i];
    }
    i++;
}

cout<<max<<endl;
cout<<sec_max;

return 0;
}