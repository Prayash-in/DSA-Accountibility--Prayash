#include<iostream>
using namespace std;


int main(){
    int num;
cout<<"Enter the number= ";
cin>>num;

int size=(num-1),arr[size];
cout<<"Enter array elements accordingly= ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int sum_elements=0;
for(int i=0;i<size;i++){
    sum_elements+=arr[i];
}

int sum_actual=(num*(num+1))/2;
int ans=sum_actual-sum_elements;

cout<<sum_elements<<endl;
cout<<sum_actual<<endl;
cout<<"The missing number is= "<<ans;


return 0;
}