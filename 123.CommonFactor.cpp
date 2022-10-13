//Program to find common factors of a numbers

#include<bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b) {
        int d;
        int count=0;
        (a<b)?d=a:d=b;

        for(int i=1;i<=d;i++){
            if(a%i==0 && b%i==0) count++;
            else continue;
        }

        return count;
}


int main(){
  
int l1,l2;
  
cin>>l1>>>l2;
  
cout<<commonFactors(l1,l2)<<endl;

  return 0;
}
