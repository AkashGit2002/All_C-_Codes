// #include<bits/stdc++.h>
// using namespace std;
// class constructor{
//     private:
//         int value;
//     public:
//         constructor(){
//             cout<<" It is the Deafault constructor";
//         }
//         constructor(int value,string str){
//             cout<<" It is the parameterize constructor";
//         }
//         constructor(constructor &ab){
//             cout<<" It is the copy constructor";
//         }

// };
// int main(){
//      constructor obj(67,"Akash");
//      constructor obj2(obj);


//      return(0);
// }

                    // Constructor & Inheritance
// #include<bits/stdc++.h>
// using namespace std;
// class base{
//     public:
//         base(){
//             cout << "It is the default base class";
//         }

//         base(int d){
//             cout << "It is the para base class";
//         }
// };

// class derieved : public base{
//     public:
//         derieved(){
//             cout << "It is the def derieved class";
//         }
//         derieved(int p){
//             cout << "It is the para de class";
//         }
// };

// int main(){
//     derieved();
//     derieved(7);
//     return(0);
// }
                             // Overriding Member Function
// #include<bits/stdc++.h>
// using namespace std;
// class base{
//     public:
//         base(){
//             cout << "It is the default base class";
//         }

//         Msg(int d){
//             cout << "It is the para base class";
//         }
// };

// class derieved : public base{
//     public:
//         derieved(){
//             cout << "It is the def derieved class";
//         }
//         Msg(int p){
//             cout << "It is the para de class" << p;
//             base::Msg();
//         }
// };

// int main(){
//     derieved obj;
//     obj.Msg(8);
//     return(0);
// }

                                 // Pointer
                
#include<bits/stdc++.h>
using namespace std;
int sum(int *ptr,int n){
    int s=0;
    for(int i=0;i<n;i++)
        s=s+*(ptr+i);
    return(s);
}
int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    cout << sum(arr,8);
    return(0);
}