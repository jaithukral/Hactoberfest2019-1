#include<iostream>

using namespace std;

int main()
{
int n,temp,i,j;
cout<<"Enter the size of array->";
cin>>n;

int arr[n];

cout<<"\nEnter the elements of the array->";
for(i=0;i<n;i++)
cin>>arr[i];

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}

cout<<"\nFinal array-->\n";
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;

}
