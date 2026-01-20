#include<iostream>
using namespace std;

int main()
{
 int arr[5]={5,2,3,11,8};
 int max=0; 

 for (int i = 0; i < 5; i++)
 {
    if(arr[i]>max){
        max=arr[i];
    }
 }

 cout<<"The maximum value is= "<<max;
 return 0;
} 


