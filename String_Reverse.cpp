#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char a[100], i, l, swap;

    cout<<"Please enter a String !";

    gets(a);

    for (l = 0; a[l]; l++);
    cout<<"Your Entered String is "<< a;

    for (i = 0; i < l / 2; i++)
    {
        swap = a[i];

        a[i] = a[l - 1 - i];
        a[l - 1 - i] = swap;
    }
    cout<<"Your Reverse String is"<<a;
    return 0;


}

