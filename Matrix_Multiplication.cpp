#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
      
    int a[3][3], b[3][3], c[3][3], i, j,k,sum;
 
    cout<<"enter your first matrix "<<endl;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter your Second  matrix "<<endl;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Multiplication of The matrix is :"<<endl;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
            {
               sum = sum+a[i][k] * b[k][j];
            }
            c[i][j]=sum;
          
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
