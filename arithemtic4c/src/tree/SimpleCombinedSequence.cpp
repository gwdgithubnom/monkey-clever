#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n,i;
 cin>>n;
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 do{
  for(i = 0; i < n;i++)
    cout<<a[i];
  cout<<endl;
 }while(next_permutation(a,a+n));
}
 return 0;
}
