//1-D

/*Print Array in Reverse
Given the size and the elements of array A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array.
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.

SAMPLE INPUT 
5
4
12
7
15
9
SAMPLE OUTPUT 
9
15
7
12
4*/

#include <stdio.h>
#define x 100 //constarints max size
int main() {
    int s,i,a[x];
    scanf("%d",&s); //input array size

    for (int i = 0; i < s; ++i){
        scanf("%d",&a[i]); //input array
    }
        
    for (int i =s-1; i>=0; i--){
        printf("%d \n",a[i]); //output reverse array
    }
}
