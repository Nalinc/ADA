#include <stdio.h>
#include<iostream>
#define LEN 100000

long long getInvCount(int arr[], int n);

using namespace std;

int main(void)
{
	FILE *fp = fopen("IntegerArray.txt", "r");
	if (fp == NULL)
		return 1;

	// getting numbers from file
        printf("getting integers form file ... ");
	int arr[LEN];
	int temp,i;
	for ( i = 0; (i < LEN) && !feof(fp) ; i++)
        {
            fscanf(fp, "%d", &temp);
            arr[i] = temp;
        }
        printf("done!\n");
        fclose(fp);

  cout<<getInvCount(arr, 100000);
  getchar();

        return 0;
}

long long getInvCount(int arr[], int n)
{
  long long inv_count = 0;
  int i, j;
 
  for(i = 0; i < n - 1; i++)
    for(j = i+1; j < n; j++)
      if(arr[i] > arr[j])
        inv_count++;
 
  return inv_count;
}
