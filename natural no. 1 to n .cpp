#include <iostream>
using namespace std;

int main() 
{
  int n,sum=0;
  
  //Input the values of n from the user
  cout<<"Enter a positive integers:";
  cin>>n;
  
  //Calculate the sum of natural numbers from 1 to n 
  for (int i=1; i<=n; i++){
    sum+=i;
    }
    
    //Display the result
    cout<<"The sum of natural numbers from 1 to"<< n << "is:"<< sum<< endl;    cout << "Hello, World!";
    return 0;
}