#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min,sum;
	i=0;
  for(i = 0; i < 10; ++i)
    {
       cout << "Enter Number " << i+1 << " : ";
       cin >> arr[i];
       sum += arr[i];
    }
    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min<<endl;
    cout<<"The total of the elements is: "<<sum<<endl;
    cout<<"the average of the elements are: "<<sum/10<<endl;
    getch();
    return 0;
}
