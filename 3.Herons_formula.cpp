#include <iostream>
#include <math.h>

// 22.01.9 by tarik.

using namespace std;
int main(){

  int l1,l2,l3,u;

  cout << "Type the first length : \n";
  cin >> l1;
  cout << " \n Type the second length : \n";
  cin >> l2;
  cout << " \n Type the third length : \n";
  cin >> l3;

  u = (l1+l2+l3)/2;
  cout << " \n The value of u is : "  <<u<<endl;
  cout << "The area of triangle is : " << sqrt((u*(u-l1)*(u-l2)*(u-l3)));
}
