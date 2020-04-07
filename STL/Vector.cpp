
VECTOR STL

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int x, int y)
{
    return x>y;
}

int main() 
{
    //C++ STL
    vector<int> A={ 11,2,3,14};
    cout<<A[1]<<endl;

    sort(A.begin(),A.end()); //perfrom sorting in O(nlogn) time
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    //binary search
    bool present =binary_search(A.begin(),A.end(),3); //true
    bool npresent=binary_search(A.begin(),A.end(),5); //false
    cout<<present<<" "<<npresent<<endl;

    A.push_back(100); //add element 100 at last index of vector after increasing the size 
    cout<<A.front()<<" "<<A.back()<<endl; //gives the first and last index element

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    A.push_back(144);
    //2,3,11,14,100,100,100,100,123,144

    vector<int>::iterator it=lower_bound(A.begin(),A.end(),100); //gives first value >=100
    vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100); //gives first value >100
    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl; //4 - difference between index of it2 and it --> it also gives the count i.e number of times 100 occurs by just calculating upperbound and lowerbound

    sort(A.begin(),A.end(),compare); // prints elements in descending order
    vector<int>::iterator it3;  //another way of printing vector using iterator
    for(it3=A.begin();it3!=A.end();it3++)
    {
        cout<<*it3<<" ";
    }
    cout<<endl;

    cout<<A.size()<<endl; //Return the current size of the vector i.e the number of elements present in it
    cout<<A.max_size()<<endl; //Returns the maximum number of elements that the vector can hold.- it depends upon system storage
    cout<<A.capacity()<<endl; //Returns the size of the storage space currently allocated to the vector expressed as number of elements.

    A.reserve(30); // Requests that the vector capacity be at least enough to contain n elements.
    A.resize(20); //Resizes the container so that it contains ‘n’ elements.
    cout<<A.empty(); //Returns whether the container is empty - returns 0 if not empty else return 1 if empty

    A.pop_back() //  It is used to pop or remove elements from a vector from the back
    //A.clear() //It is used to remove all the elements of the vector container

    vector<int> v1={1,2};
    vector<int> v2={3,4};
    v1.swap(v2); //It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    v1.erase(v1.begin()); //It is used to remove elements from a container from the specified position or range.
    v2.insert(v.begin(), 5); // It inserts new elements before the element at the specified position
}
