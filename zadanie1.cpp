#include<iostream>
#include<cstdlib>
#define klasa 5
 
using namespace std;
 
struct student{ 
  char imie[25];

  int polski, matematyka, informatyka, biologia;
};
 
int main()
{
  student A[klasa]; 
 

  for(int i=0;i<klasa;i++)
  {
    cout<<"Podaj imie studenta nr "<<i+1<<": ";
    cin>>A[i].imie;
    cout<<"Podaj ocenê z j. polskiego: ";
    cin>>A[i].polski;
    cout<<"Podaj ocenê z matematyki: ";
    cin>>A[i].matematyka;
    cout<<"Podaj ocenê z informatyki: ";
    cin>>A[i].informatyka;
    cout<<"Podaj ocenê z biologii: ";
    cin>>A[i].biologia;
  }
 
  int q;
  cout<<"Podaj liczbê zapytañ: ";
  cin>>q;
 
  int nr, przedmiot;

  while(q--)
  {
    cout<<"Podaj nr studenta [1.."<<klasa<<"]: ";
    cin>>nr;
    --nr;
    if(nr<0||nr>=klasa)
    {
      cout<<"W bazie nie ma studenta o takim numerze!"<<endl;
      continue;
    }
    cout<<"Podaj nr przedmiotu [0..3]: ";
    cin>>przedmiot;
    if(przedmiot<0||przedmiot>3)
    {
      cout<<"Poda³es niewlasciwy przedmiot!"<<endl;
      continue;
    }
 
    switch(przedmiot)
    {
      case 0:
        cout<<"Student: "<<A[nr].imie<<", ocena z j. polskiego: "
        <<A[nr].polski<<endl;
        break;
      case 1:  
        cout<<"Student: "<<A[nr].imie<<", ocena z matematyki: "
        <<A[nr].matematyka<<endl;
        break;
      case 2:
        cout<<"Student: "<<A[nr].imie<<", ocena z informatyki: "
        <<A[nr].informatyka<<endl;
        break;
      case 3:
        cout<<"Student: "<<A[nr].imie<<", ocena z biologii: "
        <<A[nr].biologia<<endl;
        break;
    }
  }
  cout<<endl;
  system("pause");
  return 0;
}
 
