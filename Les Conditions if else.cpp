
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){
    int x ;

 cout<<"entrer un nombre ";
 cin>> x; 

 if (x<0)
 {
  cout<<"le nombre est negatif"<<endl;
 }
else if(x==0)
{
    cout<<"le nombre est nul";
}
else {
    cout<<"le nombre est positif ";
}

return 0; 

}