
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    int t;
   cin>>t;
   while(t--)
   {
    int n;
cin>>n;
int arr[n];
map<long long  int,long long  int> marks;
for(int i=0;i<n;i++)////input size
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)//input array
{
    marks[arr[i]]++;
}
  

map<long long int,long long int> ::iterator itr;//declaring iterator
map<long long int,long long int>::reverse_iterator it;
int max=0;
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
  for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->first<<" ";
    }

}
}
else if(max=1)
{
 for (it = marks.rbegin(); it != marks.rend(); it++) {
        cout << it->first<<" ";
    }
}
   }
   return 0;
}