#include <stdio.h>

main() {
    int v1[10] = {1,5,8,2,3,7,6,4,9,10};
	int cont, cont2, save, i = 10;
	
    for (cont = 0; cont < i; cont++) {
        printf("\n[%d] ", v1);

        for (cont2 = 0; cont2 < i - 1; cont2++) {
            printf("%d, ", cont2);

            if (v1[cont2] > v1[cont2 + 1]) {
                save = v1[cont2];
                v1[cont2] = v1[cont2 + 1];
                v1[cont2 + 1] = save;
            }
        }
    }
}
