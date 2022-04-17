#include<bits/stdc++.h>
using namespace std;
class person{
    private:
        int weight;
    public:
        person(int w=0){
            weight=w;
        }
        void operator++(){
            ++weight;
        }
        void operator++(int){
            weight++;
        }
        void print(){
            cout << "The object is+" << weight;
        }
};
int main(){
    person obj(56);
    ++obj;
    obj++;
    obj.print();
return(0);
}