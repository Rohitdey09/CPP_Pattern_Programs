#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of terms you want:";
    cin>>n;

    for(int i = 1; i <= n; i++){
        
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
 return 0;
}

//Output
/*

Enter the no of terms you want:5
1
12
123
1234
12345


*/