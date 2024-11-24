#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h> // Don't know if i really need it
#include <stdbool.h>

typedef struct node {
    char data;
    struct node *r;
    struct node *l;
} Node;

Node *create_btree(Node* root_node, unsigned node_num) {
    /* Taking any selected node, or NULL. Allocs mem for node_num */
    // do the linear method it seems to be much easier than the recursive thing
    Node *node_arr = NULL;
    char even = (node_num % 2) ? 0 : -1;
    unsigned off = 0;
    
    if (!root_node) {
        fputs("NULL root_node\n", stderr);
        return NULL;
    }
    
    node_arr = calloc(node_num, sizeof(Node));
    if (!node_arr) {
        fputs("Calloc ret NULL at create_btree\n", stderr);
        return NULL;
    }

    root_node->l = node_arr;
    root_node->r = node_arr + 1;
    
    for (; off < (node_num / 2) + even ; off++) {
        node_arr[off].l = node_arr + ((off + 1) * 2);
        printf("%p\n{\n\tl=%p &\n\tr=%p\n}\n", (void*)(node_arr + off), (void*)node_arr[off].l, (void*)node_arr[off].r);
    }
    
    off = 0;
    for (; off < (node_num / 2) + even - 1; off++) {
        node_arr[off].r = node_arr + ((off + 1) * 2);
    }

    if (even) {
        node_arr[off].r = node_arr + ((off + 1) * 2);
    }
    
    printf("%p\n{\n\tl=%p &\n\tr=%p\n}\n\n\n\n\n\n", (void*)(node_arr + off), (void*)node_arr->l, (void*)node_arr->r); 
    
    return node_arr;
}

void traverse_btree(Node* root_node, int *num_trv) {
    printf("%p\n{\n\tl=%p &\n\tr=%p\n}\n", (void*)root_node, (void*)root_node->l, (void*)root_node->r);
    (*num_trv) += 1;
    
    if (root_node->l) {
        traverse_btree(root_node->l, num_trv);
    } else {
        puts("NULL left Hit\n");
    }
    if (root_node->r) {
        traverse_btree(root_node->r, num_trv);
    } else {
        puts("NULL right Hit\n");
    }
}

int main(void) {
    Node root_node = {0, NULL, NULL};
    int trv_count;
    
    if (!create_btree(&root_node, 3)) {
        fputs("create_btree ret NULL\n", stderr);
        free(root_node.l);
        exit(EXIT_FAILURE);
    }
    /* traverse_btree */
    traverse_btree(&root_node, &trv_count);
    return 0;
}
