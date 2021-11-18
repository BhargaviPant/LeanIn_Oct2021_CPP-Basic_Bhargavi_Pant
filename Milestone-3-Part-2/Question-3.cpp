//Q3. Create an array and write a menu driven program to traverse that array, search an element in that array, modify an element in the array. (Use while loop amd switch case to make it menu driven)

#include <iostream>

using namespace std;

int traverse(int arr[], int n);
int search(int arr[], int n);
int modify(int arr[],int n);
int display(int arr[],int n);

int main() 
{
	int size,arr[100],n;
    char ch='y';
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    while(ch=='y')
    {
        cout<<"Select: \n1) traverse an arry \n2) search an Element \n3) modify an element \n4) display \n5) exit ";
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<traverse(arr,size);
                break;
            case 2:
                cout<<search(arr,size);
                break;
            case 3:
                cout<<modify(arr,size);
                break;
            case 4:
                cout<<display(arr,size);
                break;
            default:
                cout<<"exit";
                break;
        }
        
        cout<<"\nPress y to continue else exit ";
        cin>>ch;
    }
}
int traverse(int arr[], int n)
{
    int i;
 
    cout<<"Array: ";
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int search(int arr[], int n)
{
    int i,x,m,b;
    cout<<"enter Element to be searched ";
    cin>>x;
    for(i = 0; i < n; i++)
       { if (arr[i] == x)
           { m=1;
             b=i;
           }
       }    
    if(m!=1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index "<<b+1<<endl;;
    
    return 0;
}
int modify(int arr[],int n)
{
    int s,a,m,b;
    cout<<"enter element to be modified ";
    cin>>s;
    for(int i = 0; i < n; i++)
   {     if (arr[i] == s)
            {  b=i;
                m=1;
            }
   }        
     if(m!=1)
        cout<<"Element is not present in array";
    else
       { cout<<"Element is present at index "<<b+1<<endl;
    
    cout<<"enter value to be replaced with";
    cin>>a;
    arr[b]=a;
    display(arr,n);
       }
    return 0;
}
int display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    return 0;
}
