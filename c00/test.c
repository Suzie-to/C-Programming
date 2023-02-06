# include<unistd.h>
#include<stdio.h>

int main(){
	
	int n = 3;
	int i;
	char arr[n]; 
	 for(i=0; i<n; i++){
		arr[i] += '0';
	 }
	printf("%s", arr);
	return 0;
}
