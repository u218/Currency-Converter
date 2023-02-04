/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class currency
{ float a;
float b;
public:
float curr();
};
float currency::curr()
{
char currency1;
char currun2;
bool a=true;
while(a)
{
 nxtlevel:
cout<<"enter currency1 name "<<endl;
cin>>currency1;

cout<<"enter currency1 value "<<endl;
cin>>a;


switch(currency1)

     
     
{     case 'a':
       level1:
      cout<<"please enter currency 2"<<endl;
      cin>>currun2;
      if(currun2=='a'||currun2=='A')
      {   cout<<"the dollar in to dollar is:  "<<a*1<<endl;
      }
      else if (currun2=='b'||currun2=='B')
      {   cout<<"the dollar in euros are:  "<<a*0.91<<endl;
      }
      else if(currun2=='c'||currun2=='C')
      {   cout<<"the dollars into pounds are:"<<" "<<a*0.75<<endl;
      }
      else if (currun2=='d'||currun2=='D')
      {  cout<<"the dollars into rupees is:   "<<a*178.01<<endl;
      
      }
      else 
      {  goto level1; }
      break;
      case 'b':
       level2:
      cout<<"please enter currency 2"<<endl;
      cin>>currun2;
     
      if(currun2=='a'||currun2=='A')
      {   cout<<"the euros in to dollar is:  "<<a*1.09<<endl;
      }
      else if (currun2=='b'||currun2=='B')
      {   cout<<"the euroes in euros are:  "<<a*1<<endl;
      }
      else if(currun2=='c'||currun2=='C')
      {   cout<<"the euros into pounds are:"<<" "<<a*0.82<<endl;
      }
      else if (currun2=='d'||currun2=='D')
      {  cout<<"the euros into rupees is:   "<<a*194.47863<<endl;
      
      }
      else 
      {  goto level2; }
      break;
      case 'c':
       
      cout<<"please enter currency 2"<<endl;
      cin>>currun2;
     level3:
      if(currun2=='a'||currun2=='A')
      {   cout<<"the pounds in to dollar is:  "<<a*1.3228603<<endl;
      }
      else if (currun2=='b'||currun2=='B')
      {   cout<<"the pounds in euros are:  "<<a*1.2094673<<endl;
      }
      else if(currun2=='c'||currun2=='C')
      {   cout<<"the pounds into pounds are:"<<" "<<a*1<<endl;
      }
      else if (currun2=='d'||currun2=='D')
      {  cout<<"the euros into rupees is:   "<<a*235.21<<endl;
      
      }
      else 
      {  goto level3; }
      break;
       case 'd':
     level4:
      cout<<"please enter currency 2"<<endl;
      cin>>currun2;
       
      if(currun2=='a'||currun2=='A')
      {   cout<<"the pakistani in to dollar is:  "<<a*0.0056240345 <<endl;
      }
      else if (currun2=='b'||currun2=='B')
      {   cout<<"the rupees into  in euros are:  "<<a*0.005141953<<endl;
      }
      else if(currun2=='c'||currun2=='C')
      {   cout<<"the pounds into pounds are:"<<" "<<a*0.0042514198<<endl;
      }
      else if (currun2=='d'||currun2=='D')
      {  cout<<"the rupees into rupees is:   "<<a*1<<endl;
      
      }
      else 
      {  goto level4; }
      break;
      char q;
      
          
      }
}
      
      
       return currun2;
}



int main()
{
 cout<<"--------------WELCOME-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
 cout<<"there are four converting values "<<endl;
 cout<<"a,b,c,d are for dol,eur,pounds,rupees"<<endl;
 cout<<"please press a=$,b=EURO,C==£,D==RUPEES:  "<<endl;
currency man;
man.curr();
 

    return 0;
} 


