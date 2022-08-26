#include <stdio.h>
#include <stdlib.h>

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

void swap(int a, int b){ 
    int temp = a; 
    a = b; 
    b = temp; 
} 
void bubbleSort(int v[], int n){ 
    if (n < 1)return; 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]) 
            swap(&v[i], &v[i+1]);  
    bubbleSort(v, n-1); 
} 


int main() 
{
	int ar[1000]={};
  for(int i=0; i<1000; i++){
    ar[i]=rand()%100;
  }
  printf("array original:\n");
	for(int i=0; i<1000; i++){printf("%i ",ar[i]);}
	quicksort(ar, 0, 1000);
  printf("\n\nQuick sort:\n");
	for(int i=0; i<1000; i++){printf("%i ",ar[i]);}
  bubbleSort(ar, 1000);
  printf("\n\nBubble sort:\n");
	for(int i=0; i<1000; i++){printf("%i ",ar[i
	for(int i=0; i<1000 i++){printf("%i ",ar[i]);}
return 0;
}
