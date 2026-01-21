#include<iostream>
using namespace std;

int main(){
int arr[5]={5,2,3,11,8};
int min=arr[0];

for(int i=1;i<5;i++){
        if(arr[i]<min){
        min=arr[i];
    }   
}

cout<<"The minimum element is= "<<min;

    return 0;
}

// int main(){
// int arr[5]={5,2,3,11,8};
// int min = INT_MAX;

// for(int i=0;i<5;i++){
//         if(arr[i]<INT_MAX){
//         min=arr[i];
//     }   
// }

// cout<<"The minimum element is= "<<min;

//     return 0;
// }