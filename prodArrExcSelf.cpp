#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ans[4];
    int array[4]={1,2,3,4};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++){
      int prod=1;  
        for(int j=0;j<n;j++){
            if(j!=i){
             prod*=array[j];
            }
        }
        ans[i]=prod;
    }
for(int i=0;i<4;i++){
    cout<<ans[i]<<" ";
}
return 0;
}