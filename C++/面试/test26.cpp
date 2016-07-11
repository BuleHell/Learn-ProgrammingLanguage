#include <iostream>

using namespace std;

int cow(int cows)
{
	 int one=1;
	 int two=2;
	 int three=3;
	 int four=4;
 int i=0;
 int sum=0;
 for(i = 4; i < cows + 1; i++)
 {
  four = one + three;
  one = two;
  two = three;
  three = four;
 }
 sum = four;
 return sum;
}
int main()
{
	 int cows;
	 while(cin >> cows&&cows!=0)
	 {
		cin >> cows;
		cout<<cow(cows)<<endl;
	 }
	 return 0;
}