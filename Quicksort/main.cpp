#include <iostream>
#include "quicksort.h"

using namespace std;
using namespace qks;
int main() {
  int a[50],n;

  cout<<"Cuantos elemenos desea ingresar: ";
  cin>>n;
  for(int i=0;i<n;i++)
    {
        cout<<"Elemento"<< i+1 <<": ";
        cin>>a[i];
    }

  ordenar(a,0,n-1);
  for (int i=0;i<n;i++)
  {
    cout<<"|"<<a[i]<<"| ";
  }
  return 0;

}
