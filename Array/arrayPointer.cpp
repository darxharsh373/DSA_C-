#include<iostream>
using namespace std;
int main()
{
int arr[]={32,4,2,4,12};
int *ptr=arr; //giving address
cout<<ptr<<endl;
// ptr[0]=12;
// for(int i=0;i<=4;i++){
//     cout<<ptr[i]<<" ";
// }
// *ptr=8;
// ptr++;
// *ptr=9;
// ptr--;
for(int i=0;i<=4;i++){
    cout<<*ptr<<" ";
    ptr++;
}
 return 0;
}