//
//  main.c
//  С
//
//  Created by Tatiana Melnikova on 15.04.2020.
//  Copyright © 2020 Tatiana Melnikova. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void some_function (int * a, int row);
int row_count(void);

int main(int argc, const char * argv[]) {
    
    int row = row_count();
    int static_array[row];
    
    some_function((int*) &static_array, row);
    
    return 0;
}

void some_function (int * a, int row){
    for(int i = 0; i < row; a++ ){
        *a = i++;
        printf(" %d ", *a);
    };
};

int row_count(){
    int row = 0;
    scanf("%d", &row);
    return row;
};
