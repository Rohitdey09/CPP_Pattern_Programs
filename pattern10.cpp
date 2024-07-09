#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter the no of terms you want:";
    cin>>n;

    for(int i = 1; i <= n; i++){
        
        for (int j = 1; j <= i; j++)
        {
            cout<<count;
            count++;
        }
        
        cout<<endl;
    }
 return 0;
}

//Output
/*

Enter the no of terms you want:4
1
23
456
78910


*/