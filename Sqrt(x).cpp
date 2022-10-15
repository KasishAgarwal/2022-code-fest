#include <iostream>
#include <cmath>
using namespace std;
int sqrt(int x){
 int n= pow(x,2);
  return n;
}
  

int main() {
  cout << "Enter x : ";
  int x;
  cin>>x;
  // print the square root of x
  cout << sqrt(x);

  return 0;
}
