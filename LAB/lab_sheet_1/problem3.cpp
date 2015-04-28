#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int sumofdie[13] = {0};

 for(int i =0 ; i < 36000 ; i++)
    {
    int x = rand()/100%6+1;
    int y = rand()/100%6+1;

    int sum= x+y;


    switch(sum)
    {case 2 : sumofdie[2]++; break;
    case 3 : sumofdie[3]++; break;
    case 4 : sumofdie[4]++; break;
    case 5 : sumofdie[5]++; break;
    case 6 : sumofdie[6]++; break;
    case 7 : sumofdie[7]++; break;
    case 8 : sumofdie[8]++; break;
    case 9 : sumofdie[9]++; break;
    case 10 : sumofdie[10]++; break;
    case 11 : sumofdie[11]++; break;
    case 12 : sumofdie[12]++; break;
   } }
for (int i =2 ; i  < 13; i++)
    {
        cout << "sum of die is\t" << i << "\t" << sumofdie[i] << "\tnumber of times" << endl;
    }
    
    system("pause");
    return 0;

}
