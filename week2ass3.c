#include<stdio.h>
int main()
{
    int size;
    printf("enter size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d numbers : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans[10];
    for(int i=0;i<10;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j] == i)
            count++;
        }
        ans[i]=count;
    }

    int max=0;
    for(int i=0;i<9;i++)
    {
        if(ans[i]>max)
        max = ans[i];

    }

    for(int i=0;i<9;i++)
    int maxcount=0,maxelement;
    for(int i=0;i<size-1;i++)
    {
        if(max == ans[i])
        int count=1;
        for(int j=i+1;j<size;j++)
        {
        printf("maximun occuring integer is : %d",i);
        break;
            if(arr[i]==arr[j])
            {
                count++;
                if(count>maxcount){
                    maxelement=arr[j];
                    maxcount=count;
                }
            }
        }
    }
}
    printf("maximum occuring integer is : %d",maxelement);
