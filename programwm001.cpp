#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void napelnijTablice(int T[], int il){
 for(int i=0;i<il;i++)
  T[i]=rand()%51;
}
void wyswietlTablice(int T[], int il){
 for(int i=0;i<il;i++)
  cout<<T[i]<<" ";
}
void podzielPodzbiory(int T[], int il){
 for(int i=0;i<il-1;i=i+2)
  if(T[i]>T[i+1]){
   int temp=T[i];
   T[i]=T[i+1];
   T[i+1]=temp;
  }
}

int main(){
 srand(time(NULL));
 const int n=10;
 int tab[n];
 napelnijTablice(tab,n);
 wyswietlTablice(tab,n);
 podzielPodzbiory(tab,n);
 cout<<endl;
 int min=tab[0];
 int max=tab[1];
 for(int i=2;i<n-1;i=i+2)
  if(tab[i]<min)
   min=tab[i];
  else
   if(tab[i+1]>max)
    max=tab[i+1];
 if(n%2!=0)
  if(tab[n-1]<min)
   min=tab[n-1];
  else
   if(tab[n-1]>max)
    max=tab[n-1];
 cout<<"najmniejsza wartoœæ w tablicy to:"<<min<<endl;
 cout<<"najwiêksza wartoœæ w tablicy to:"<<max<<endl;
 return 0;
}

