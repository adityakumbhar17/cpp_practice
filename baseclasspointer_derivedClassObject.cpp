#include<iostream>
//#include<sting>
using namespace std;
//thi code is  for understand the concept of the base class pointer and derived class object 
class Papa  //this is the base class 
{
    public:
    Papa()
    {
       cout<<"janm zala papa cha "<<endl;  //he call honar jevha papa class cha object aapn tyar krnar.
    }
    public:
    //creating the function which same in the both the classe
    void property()
    {
        cout<<"this is the pidhijaatproperty from ajja :)"<<endl ;
    }
};

class Porga :public Papa
{
  public:
  Porga()
  {
      cout<<"congratulation porga zala :)"<<endl; // ha constructer call honar jenvha porga honar 
  }
  void property()
  {
      cout<<"hi porgyachi svtachi kamvaleli property ahe + pidhijaat property suddha bhetli ahe :)"<<endl;
  }
};

int main()
{
    
    //ata aapn base class pointer ghevu ani tyat   derived class cha  object store  krnar ahot 
    Papa *point_to =new Porga();//hyatikani new keword cha use karun  dynamically  object create hotoy .
    point_to->property();    //hyathikani porgyachi property show  vhayla pahije pn show hotya papa chi property .
    
    //aapn derived class mdhye function override kel ahe  tr te  te function call krnysathi aplyala   base class(papa)
    //hya class mdhlya function la vartiual krava lagel.tenvha derived class mdhil function call hoil. 
}
