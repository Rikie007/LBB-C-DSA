#include <iostream>

using namespace std;
//NEED IMPLIMENT IN THIS CODE

int main(){
    // int size;
    int arr[6] = {1,1,1,3,3,3};
    // cin >> size;
    // for(int i = 0; i < size; i++){
    //     cin >> arr[i];
    // }
     int x;
        for(int i = 0; i < 6 ; i++){
            int count = 0;
            for(int j = 0; j < 6 ; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                x = count;
            }
        x = x^count;
        
        }
      if(x != 0){
          cout << "true" << endl;
      }  
      else
      cout << "false" << endl;
      
    }
