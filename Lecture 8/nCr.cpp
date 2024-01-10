#include<iostream>
using namespace std;

int fact(int a){
    int factorial = 1;
    for(int i = 1; i <= a; i++){
        factorial = factorial * i;
    }
    return factorial;
}

int nCr(int n, int r){
    int num = fact(n);
    int denominater = fact(r) * fact(n-r);

    int NCR = num / denominater;
    return NCR;
}

int main(){
    
    int n,r;
    // cout << "enter x" << endl;
    // cin >> x;
    cout << "enter n" << endl;
    cin >> n;
    cout << "enter r" << endl;
    cin >> r;

    int ans = nCr(n,r);

    cout << "the ans is "<< ans << endl;

    return 0;

}
