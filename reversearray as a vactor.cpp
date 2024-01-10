#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> vac){
    int loop = vac.size()/2;

    for(int i = 0,j = vac.size() - 1; i <= loop ;i++,j--){
        swap(vac[i],vac[j]);
    }
    for(int i = 0; i < vac.size(); i++){
        cout << vac[i] << " ";
    }
    cout << endl;
}

void print(vector<int> vac){
    for(int i = 0; i < vac.size(); i++){
        cout << vac[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }   
    cout << endl;
    reverse(v);
    print(v);
    return 0;
}