#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>

class mihir{
    public:
    T1 a ;
    T2 b;
    T3 c;
    mihir(T1 x,T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
        cout<<"the value of c is :"<<c<<endl;
    }
} ;
// int main(){
//     mihir<> h(4,6.5,'e');
//     h.display();
//     cout<<endl;
// mihir <float,char,char> g(1.4,'w','h');
// g.display();
// return 0;
// }
int main()
{
    mihir<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    mihir<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}
