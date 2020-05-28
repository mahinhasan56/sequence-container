#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    int a []= {1,5,8,9,3,5,6,4};
    deque <int> dq(a,a+8);
    dq.pop_front();

    //output 1,2,3,4

}
