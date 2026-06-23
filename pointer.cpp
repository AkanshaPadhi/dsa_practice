#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
   int *ptr=arr;
    cout<<*arr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    int *ptr3=&arr[3];
    int *ptr5=&arr[5];
    cout<<(ptr5-ptr3)<<endl;
    cout<<(ptr3<ptr5)<<endl;
    return 0;
}