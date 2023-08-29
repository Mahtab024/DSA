#include<iostream>
using namespace std;
int main(){
    // intvetrted full piramid 
    int n;
    cin>>n;
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