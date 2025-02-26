#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	int c[150];
	int d = 0;
	int e = 0;
	for (int i = 0; i <a; i++) {
		scanf("%d",&c[i]);
	}
	while (d != b) {
		d = c[d];
		e += 1;
		if (e >= 150) {
			e = -1;
			break;
		}
	}
	printf("%d",e);
}