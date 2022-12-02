#include<iostream>
#include<array>
#include<tuple>

using namespace std;

int main(){

    array<int,6> arr={1,2,3,4,5,6};

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

   cout<<endl<<arr.at(3)<<" arr.at(3) ";

   cout<<endl<< get<2>(arr) <<"  get<2>(arr)  ";
   cout<<endl<< arr.front() <<" arr.front() ";
   cout<<endl<< arr.back() <<" arr.back() ";
   cout<<endl<< arr.size() <<" arr.size() ";
   cout<<endl<< arr.max_size() <<" arr.max_size() "<<endl;

    array<int,6> arr2={11,22,33,44,55,66};
    arr.swap(arr2);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.fill(20);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

}