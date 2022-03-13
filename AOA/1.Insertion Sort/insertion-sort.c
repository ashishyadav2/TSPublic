#include<stdio.h>
#include<conio.h>

void main() {
    int array[100];
    int i,n,item,j,moves=0,comparisons=0,max_comp,max_moves,avg_percent,comp_percent,move_percent;

    max_comp = n*(n-1);
    max_moves = n-1;
    //get array size from user
    printf("Enter size of array: "); 
    scanf("%d",&n);

    // store elements in array using for loop
    for(i=0;i<n;i++) {
    printf("Element at location(%d): ",i+1);
    scanf("%d",&array[i]);
    }

    // insertion sort algorithm
    for (j=1;j<n;j++) {
        item = array[j];
        i=j-1;
        while ((i>=0) && (item<array[i])) {
            array[i+1] = array[i];
            i--;
            comparisons++;
        }
        array[i+1]=item;
        moves++;
    }

    //displaying sorted array
    printf("\n--------Sorted Array-------\n");
    for(i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }

    //analysis part
    printf("\n--------Analysis-------\n");
    printf("Comparisons: %d\n",comparisons);
    printf("Moves: %d\n",moves);

    //Complexity 
    comp_percent = (comparisons*100)/max_comp;
    move_percent = (moves*100)/max_moves;

    avg_percent = (comp_percent+move_percent)/2;

    printf("\n--------Case-------\n");
    switch(avg_percent) {
        case 0 ... 33:
        printf("Best Case");
        break;

        case 34 ... 66:
        printf("Average Case");
        break;

        case 67 ... 100:
        printf("Worst Case");
        break;

        default:
        printf("Invalid input");
        break;
    }
}