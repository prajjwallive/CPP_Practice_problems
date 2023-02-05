// program to add two different data types
#include <iostream>
using namespace std;
int main(){
    int a;
    cout <<"Enter the data: "<<endl;
    cin >> a;
    try{
        if(a==1){
            throw(a);
        }
        else if(a==2){
            throw('a');
        }
        else{
            cout <<"data accepted!"<<endl;
        }

    }
    catch(char x){
        cout <<"You cannt enter two"<<endl;
    }
    catch(int a){
        cout <<"You cannt enter 1"<<endl;
    }
    return 0;
}