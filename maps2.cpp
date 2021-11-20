#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{int n;
cin>>n;
int arr[n];
map<int, int> marks;
for(int i=0;i<n;i++)////input size
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)//input array
{
    marks[arr[i]]++;
}
/////
map<int,int>::reverse_iterator it;
  
    // rbegin() returns to the last value of map
    for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->first<<" "<< endl;
    }
}