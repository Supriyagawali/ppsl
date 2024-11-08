#include <iostream>
#include <fstream>
using namespace std;

struct Employee{
    char name[50];
    int id; 
    float salary;
};
void WriteToFile(const Employee employee)
{
    ofstream outfile("employee.dat",ios::binary);
    
    
if(! outfile){
    cerr<<"Error:could not open the file for writing!"<<endl;
    return;
}
outfile.write(reinterpret_cast <const char*>(&employee),sizeof(employee));
outfile.close();

cout<<"Employee data written to binary file successfully!"<<endl;
}
void readfromfile(){
    Employee employee;
    
    ifstream infile("employee.dat",ios::binary);
    if(!infile){
        cerr<<"Error:could not open the file for reading!"<<endl;
        return;
    }
    if( infile){
        cout<<"/nEmployee data & read from binary file:"<<endl;
        cout<<"Name:"<<employee.name<<endl;
        cout<<"ID:"<<employee.id<<endl;
        cout<<"salary:"<<employee.salary<<endl;
    }
    else{
        cerr<<"Error:could not read data from the binary file!"<<endl;
    }
    infile.close();}
    int main(){
        Employee employee;
        
        cout<<"Enter employee details:/n";
        cout<<"Name:";
        cin.ignore();
        cin.getline(employee.name,50);
        cout<<"ID:";
        cin>>employee.id;
        cout<<"salary:";
        cin>>employee.salary;
        
        WriteTofile(employee);
        
        readfromfile();
        
 return 0;
    }