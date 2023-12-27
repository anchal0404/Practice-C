/*
Name: Anchal Rathore
Description:WAP to find the median of two unsorted arrays
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A,B;
    float median_A,median_B,median;
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&A);
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&B);

    int arr_A[A];
    int arr_B[B];
    printf("Enter the elements one by one for Array A: ");
    for (int i = 0; i < A; i++)
    {
        scanf("%d",&arr_A[i]);
    }

    printf("Enter the elements one by one for Array B: ");
    for (int i = 0; i < B; i++)
    {
        scanf("%d",&arr_B[i]);
    }

    for (int i = 0; i < A-1; i++)
    {
        for (int j = 0; j < A-1-i; j++)
        {
            if(arr_A[j+1]<arr_A[j])
            {
                int temp = arr_A[j];
                arr_A[j] = arr_A[j+1];
                arr_A[j+1] = temp;
            }
        }
    }

    for (int k = 0; k < B-1; k++)
    {
        for (int l = 0; l < B-1-k; l++)
        {
            if(arr_B[l+1]<arr_B[l])
            {
                int temp = arr_B[l];
                arr_B[l] = arr_B[l+1];
                arr_B[l+1] = temp;
            }
        }
    }

    if (A%2==1)
    {
        median_A = arr_A[A/2];
    }
    else
    {
        median_A =(arr_A[A/2-1] + arr_A[A/2])/2.0;
    }

    if (B%2==1)
    {
        median_B = arr_B[B/2];
    }
    else
    {
        median_B =(arr_B[B/2-1] + arr_B[B/2])/2.0;
    }

    median = (median_A+median_B)/2.0;
    printf("Median A = %g\n",median_A);
    printf("Median B = %g\n",median_B);

    printf("Median of both array %g\n",median);
    
    return 0;
}
