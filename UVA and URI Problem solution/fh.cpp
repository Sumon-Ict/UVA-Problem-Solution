#include<iostream>
using namespace std;
int main()
{
    int num[10],temp;
    for(int i=0;i<=10;i++)
        cin>>num[i];

cout << "\nDescending Sort : \n\n";

        for(int i=0; i<=10; i++)
            {
                for(int j=i+1; j<=10; j++)
                    {
                        if(num[i]<num[j])
                            {
                                temp=num[j];
                                num[j]=num[i];
                                num[i]=temp;
                            }
                    }
                    cout<<num[i];
            }
}
