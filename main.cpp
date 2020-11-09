#include <iostream>
#include <bitset>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int a, b;

    cin>>a>>b;

    cout<<"a = "<<a<<" ("<<bitset<8>(a).to_string()<<")"<<endl;

    cout<<"b = "<<b<<" ("<<bitset<8>(b).to_string()<<")"<<endl;

    cout<<"a|b = "<<bitset<8>(a|b).to_string()<<endl;

    cout<<"a&b = "<<bitset<8>(a&b).to_string()<<endl;

    cout<<"a^b = "<<bitset<8>(a^b).to_string()<<endl;

    cout<<"~a = "<<bitset<8>(~a).to_string()<<endl;

    cout<<"~b = "<<bitset<8>(~b).to_string()<<endl;

    cout<<"a <<= 1 "<<bitset<8>(a<<=1).to_string()<<endl;

    cout<<"b >>= 1 "<<bitset<8>(b>>=1).to_string()<<endl;
    
    return 0;
}
