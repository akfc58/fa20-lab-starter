#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortoise = head, *hare = head;
    if (head == NULL){
        return 0;
    }
    while (hare->next != NULL && hare->next->next != NULL) {
        if (tortoise == hare) {
            return 1;
        }
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    return 0;
}