#include<bits/stdc++.h>
using namespace std;
class base{
	private:
		int data;
	public:
		base(){
			cout << "NORMAL" << endl;
		}
		base(int p){
			cout << "PARAMETER" << p << endl;
		}
		base(base &obj2){
			cout << "COPY" << endl;
		}
};
int main(){
	base obj1();
	base obj2(7);
	base obj3(obj2);
	return(0);
}