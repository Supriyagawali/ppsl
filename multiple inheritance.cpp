#include <iostream>
using namespace std;
class vehicle {
  public:
  void vehicle(){
    cout<<"I am a vehicle"<<endl;
  }
};
class fourwheeler:public vehicle
{
  public:
  void fourwheeler()
  {
    cout<<"I have fourwheeler"<<endl;
  }
};
class car:public fourwheeler{
  public:
  void car(){
    cout<<"I am a car"<<endl;
  }
};
int main(){
  
  Car myCar;
  
  mycar.Car();
  mycar.Fourwheeler();
  mycar.Vehicle();
   return 0;
}



#include <iostream>
using namespace std;
//Base class vehicle
class vehicle {
  public:
  void vehicle(){
    cout<<"I am a vehicle"<<endl;
  }
};

//Derived class fourwheeler
class fourwheeler:public vehicle
{
  public:
  void fourwheeler()
  {
    cout<<"I have fourwheeler"<<endl;
  }
};
class car:public fourwheeler{
  public:
  void car(){
    cout<<"I am a car"<<endl;
  }
};
int main(){
  //create an object of class car 
  Car myCar;
  
  //call methods of car , fourwheeler & vehicle throgh car object
  mycar.Car();
  mycar.Fourwheeler();
  mycar.Vehicle();
   return 0;
}