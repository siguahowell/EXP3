#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int size;
	char arr[100],i,j,temp;
	cout <<"enter the size of the array:";
	cin>>size;
	cout<<"enter array elements:"<<endl;
	for (i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort.."<<endl;

for(i=0; i<size; i++)
{
	for (j=i+1;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
cout<<"the output should be {";
for (i=0;i<size;i++){

	cout<<arr[i]<<",";

}
	cout<<"}"<<endl;
	cout<<"The size of the array is:"<< size;
getch();
return 0;
}

	
