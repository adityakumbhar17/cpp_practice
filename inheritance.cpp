#include<iostream>
#include<string>
#include<vector>
using namespace std;

//make one base class where is the all the information will be same  for other classe 
class Employee //this is base class
{
    private:
    // keep the personal data private for eg name ,id number , contact number etc 
    int eid;
    string name;
    long contact_num;
    
    //make one parameterised constroucter to take initilize the  the data wheever the object created or join any new employee
    //this we will keep in public.
    public:
    Employee(int id,string nm,long cont)
    {
        eid=id;name=nm;contact_num=cont;
        cout<<"new employee joined in comapny "<<endl; //as soon as the employee joinedmeans the object created thenthis constouctor is called ,
        
        
    }
    //to show basic info of the rmployeee
    void dispfunction()
    {
        cout<<"employee id:-"<<eid<<endl<<"Name:- "<<name;
    }
    string getname(){return name;}
    int getempid(){return eid;}
    
};

//so there are the two type of employee in the comapny which is the temporory and the fulltime but the basic info is same so we inherit that from base class 
class Fulltime:public Employee
{
    //this class is for the full time empoyee .
    //keep private salary 
    private:
    int sal;
    public:
    Fulltime(int i,string n,long con,int s):Employee( i,n,con)
    {
        sal=s;
    }
    //if  get to know the salary 
    int getsal()
    {
        return sal;
    }
};
class Parttime:public Employee
{
    private:
    int sall;
  //this is the class  for the  parttime employee . 
  public:
   Parttime(int i,string n,long con,int s):Employee(i,n,con)
    {
        sall=s;
    }
    
       int getsal()
        {
            return sall;
        }
  
};

int main()
{
    //ther are the two type of employee present which is parttime employee and full time employee
    
    //create object for the parttime and fulltime employee
    // here you can take the all input from the keyboard  or thr user
    Parttime p1(104,"Aditya",9357815620, 500);
    Fulltime p2(105,"Deven",9999999999,32);
    cout<< "the salary of"<<p1.getname()<<"is"<<p1.getsal();
}
