#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of terms you want:";
    cin>>n;

    for(int i = 1; i <= n; i++){
        int count=65;
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)count;
            count++;
        }
        cout<<endl;
    }
 return 0;
}

//Output
/*

Enter the no of terms you want:5
A
AB
ABC
ABCD
ABCDE


*/