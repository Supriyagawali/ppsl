#include <iostream>
using namespace std;

  //function to swap two values using call by refrance
  void swap (int & a,int & b){
    int temp=a;
    a=b;
    b=temp;
    
  }
  int main() {
  int x,y;
  //Input two values from users
  cout<<"Enter the values of x:";
  cin>>x;
    cout << "Enter the values of y:";
    cin>>y;
    
    //Display the values before swapping 
    cout <<"/nBefore swapping:/n";
    cout<<"x="<<x<<",y="<<y<<endl;
    
    // call the swap function
    swap(x,y);
    
    //Display the values after swapping
    cout<<"/nAfter swapping:/n";
    cout<<"x="<<x<<",y="<<y<<endl;
    return 0;
}