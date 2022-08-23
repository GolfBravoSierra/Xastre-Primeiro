#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}

int main() 
{
	int ar[5]={5,9,13,27,2};
	for(int i=0; i<5; i++){printf(ar[i])}
	quicksort(ar, 0, 10}
	for(int i=0; i<5; i++){printf(ar[i])}
return 0;
}
