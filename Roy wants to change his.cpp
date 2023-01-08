#include <iostream>
using namespace std;
int main()
{
 int l,w,h;
 cin>>l;
 cin>>w>>h;
 if(w<l || h<l)
 cout<<"UPLOAD ANOTHER";
 else if(w==h)
 cout<<"ACCEPTED";
 else
 cout<<"CROP IT";
 cout<<endl;
 return 0;
}
