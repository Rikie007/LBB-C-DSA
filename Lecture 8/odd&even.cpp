#include<iostream>
using namespace std;
// 1 -> even
bool oddeven(int a )
{
    if (a&1){
        //odd number' & is true always;
        return 0;
    }
    else {
        return 1;
}
}
int main(){
   
   int x,ans;
   cin >> x;
   ans = oddeven(x);
   cout << ans << endl;
}
