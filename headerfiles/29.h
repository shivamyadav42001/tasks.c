#include<stdio.h>

int getSadlePoint(int row,int column,int a[][column]){
	int minInRow=INT_MAX,index,isSadle=1;
	for(int i=0;i<row;i++){
		int j;
		isSadle=1;
		minInRow=INT_MAX;
		for( j=0;j<column;j++){
			if(minInRow>a[i][j]){
				minInRow=a[i][j];
				index=j;
			}
		}
		for(int k=0;k<row;k++){
			if(a[k][j]>minInRow){
				isSadle=0;
			}
		}
		if(isSadle==1){
			return minInRow;
		}
	}
}