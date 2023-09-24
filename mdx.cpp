#include <iostream>
 
using namespace std;
 
bool checkDoiXung(int n, int A[]){
    for(int i = 0;i<n/2;i++){
        if(A[i] != A[n-i-1]) return false; 
    }
    return true; 
}
int main()
{
    int n;
   
    cin>>n;
    int A[n];
     
    int i;
    for(i = 0; i<n;i++){
        
        cin>>A[i];
    }
     
   
    for(i = 0; i<n;i++){
        cout<<A[i]<<"  ";
    }
     
    if(checkDoiXung(n, A)) cout<<"\n\n =>Mang vua nhap doi xung nhau";
    else cout<<"\n\n =>Mang vua nhap khong doi xung nhau";
}