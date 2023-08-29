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

    // intvetrted full piramid 

    for(int i=0; i<n; i++){
        for(int j=0;j<=n-(i+1);i++){
            // space
            for(int space=0; space<=i; space++){
                cout<<" ";
            }
            // star
            for(int star=1; star<=n-i;star++){
                cout<<"* ";
            }    
            cout<<endl;


        }
    }

    

}