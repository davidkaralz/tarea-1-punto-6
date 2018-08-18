#include <iostream>
#include <cstring>

using namespace std;
int main()
{
     
     string S1, S2, S3, Primero;
     int a,b,c;
     cout<<"Ingrese 3 strings:"<<endl;
     cin>>S1;
     cin>>S2;
     cin>>S3;
     a=S1[0];
     b=S2[0];
     c=S3[0];
     
     Primero =(a<=b)? ((a<=c)? S1:S3):((b<=c)? S2:S3);
     
     cout<<"El primer string en orden alfabetico es: "<<Primero;
     
     return 0;
}