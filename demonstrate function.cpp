#include<iostream>
using namespace std;

//Function to add two integers
int add(int a,int b){
  return a+b;
}
//overloaded function to add two double values
double add(double a,double b){
  return a+b;
}
int main(){
  //using the add function with integers arguments
  int intResult = add(10,20);
  cout << "sum of integers 10 & 20:"<< intResult << endl;
  
  //using the add function with double arguments
  double doubleResult = add(5,5,7,8);
  cout<<"sum of doubles 5,5 & 7,8:"<<doubleResult<<endl;
  return 0;
}