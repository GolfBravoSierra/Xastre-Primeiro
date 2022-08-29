#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///funcao que faz um quickShort
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

///funcao que faz a media do vetor
float avarage(int *vet)
{
    float media;
    for(int i = 0; i<10;i++)// mudei aqui
    {
        media += vet[i];
    }
    media /= 2;
    return media;
}

///funcao de swap
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

///funcao que faz um bobbleShort
void bubbleSort(int v[], int n){
    if (n < 1)return;

    for (int i=0; i<n; i++)
        if (v[i] > v[i+1])
            swap(v[i], v[i+1]);
    bubbleSort(v, n-1);
}


int main()
{
    srand(time(NULL));//muda a seed do codigo para deixar a rand aleatoria de a cordo com o horario atual
    //iniciando variaveis
    int n=1000;
    int ar[1000]={};
    int ar2[1000]={};
    float media;//media do vetor
    int soma=0;// soma para a media do vetor

    //alocando 1000 numeros aleatorios no vetor
    for(int i=0; i<n; i++){
    ar[i]=rand()%1000;
    ar2[i]=ar[i];

  }


    //printa o array original
    printf("array original:\n");
    for(int i=0; i<n; i++){
        printf("%i ",ar[i]);
        
    }

    //chama funcao quickShort
    quicksort(ar2, 0, n);

    //printa o array do quickshort
    printf("\n\nQuick sort:\n");
    for(int i=0; i<n; i++){
        printf("%i ",ar2[i]);
    }

    //chama a funcao bobbleshort
    bubbleSort(ar2, n);

    //printa o array do bobbleShort
    printf("\n\nBubble sort:\n");
    for(int i=0; i<n; i++){
        printf("%i ",ar2[i]);
    }
  for(int i =0; i<1000; i++){// esse for é para faser a media do vetor
    soma = soma + ar[i];
    //printf("soma para verificar a media\n%d\n", soma);
  }
  media=soma/1000;
printf("\n\nmediana do array inicial: %i\n\n", (ar[5]+ar[6])/2);// printa a mediana do array inicial
    printf("\n\nmediana do bouble short: %i\n\n", (ar2[5]+ar2[6])/2);// printa a mediana do array do bobbleshort
    printf("\n\nmedia: %.2f\n\n", media);//printa a media do array

    
    return 0;
}
