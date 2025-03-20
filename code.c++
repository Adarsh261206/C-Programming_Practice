#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number for calculating table"<<endl;
    cin>>n;
    for(int i=0; i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
