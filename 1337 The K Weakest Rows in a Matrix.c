void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void bubble(int *p, int n, int *q){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(p[j]>p[j+1]){

                p[j]=p[j+1]+p[j]-(p[j+1]=p[j]);
                q[j]=q[j+1]+q[j]-(q[j+1]=q[j]);
            }
        }
    }
}



int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize){
    int *p=(int*)malloc((matSize+1)*sizeof(int)),i,j,s,*q=(int*)malloc((matSize+1)*sizeof(int));
    for(i=0;i<matSize;i++){
        for(j=0;j<matColSize[0] && mat[i][j];j++);
        p[i]=j;
        q[i]=i;
    }

    bubble(p,matSize,q);

    *returnSize=k;
    return q;
}