#include <stdio.h>
#include <stdlib.h>





//takes in 1D array and interprets it as 3D array, 1D array has to be in row major order
void k_means(int* array, int rows, int cols, int value_array_length, int num_cluster_centers){

    int total = rows * cols * value_array_length;
    int row_length = cols * value_array_length;


    //initialize random function
    srand(918268612);
    
    //initialize k-means with random cluster centers
    int middle[num_cluster_centers * 3];
    for(int i=0; i<num_cluster_centers; i++){

        int random = rand() % (total +1);

    }

    
    //this loop iterates over rows by calculating the offset
    for(int row_offset=0; row_offset<total; row_offset += cols*value_array_length){

        for(int col_offset=0; col_offset<row_length; col_offset += value_array_length){

            for(int i=0; i<3; i++){

                printf("%d\n", array[row_offset + col_offset + i]);
            }

        }

    }



}

