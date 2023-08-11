#include <stdio.h>
#include "list.h"

int main() {
    List my_list = new_list();

    int input;
    scanf("%d", &input);

    while (input != 0) {
        insert_at_front(&my_list, input);
        scanf("%d", &input);
    }

    printf("List contents: ");
    print_list(&my_list);

    // Testing other functions here

    destroy_list(&my_list);

    return 0;
}
