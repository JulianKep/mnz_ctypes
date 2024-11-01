#include <stdio.h>
#include <stdlib.h>



//takes in 1D array and interprets it as 3D array, 1D array has to be in row major order
void k_means(int* array, int rows, int cols, int value_array_length, int num_cluster_centers){

    int total = rows * cols * value_array_length;
    int row_length = cols * value_array_length;


    //initialize random function
    srand(918226786);
    
    //initialize k-means with random cluster centers
    int middle[num_cluster_centers][3];

    for(int i=0; i<num_cluster_centers; i++){

        int random = rand() % (total/3);

        middle[i][0] = array[random*3];
        middle[i][1] = array[random*3+1];
        middle[i][2] = array[random*3+2];
    }

    //contains current cluster variance of i-th cluster
    int cluster_variances[num_cluster_centers];

    //fill cluster variance array
    for(int i=0; i<num_cluster_centers; i++){
        cluster_variances[i] = 99999;
    }

    int iterations = 2;

    for(int i=0; i<iterations; i++){
        
        //go over each entry and associate them to the cluster center that increases the cluster varialnce the least
        for(int j=0; i<total/3; j++){

            for(int k=0; k<num_cluster_centers; k++){

                int distance = 3;
    } 

        }

    }




    for (int i = 0; i <num_cluster_centers; i++) {
        for(int j = 0; j<3;j++){

            printf("%d\n", middle[i][j]);

        }
    }

    
    //this loop iterates over rows by calculating the offset
/*     for(int row_offset=0; row_offset<total; row_offset += cols*value_array_length){

        for(int col_offset=0; col_offset<row_length; col_offset += value_array_length){

            for(int i=0; i<3; i++){


            }

        }

    } */

}

