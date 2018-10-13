/*
 * Este programa fue hecho con el proposito de practicar el concepto de los arrays
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/12/2018
 * 
 */
#include <stdio.h>

//Function for sum of array
int sum (int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i ++) {
        sum += arr[i];
    }
    return sum;
}

//Function for average of array
double average (int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i ++) {
        sum += arr[i];
    }

    double avg = sum/n;
    return avg;
}

//Function for maximum value of array
void maxval (int arr[] , int n) {
    int max = arr[0];
    int location = 1;
    for (int i = 0; i < n; i++ ) {
        if (arr[i] > max) {
            max = arr [i];
            location = i+1;
        }
    }
    printf ("The maximum value of the array is %i, and it is located in %i", max, location);
}

//Function for minimum value of array
void minval (int arr[] , int n) {
    int min = arr[0];
    int location = 1;
    for (int i = 0; i < n; i++ ) {
        if (arr[i] < min) {
            min = arr [i];
            location = i+1;
        }
    }
    printf ("The minimum value of the array is %i, and it is located in %i", min, location);
}

int main(void) {
    int n;
    int opcion;
    int i;
//Getting the size of the array from the user
    printf ("Give me the amount of numbers you want to input:");
    scanf ("%i", &n);
    int arr[n];
//Getting the array values from the user
    for ( i = 0; i < n; i++) {
        printf ("Element %i:", i + 1);
        scanf ("%i", &arr[i]);
    }
//Setting up the menu
    do {
        printf ("\n\n1. SUM\n");
        printf ("2. AVERAGE\n");
        printf ("3. MAXVAL\n");
        printf ("4. MINVAL\n");
        printf ("0. EXIT\n");
        printf ("Opcion: ");
        scanf ("%i", &opcion);
//Each case sends the array to the different functions
        switch (opcion) {
            case 1:
                printf ("The sum of the given array is %i", sum (arr,i));
                break;

            case 2:
                printf ("The average of the given array is %lf", average (arr, i));
                break;

            case 3:
                maxval (arr, i );
                break;

            case 4:
                minval (arr, i);
                break;

            default:
                printf ("Invalid input. Please try again.");
                break;

        }
    }while (opcion!=0);
    return 0;
}