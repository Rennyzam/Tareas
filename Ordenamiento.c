#include <stdio.h>

int main (){
	
int t, a[20]={47,49,77,6,88,61,72,36,9,48,28,70,82,34,8,95,97,16,84,32};	
int i , j, n;

	n=sizeof(a)/sizeof (int);
	
	for (i=1;i<n;i++){
		j=i-1;
		t=a[i];
		while (j>=0 &&t<a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	for (i=0;i<n;i++){
		printf("%d %d \n", i+1, a[i]);
	}
	
	return 0;
}