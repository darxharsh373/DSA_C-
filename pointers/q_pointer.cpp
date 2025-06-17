//  write a function to find out the first and last digit of a number without returning anything


#include<iostream>
using namespace std;
void find(int n,int* ptr1,int *ptr2){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;

}
int main(){
    int n;
    cin>>n;
    int first_digit,last_digit;
    int*ptr1=&first_digit;
    int*ptr2=&last_digit;
    find(n,ptr1,ptr2);
    cout<<first_digit<<endl<<last_digit;
}