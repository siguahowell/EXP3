#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, n;
    float arr[10], sum=0, average,total,max,min;

   

// input lang ng input
    for(i = 0; i < 10; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
       sum += arr[i];
    }
// malaking number

    for(i = 1;i < 10; ++i)
    {

       if(arr[0] < arr[i]) (arr[0] = arr[i]);
       max = arr[0];
    }
// maliit number
    for(i = 1;i < 10; ++i)
    {

       if(arr[0] > arr[i]) (arr[0] = arr[i]);
       min=arr[0];
    }
//output
    cout << "Largest element = " <<max<<endl;
    cout<<"smallest element = "<<min<<endl;
    average = sum / 10;
    total= sum;
    cout<< "The Average is "<<average<<endl;
    cout<<"The total is "<<total<<endl;
    
    getch();
    return 0;
}
