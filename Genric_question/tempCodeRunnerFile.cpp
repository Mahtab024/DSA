#include<iostream>
using namespace std;


int fact(int n ){


if(n==1||n==0){

    return 1;
}

return n*fact(n-1);



}
int main(){
                   // Multiplay Two Number
    // int a=4;
    // int b=5;
    // int mul=a*b;
    // cout<<mul;

                    // Perimter of a Trangle
    // int a;
    // int b;
    // int c;

    // cin>>a;
    // cin>>b;
    // cin>>c;

    // int POT=a*b*c;
    // cout<< "Perimter of a Trangle" << POT<<endl;


                      // Simple interst
    // float p;
    // float r;
    // float t;
    // cin>>p;
    // cin>>r;
    // cin>>t;
    // float SI=p*r*t/100;
    // cout<<"Simple interst "<<SI<<endl;

                                    //Print counting from N to 1

    // int n;
    // cin>>n;
    // for(int i=0;i<=n-1;n--){
    //     cout<<n <<endl;

    // }

    //Find the factorial of the Number
    int n =2;

   cout<<"the factorial "<< fact(n);


      





}