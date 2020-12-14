//
// Tomás Oliveira e Silva, AED, November 2020
//

#include <stdlib.h>
#include "sorting_methods.h"

void rank_sort(T *data,int first,int one_after_last)
{
  int i,j,*rank;
  T *buffer;

  rank = (int *)malloc((size_t)(one_after_last - first) * sizeof(int)) - first; // no error check!
  for(i = first;i < one_after_last;i++)
    rank[i] = first;
  for(i = first + 1;i < one_after_last;i++)
    for(j = first;j < i;j++)
      rank[(data[i] < data[j]) ? j : i]++;
  buffer = (T *)malloc((size_t)(one_after_last - first) * sizeof(T)) - first; // no error check!
  for(i = first;i < one_after_last;i++)
    buffer[i] = data[i];
  for(i = first;i < one_after_last;i++)
    data[rank[i]] = buffer[i];
  free(buffer + first);
  free(rank + first);
}
