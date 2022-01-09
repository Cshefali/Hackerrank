/*Given an interger n and a threshold k.
For each number i from 1  through n, 
i) find the maximum value of Bitwise AND
ii) maximum value of Bitwise OR
iii) maximum value of Bitwise XOR
when compared against all intergers through n that are greater than i.
Consider a value only if the comparison returns a result less than k.
Print the result of the and, or and xor comparisons on separate lines in that order. */


#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int max_and=0, max_or=0, max_xor=0,i,j,temp_and=0,temp_or=0,temp_xor=0; 
  //max_and, max_or,max_xor store the maximum value of the corresponding logical operations.
  for(i=1;i<n;i++)
  { for (j=i+1;j<=n;j++)
    {   temp_and = i & j;
        temp_or = i | j;
        temp_xor = i ^ j;
        if((temp_and>max_and)&&(temp_and<k))
            max_and=temp_and;
        if((temp_or>max_or)&&(temp_or<k))
            max_or=temp_or;
        if((temp_xor>max_xor)&&(temp_xor<k))
            max_xor=temp_xor;    
    }
  }
  printf("%d\n",max_and);
  printf("%d\n",max_or);
  printf("%d\n",max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
