// 1. WAP to print all negative elements in an array.

#include <stdio.h>

int main()
{
    int N;

    printf("Enter the size of array: ");
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The negative elements in the array are: ");
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}

/*

Output : 

Enter the size of array: 5
1
-2
-3
-4
5
The negative elements in the array are: -2-3-4

*/

// 4. WAP to insert , update , delete operation the elements into arry.

#include <stdio.h>

int main()
{
    int N=10;

    int arr[10]={1,2,3,4,5,6,7};

    
    printf("The elements before changes array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }


    arr[8]=10; // insert
    arr[9]=20; // insert
    arr[1]=50; //update
    arr[3]=0; // delete

    printf("\nThe elements after changes array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*

Output :

The elements before changes array are: 1 2 3 4 5 6 7 0 0 0 
The elements after changes array are: 1 50 3 0 5 6 7 0 10 20

*/

/*

addition of two matrices

#include <stdio.h>

int main()
{

    int arr1[9]={1,2,3,4,5,6,7,8,9};
    int arr2[9]={11,12,13,14,15,16,17,18,19};
    int arr3[18];

    for (int i = 0; i < arr1[9]; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < arr2[9]; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < arr3[18]; i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }


    printf("The elements in the array are: ");
    for (int i = 0; i < arr3[18]; i++)
    {
       printf("%d",arr3);
    }

    return 0;
}

*/