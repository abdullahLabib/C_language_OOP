#include <iostream>
using namespace std;
class worker{
    string name;
    int sal;
public:
    worker(string n , int s){
        name = n;
        sal = s;
    }
    friend float avg(const worker&w1,const worker&w2,const worker&w3,const worker&w4,const worker&w5);
};
float avg(const worker&w1,const worker&w2,const worker&w3,const worker&w4,const worker&w5){
    int sum= w1.sal+w2.sal+w3.sal+w4.sal+w5.sal;
    float v = (float)sum/5;
    return v;
}
int main() {
    worker w1("aisel",5000),w2("abdullah",5000),
            w3("mohamed",5000),w4("ahmed",5000),w5("sara",5000);
    cout<<avg(w1,w2,w3,w4,w5);
}