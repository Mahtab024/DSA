#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //full piramid 
    for(int row=0;row<n ; row++){
        //space
        for (int col=0; col<=n-(row+1);col++){
            cout<<" ";
        }
        // star
        for(int col= 1;col<=row+1;col++){
            cout<<"* ";
        }
         cout<<endl;

        
    }
}