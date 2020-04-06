
#include <iostream>
#include<stack>
#include<cstring>
using namespace std;
int main() 
{
    stack<string> s;
    s.push("Apple");
    s.push("Mango");
    s.push("Guava");
    s.push("Grapes");
    
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
