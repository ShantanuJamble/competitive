// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include<stdio.h>
using namespace std;
int main () {
  freopen("out.txt","w",stdout);
  char myints[] = {'a','b','c','d','e'};
  sort (myints,myints+5);
  int i=1;
  do {
    cout <<i++<<" "<< myints[0] << ' ' << myints[1] << ' ' << myints[2] <<' '<<myints[3]<<' '<<myints[4]<<'\n';
  } while ( next_permutation(myints,myints+5) );

  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] <<' '<<myints[3]<<' '<<myints[4] <<'\n';

  return 0;
}

	



