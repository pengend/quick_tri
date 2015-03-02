#include <stdio.h>

void swap(int tab[], int a, int b)
{
  int tmp;

  tmp = tab[a];
  tab[a] = tab[b];
  tab[b] = tmp;
}


void quick_sort(int tab[], int start, int end)
{
  int pivot;
  int left;
  int right;

  if (start >= end)
    return ;
  pivot = tab[start];
  left = start;
  right = end;
  while (1)
    {
      if (tab[right] == tab[left])
	right--;
      while (tab[right] > pivot)
	right--;
      while (tab[left] < pivot)
	left++;
      printf("%d %d\n", left, right);
      if (left < right)
	swap(tab, left, right);
      else
	break ;
    }
  quick_sort(tab, start, right);
  quick_sort(tab, right + 1, end);
}

void ft(int tab[])
{
  tab[0] = 5;
}

#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  int *tab;
  int tab2[4];
  int i;

  tab2[0] = 2;
  tab2[1] = 1;
  tab2[2] = 3;
  tab2[3] = 3;
  tab = (int*)malloc(sizeof(int) * argc - 1);
  i = 0;
  argv++;
  while (i < argc - 1)
    {
      tab[i] = atoi(argv[i]);
      i++;
    }
  quick_sort(tab, 0, argc - 1);
  i = 0;
  while (i < argc - 1)
  {
    printf("%d\n", tab[i]);
    i++;
  }
}
