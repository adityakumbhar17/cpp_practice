#include<iostream>
#include<string>
using  namespace std;
//hit aapn 3 class tyar krnar ahot  jyat ki 3 function astil ani te 3  function same cha stil pn ekmekala override krtil

//pahila class base class
class Ajja
{
    //ha base class ahe hya class pasun bakeche  sagle class  banle ahet mhnje derived zale ahet mhnun tya sarv classla aapn derived class ase mhnto 
    public:
    Ajja()
    {
        //ha constroucter ahe jenvha  hya class cha kinva hya class chya derived class cha  Ekhada object tyar hoil tenvha ha constroucter call hoil
        
        cout<<"Ajyacha janm zala"<<endl;
    }
    //he same function bakichya  class mdhye suddha asnar 
    virtual void Property()=0;  //this is the pure virtual function it helps to achive the polimorphism....
    
};
class Porga :public Ajja // hya Thikani aapn  inheritace vaprla  ahe mhnje Porgyala ajyachi sagli property milnar
{
    //constroucter of the Porga class 
    public:
    Porga()
    {
        //porga  janmlyavr tyachi nond honar reshan card mdhye 
        cout<<"Ajyala porga zala:)"<<endl;
    }
    void Property()  //he same funtion  base class mdhye pn ahe pn te aapn virtual kel ahe .karn he override krnyasathi .
    {
        cout<< "Ajyachi property ani techi svtachi property porala milnar :)"<<endl;
        
    }
};

class Natu :public Ajja //ha suddha class base class pasun inherit zala 
{
    public:
  Natu()
  {
      cout<<"congratulation Natu zala :)"; 
  }
  
  void Property()  //he same funtion  base class mdhye pn ahe pn te aapn virtual kel ahe .karn he override krnyasathi .
    {
        cout<< "Ajyachi property ani papachi  property ani techi svtachi property natvala  milnar :)"<<endl;
        
    }
  
};
int main()
{
    //ata aplyakde 3 class ahet ani  tya 3 class amdhye 3 same functio ahet  ti jenvha override honar tenvha polimorphisum achive  honar 
    //ek pointer tyar kru  base clas  pointer 
    Ajja*point_to =new Porga();
    point_to->Property();
    point_to=new Natu();
    point_to->Property();
    
}
