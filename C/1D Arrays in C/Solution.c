/**  
* @author SANKALP SAXENA  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int num ;
    scanf ("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));

    int sum = 0;

    for(int i = 0; i < num; i++) {
        scanf("%d", (arr + i));
        sum += *(arr+i);
    }

    printf("%d", sum);

        return 0;
}

