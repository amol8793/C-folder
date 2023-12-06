
#include <stdio.h>

void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void bubble_sort(int a[],int n)
{
    int i,j,t;
    for(i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                   t = a[j];
                a[j] = a[j+1];
              a[j+1] = t;
            }
        }
    }
}


int main()
{
    int a[100],n;
    printf("How many number you want to insert: ");
    scanf("%d",&n);
    
    accept(a,n);   
    printf("Before Bubble Sort\n");
    printf("Array: ");
    display(a,n);
    
    bubble_sort(a,n);
    printf("\nAfter Bubble Sort\n");
    printf("Array: ");
    display(a,n);
    
    return 0;
}
