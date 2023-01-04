#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
// void printstack (stack<int>s){
//     if(s.empty()){
//         break;
//     }
//     int x=s.top();
//     s.pop();
//     cout<<x;
//     printstack(s);  
// }
int main(){
    int flag=0;
    stack<int> mystack;
    char arr[] ="hello world";
    for(int i=0;i<=strlen(arr);i++){
        if(arr[i]=='\0'){
            break;
        }
        mystack.push(arr[i]);
    }
 
   for(int i=0;i<strlen(arr);i++){
    arr[i]=mystack.top();
    mystack.pop();
   }
 cout<<arr;
}
