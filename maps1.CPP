#include<iostream>
#include<map>
#include<string>
#include <bits/stdc++.h>
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
  

////////////////

int max=0;
map<int,int> ::iterator itr;//declaring iterator
//map<int, int>::reverse_iterator it;
  
    // rbegin() returns to the last value of map
  /*  for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->second<<" "<< endl;
    }*/
for(itr=marks.begin();itr!=marks.end();itr++)//getting the maximum frequency
{  
   if((*itr).second>2)
   {
       max=(*itr).second;
   }
  
}
if(max>2)//if max freq>2
{
 cout<<"-1"<<endl;
}
else if(max=2)//if max feq is equal to 2
{
if(marks[(marks.rbegin())-> first]==2)//check poo case
{
 cout<<"-1"<<endl;
}
else
{ for(itr=marks.begin();itr!=marks.end();itr++)//if not poo
{  
if((*itr).second==2)//printing all 2 freq elements
{
   cout<<(*itr).first<<" ";//printing in ascending
   marks[(*itr).first]--;//decrementaing their counter by one
}

}
map<int,int>::reverse_iterator it;
  for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->first<<" "<< endl;
    }
}
}
//////////////////
/*else*/ if(max=1)
{  map<int,int>::reverse_iterator it;
  for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->first<<" "<< endl;
    }
}
}