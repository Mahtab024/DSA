#include<iostream>
using namespace std;
int main(){

    int rowcont;
    int colcont;

    cin>>rowcont;
    cin>>colcont;

    for(int row=0;row<rowcont;row++){
        if(row==0||row==rowcont-1){
            for(int col=0; col<colcont;col++){
                cout<<"*";
            }

        }
        
        else{
            cout<<"*";
            for(int row=0;row<colcont-2;row++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}