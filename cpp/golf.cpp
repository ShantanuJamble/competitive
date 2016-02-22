#include <iostream>
#include<string>
using namespace std;

int main()

{
	char ch[2];
  	for(int i=1;i<=1000;i++)
  		cout<<((i%3==0)?((i%5==0)?"FizzBuzz":"Fizz"):(i%5==0)?"Buzz":(ch[0]=i&&ch[1]='\0')?ch:"1")<<endl;
  	return 0;
}

