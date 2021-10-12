#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//*********************************************FOR WORST CASE**********************************************************//
void swap(int *v, int *s)
{
  int temp=* v;
  *v=*s;
  *s=temp;
}


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
           {
              swap(&arr[j], &arr[j+1]);
           }
}
  
void selection(int arr[], int n)
{
  int i, j, min_idx;
  for (i = 0; i<n-1;i++)
   {
     min_idx=i;
      for(j=i+1;j<n;j++)
           if(arr[j]<arr[min_idx])
               min_idx=j;
          swap(&arr[min_idx],&arr[i]);
   }
}

void insertion(int arr[], int n)
{
    int i,key,j;
    for (i =1; i<n;i++)
    {
      key =arr[i];
        j=i-1;
         while (j= 0 && arr[j]>key)
         {
             arr[j+1]=arr[j];
              j=j-1;
         }
       arr[j+1]=key;
        
    }
}

int main()
{ 
    //worst complexity
clock_t t;
int i, j, n=10000;
srand(time(NULL));
double mt;
int arr[n];

//for input
for(i=0,j=n;i<n;i++,j--)
{
 arr[i]=j;
}

//for bubble sorttime
   t=clock();
   bubbleSort(arr,n);
   t=clock()-t;
   mt=((double)t)/CLOCKS_PER_SEC;
   
   printf("bubblesort() took %f  seconds to execute\n", mt);
   
    for(i=0,j=n; i<n; i++,j--)
    {
    arr[i]=j;
    }
    
//for selection sort time
    t = clock();
    selection(arr, n);
    t =clock()-t;
    mt =((double)t)/CLOCKS_PER_SEC;
    printf("selectionsort() took %f seconds to execute \n",mt);
    printf("\n");
    
    for(i=0, j=n;  i<n; i++, j--)
    {
        arr[i]=j;
    }
//for insetion sort time
  t =clock();
   insertion(arr, n); 
   t=clock()-t;
   mt =((double)t)/CLOCKS_PER_SEC;
   printf("insetionsort() took %f seconds to execute \n", mt);
   return 0;
   
   }

   //****************************************************FOR BEST CASE***********************************************//
   //*********************************** COMMENT OUT THE ABOVE CODE TO RUN THIS ***************************************//
      
void swap(int *v, int *s)
{
  int temp=* v;
  *v=*s;
  *s=temp;
}

void bubble(int arr[], int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j] ,&arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
void selection(int arr[], int n)

{
    int i, j, min_idx;
    for (i = 0; i< n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] <arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
void insertion(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{ 
    //for best time complexity
    clock_t t;
    int i, n = 10000;
    srand(time(NULL));
    double mt;
    int arr[n];


    //for input
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 10000;
    }


    //for bubble sort time
    t = clock();
    bubble(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("bubblesort() took %f seconds to execute  \n", mt);
    
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 10000;
    }


    //for selection sort time
    t = clock();
    selection(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("selectionsort() took %f seconds to execute \n", mt);
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 10000;
    }

    //for insetion sort time
    t = clock();
    insertion(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("insetionsort() took %f seconds to execute \n ", mt);
    return 0;
}



   //****************************************************FOR AVERAGE CASE***********************************************//
   //*********************************** COMMENT OUT THE ABOVE CODE TO RUN THIS ***************************************//
      
void bubble(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {

    if (arr[j] > arr[j + 1])
                swap( &arr[j], &arr[j + 1]);
        }
    }
}
void selection(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
void insertion(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j = 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    clock_t t;
    int i, n = 10000;
    srand(time(NULL));
    double mt;
    int arr[n];


    //for input
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

//for bubble sort time
    t = clock();
    bubble(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("bubblesort() took %f seconds to execute \n ", mt);
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
    }


    //for selection sort time
    t = clock();
    selection(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("selectionsort() took %f seconds to execute \n ", mt);
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
    }


    //for insetion sort time
    t = clock();
    insertion(arr, n);
    t = clock() - t;
    mt = ((double)t) / CLOCKS_PER_SEC;
    printf("insetionsort() took %f seconds to execute \n ", mt);

    return 0;
}