
// //recursive
// #include<iostream>
// using namespace std;

// void fib(int m){
//     static int  a = 0 , b = 1 , c;
//     if(m>0){
//         c = a+b;
//         a = b;
//         b = c;
//         cout<<c<<" ";
//         fib(m-1);
//     }
// }

// int main() {
//     int a;
//     cout<<"Enter the number: "<<endl;
//     cin >> a ;
//     fib(a);
//     return 0;
// }

//iterative
#include<iostream>
using namespace std;

void fib(int n)
{
    int a = 0 ,b=1, c=0;
    for(int i=0;i<n;i++)
    {
        cout<<c<<" ";
        c = a + b;
        a = b;
        b = c;
    }

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Fibbonacci series are: ";
    fib(n);
return 0;
}

