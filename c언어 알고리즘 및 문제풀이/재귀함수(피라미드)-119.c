#include <stdio.h>

int sub(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return(sub(n - 1) + sub(n - 2));
}
int main() {
	int a = 0;
	a = sub(4);
	printf("%d", a);
	return 0;
}

//3 

