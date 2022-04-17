#include<bits/stdc++.h>
using namespace std;
void func(string curr,int i,int n,string str){
    if(i==n){
        cout << curr << endl;
    }
    else{
        func(curr+str[i],i+1,n,str);
        func(curr,i+1,n,str);
    }

}
int main(){
    string str;
    cin >> str;
    func("",0,str.length(),str);
}
