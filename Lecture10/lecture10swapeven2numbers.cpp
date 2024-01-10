#include<iostream>
using namespace std;

void printarrey(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" "; 
    }
    cout << endl;
}

void swap(int arr[], int size){
/*  my logic
//     if(size%2 == 0){
//     for(int i = 0; i < size; i+=2){
//         swap(arr[i],arr[i+1]);
//     }
// }   
//     else{
//         for(int i = 0; i < size; i+=2 ){
//             if(i == size-1){
//                 return;
//             }
//             swap(arr[i],arr[i+1]);
//         }
//     }
    */
    
   /* lbb logic
    for(int i = 0; i < size ; i+=2){
    if(i+1 < size){
         swap(arr[i],arr[i+1]);
    }
    }
    */
}

int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};

    swap(even,8);
    swap(odd,5);

    printarrey(even,8);
    printarrey(odd,5);
}