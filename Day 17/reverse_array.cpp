#include<iostream>
using namespace std;

int main(){
int arr[5];
cout<<"Enter 5 array elements= ";
for(int i=0;i< 5;i++){
    cin>>arr[i];
}

// int i=4,j=0;
// while (i>=0)
// {
//     rev_arr[j]=arr[i];

//     j++;
//     i--;
    
// }

// i=0,j=0;
// while(i<5){
//     arr[i]=rev_arr[j];
//     i++;
//     j++;
// }



// ##Another Method##
int i=0,j=4,temp;
while(i<j){
    // temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
    swap(arr[i],arr[j]);
    i++;
    j--;
}


for(i=0;i<5;i++){
    cout<<arr[i];
}

    return 0;
}