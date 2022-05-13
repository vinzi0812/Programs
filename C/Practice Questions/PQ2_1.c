#include<stdio.h>
void printarray(int p[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
       printf("%d ", p[i]);
    printf("\n");
}
 
void partition(int n)
{
    int p[n]; // An array to store a partition
    int k = 0;  // Index of last element in a partition
    p[k] = n;  // Initialize first partition as number itself
    int rem_val;
    // This loop first prints current partition, then generates next
    // partition. The loop stops when the current partition has all 1s
    while (1)
    {
        // print current partition
        printarray(p, k+1);
        rem_val = 0;
        while (k >= 0 && p[k] == 1)
        {
            rem_val += p[k];
            k--;
        }
 
        // if k < 0, all the values are 1 so there are no more partitions
        if (k < 0)  return;
 
        // Decrease the p[k] found above and adjust the rem_val
        p[k]--;
        rem_val++;
 
 
        // If rem_val is more, then the sorted order is violated.  Divide
        // rem_val in different values of size p[k] and copy these values at
        // different positions after p[k]
        while (rem_val > p[k])
        {
            p[k+1] = p[k];
            rem_val = rem_val - p[k];
            k++;
        }
 
        // Copy rem_val to next position and increment position
        p[k+1] = rem_val;
        k++;
    }
}
int main()
{
    int num;
    printf("\nEnter a number to perform integer partition: ");
    scanf("%d", &num);
    partition(num);
    return 0;
}