void sort(float array[], int size, bool isAscending){
    if (isAscending == true){
        for (int i = 0; i < size; i++){
            for (int j = i+1; j < size; j++){
            if (array[i] > array[j]){
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                }
            }
        }
    }
    else{
        for (int i = 0; i < size; i++){
            for (int j = i+1; j < size; j++){
            if (array[i] < array[j]){
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                }
            }
        }
    }
}