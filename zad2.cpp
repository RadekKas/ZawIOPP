
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
 
using namespace std;
 
struct student{  
  char nazwisko[25];
  double srednia;
  bool operator < (const student &x)const 
    return srednia>x.srednia;
  }
 
};
 
int main()
{

  student studenci[] = { 
    {"Kowalski",  3.12},
    {"Kasprowicz",  4.40},
    {"Nowak",    6.00},
    {"Kosak",    5.44},
    {"Nasiadka",  5.32},
    {"Nowicki",    3.44},
    {"Kanigowski",  4.00},
    {"Danusiak",  4.00},
    {"Dworznik",  4.20},
    {"Kaminski",  3.00}
  };
  cout<<"Dane studentów przed sortowaniem: "<<endl;
  for(int i=0;i<10;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko
    <<", srednia: "<<fixed<<setprecision(2)
    <<studenci[i].srednia<<endl;
 
  sort(studenci,studenci+10);
 
  cout<<endl;
  cout<<"Dane studentow po sortowaniu: "<<endl;
  for(int i=0;i<10;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko
    <<", srednia: "<<fixed<<setprecision(2)
    <<studenci[i].srednia<<endl;
  system("pause");
  return 0;
}
 
