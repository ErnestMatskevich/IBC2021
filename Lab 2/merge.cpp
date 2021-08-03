
#include <iostream>
using namespace std;

int a[50];
void merge(int low,int mid,int high)
{
    int h,i,j,b[50],k;
    h=low;
    i=low;
    j=mid+1;

    while((h<=mid)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++) a[k]=b[k];
}
void merge_sort(int low,int high)
{
    int middle;
    if(low<high)
    {
        middle = low + (high-low)/2; //This avoids overflow when low, high are too large
        merge_sort(low,middle);
        merge_sort(middle+1,high);
        merge(low,middle,high);
    }
}

int main()
{
    int num,i;

    cout<<"**********************MERGE SORTING**********************"<<endl;
    cout<<"Enter size of array"<<endl;


    cin>>num;
    cout<<"Enter elements of array step by step"<<endl;

for(i=1;i<=num;i++)
{
    cin>>a[i] ;
}
merge_sort(1,num);
cout<<endl;
cout<<"So, the sorted list will be :"<<endl;


for(i=1;i<=num;i++)
    cout<<a[i]<<"  "<<endl;

cout<<"**********************MERGE SORTING**********************"<<endl;
return 0;

}
