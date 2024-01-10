#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int number[size];

    for(int i = 0; i < size ; i++)
    {
      cin >> number[i];  
    }

    int maxi = -88888888;

    for(int i = 0; i < size ; i++)
    {
        maxi = max(maxi,number[i]);
    }

    cout << maxi << endl;
}
