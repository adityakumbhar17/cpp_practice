#include<iostream>
#include<string>
#include<vector>
#include<stack>// this is the new file .
using namespace std;
//this code is used for the chek the parantheses are valid or not  for that we need to check the  the whole string we chek the 
//first paranthesess  and then next  paranthesses  if the first  paranthessess  open and next is close then that is ok or 


//make class name as solution
class Solution
{
    //make one method which publically avilable 
    public:
    //we need the retun type is bool becouse we need to return only true or false !!!
    bool isvalid(string s)
    {
        //here you need to type your  which acctually return you the  answeer that  paranthessess string is valid or not 
        
             //this are the condition of which need to fulllfil 
            // Open brackets must be closed by the same type of brackets.
           // Open brackets must be closed in the correct order.
          // Every close bracket has a corresponding open bracket of the same type.
          stack<char> st;
          for(int i=0;i<s.length();i++)
          {
              char ch = s[i];
              if(ch=='('||ch=='['||ch=='{')
              {
                  st.push(s[i]);
              }
              else
              {
                  if(st.empty()){return false;}
                  
                  char top =st.top();
                  if( (ch==')'&& top=='(') || (ch=='}' && top=='{')|| (ch==']' && top=='[') )
                  {
                     st.pop();
                     
                  }
                  else
                  {
                      return false;
                  }
            
                  
                  
              }
          }
         
          return st.empty();
          
            
            
    }
};
int main()
{
    //take the string from the user,
    string s;
    //take the string from the user 
    cout<<"pass only paranthessess:- (),[],{} like this"<<endl;
    getline(cin,s);
    //now pass this string to the validate make one object of the base class and by using that objectsend  that string to validate ;
    Solution str;//this is the object which we created  by using  this  object we accsess the methods (function) from the solution class
    bool ans=str.isvalid(s);
    if(ans)
    {
        cout<<"valid parannthesess"<<endl;
        
    }
    else
    {
        cout<<"invalid parenthessess"<<endl;
    }
    
}
