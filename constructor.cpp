// #include<bits/stdc++.h>
// using namespace std;
// class base{
//     public:
//         base(){
//             cout << "It is the base class";
//         }
//         base(int p){
//             cout << "It is not the base class" << p <<endl;
//         }
// };
// class derived:public base{
//     //
// };
// int main(){
//     derived();
//     // derived(8);
//     return(0);
// }
                          //Destructor

// class test{
//     private:
//         int *ptr;
//     public:
//         test(){
//             *ptr=0;
//              cout << "This is constructor";
//         }
//         ~test(){
//             delete ptr;
//             cout << "This is distructor"
//         }
// }

                            // Virtual Function
class Base{
    public:
        void show(){
            cout << "ThIS IS THE BASE CLASS";
        }
}

class Div1:public Base{
    public:
        void show(){
            cout << "This is the derive class 1";
        }
}
class Div2:public Base{
    public:
        void show(){
            cout << "This is the derive class 2";
        }

}
void 