#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;

 
int main ()
{
  
int a,b,c,d,e,f;
  
a=500; 
  do
    
    {
        cout<<"::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<":::::::::: welcome to gamling ::::::::::"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                                        "<<endl;
      
cout << "You have = " << a <<" for gambling"<< endl;
      
cout << "Choose either 1 or 0 = ";
      
cin >> c;

cout << "How mucch you want to bet = ";

cin>>b;

 if (b > a)

{
  cout << "You Enter Wrong Number" << endl;
  cout << "You Lost Your All Cash" << endl;
  return 0;
}

 if (c == 1)
{
cout << "LOSE" << endl;
d = a-b;
cout << "Your remainig balance = " << d << endl;
a = d;
cout<<"Press 0 To Continue The Game"<<endl;
cin>>f;
}
      
else if (c == 0)
	
{
cout << "WON" << endl;
e = 2 * b + a;
a = e ;
cout << "Now You Have = " <<e<< endl;
cout<<"Press 0 To Continue The Game"<<endl;
cin>>f;
}
      
else
	
	{
cout << "You Enter Wrong Number" << endl;
cout << "You Lost All Your Cash" << endl;
return 0;
  }     
}
while (f==0);
while(b>=a || d==a);
return 0;

}
