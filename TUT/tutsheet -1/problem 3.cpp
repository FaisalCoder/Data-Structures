#include<iostream>
#include<map>
using namespace std;

struct d{
    int a,b;
};

int main()
{

    multimap<int,d> m;
    multimap<int,d>::iterator it;
    int a1 = 3, b1= 4;

     d dummy;
     dummy.a = a1;
     dummy.b = b1;

    m.insert(pair<int,d>(31,dummy));

    dummy.a = 10;
    dummy.b = 20;

    m.insert(pair<int,d>(31,dummy));

    it  = m.find(31);
    it++;

    cout << (it->second).a;


    return 0;

}
