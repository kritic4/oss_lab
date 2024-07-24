#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter total numbers you want to input";
cin>>n;
int arr[n+1];
cout<<"enter the numbers";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int avg;
int sum=0;
for(int i=0; i<n; i++){
    sum=arr[i]+sum;
}

avg=sum/n;
cout<<"avg ="<<avg;

return 0;

}
