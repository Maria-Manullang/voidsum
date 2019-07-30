#include<stdio.h>

int array[50],banyak,a;
int main(){


	printf("Masukkan banyak data: ");
	scanf("%d",&banyak);

	printf("Masukkan %d data\n",banyak);

	for(a=0; a<banyak; a++){
		scanf("%d",&array[a]);
	}
	jumlah(array);

return 0;
}

void jumlah(int array[]){
	int a, temp=0;
	for (a=0;a<banyak;a++){
		temp+=array[a];
	}
	printf("\nJumlah keseluruhan data adalah %d\n",temp);
}
