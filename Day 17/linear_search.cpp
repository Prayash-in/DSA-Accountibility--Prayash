#include<iostream>
using namespace std;


int main(){
int arr[5],ele,index,i;
cout<<"Enter 5 array elements= ";
for(int i=0;i< 5;i++){
    cin>>arr[i];
}

cout<<"Enter element to search= ";
cin>>ele;

for(i =0;i< 5; i++){
    if(arr[i]==ele){
        index = i;
        break;
    }
    return -1;
}

cout<<ele<<" is in index no.= "<<index;

    return 0;
}