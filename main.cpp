#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	
	printf("Quantidade: ");
	scanf("%d", &n);
	
	int a[n], x=n, menor;
	
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	
	for(int i=0;i<n;i++){
		
		for(int b=i;b<n;b++){
			if(a[b]<a[i]){
				x=a[i];
				a[i]=a[b];
				a[b]=x;
			}
		}
		
		x++;
		
	}
	
	printf("\n");
	
	for(int i=0;i<n;i++){
		if(i==n-1){
			printf("%d", a[i]);
		}else{
		
		printf("%d, ", a[i]);
	}
	}
	
	return 0;
}
