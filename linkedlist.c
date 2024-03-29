/**
 * CSO1 HW8 Linked List Implementation
 *
 * Your Computing ID: 
 */

//TODO: Remember to add include statement here. 

ll_node *ll_head(ll_node *list){
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 
}


ll_node *ll_tail(ll_node *list) {
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 
}


unsigned long ll_length(ll_node *list) {
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 
}

ll_node *ll_find(ll_node *list, int value) {
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 
}


ll_node *ll_remove(ll_node *list) {
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 
}


ll_node *ll_insert(int value, ll_node *list, int before) {  
    //TODO: Implement this function, see header file for description
    //TODO: Update return statement. 
    return NULL; 

}


/**
 * Displays the contents of the list separated by commas and surrounded by
 * brackets, with the pointed-to node highlighted with asterisks.
 *
 * Reference solution provided with assignment description
 */
void ll_show(ll_node *list) {
    // Find the head of the linked list
    ll_node *ptr = ll_head(list);
    // Print opening [
    putchar('[');
    // Loop through list printing values
    while(ptr) {
        if (ptr->prev) 
            printf(", "); // include a comma if not the first element
        if (ptr == list) 
            putchar('*'); // include * surrounding parameter element
        printf("%d", ptr->value);
        if (ptr == list) 
            putchar('*');
        ptr = ptr->next; // next pointer
    }
    // Print closing ]
    puts("]");
}


/**
 * Debugging display: shows the address and all the fields of the node,
 * optionally with the nodes before (if b is true) and after (if f is true).
 *
 * Written by CSO1 course staff and made available to all students.
 */
void ll_dump(ll_node *list, int f, int b) {
    if (b && list->prev) 
        ll_dump(list->prev, 0, 1);
    printf("%p: %p\t[%d]\t%p\n", list, list->prev, list->value, list->next);
    if (f && list->next) 
        ll_dump(list->next, 1, 0);
}


int main(int argc, const char *argv[]) {

    // Example debugging code.  You should write other
    // tests, including testing corner cases.
    ll_node *x = NULL;
    putchar('A'); ll_show(x);
    x = ll_insert(25, x, 1);
    putchar('B'); ll_show(x);
    x = ll_insert(1, x, 0);
    putchar('C'); ll_show(x);
    x = ll_insert(98, x, 1);
    putchar('D'); ll_show(x);
    x = ll_insert(0, x, 1);
    putchar('E'); ll_show(x);
    x = ll_insert(-8, ll_tail(x), 0);
    putchar('F'); ll_show(x);
    ll_node *y = ll_head(x);
    putchar('G'); ll_show(y);
    printf("Length: %lu (or %lu)\n", ll_length(y), ll_length(x));
    x = ll_remove(x);
    putchar('H'); ll_show(x);
    putchar('I'); ll_show(y);
    x = ll_remove(ll_find(ll_tail(y), 98));
    putchar('J'); ll_show(x);
    putchar('K'); ll_show(y);

    return 0;
}
