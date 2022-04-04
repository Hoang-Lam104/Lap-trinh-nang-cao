int** transpose(int** matrix, int nRows, int nCols){
    int** transMa = new int*[nCols];
    for(int i=0; i<nCols; i++){
        transMa[i] = new int[nRows];
        for(int j=0; j<nRows; j++){
            transMa[i][j] = matrix[j][i];
        }
    }
    return transMa;
}