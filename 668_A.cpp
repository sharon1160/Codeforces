#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
  int t, n,numero, i=0 ;
  cin>>t;
  while(i<t){
    cin>>n;
    vector<int> p1;
    vector<int> p2;
    for(int i=0;i<n;i++){
      cin>>numero;
      p1.push_back(numero);
    }
    for(int i=n-1;i>=0;i--)
      p2.push_back(p1[i]);
    for(int i:p2)
      cout<<i<<" ";
    cout<<endl;
    i++;
  }
  return 0;
}