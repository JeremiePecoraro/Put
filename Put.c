#include <unistd.h>
#include <stdio.h>

void gd_putchar(char c) {
    write(1, &c, 1);
}

int gd_putstr(char *list) {
    int i = 0;
    while (list[i] != '\0') {
        gd_putchar(list[i]);
        i++;
    }
    return i;
}

int main(void) {
    int nb_put;
    
    nb_put = gd_putstr("Hello_World");

    printf("%i\n", nb_put);
    
    return 0;
}
