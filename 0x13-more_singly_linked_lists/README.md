. List length : A function that returns the number of elements in a linked listint_t list.
- Prototype: `size_t listint_len(const listint_t *h);`
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-listint_len.c -o b`
2.  Add node : A function that adds a new node at the beginning of a listint_t list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed.
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gn
3. Add node at the end : A function that adds a new node at the end of a listint_t list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed.
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=
4.  Free list : A function that frees a listint_t list.
- Prototype: `void free_listint(listint_t *head);`
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std
5.  Free : A function that frees a listint_t list.
- Prototype: `void free_listint2(listint_t **head);`
- The function sets the `head` to `NULL`
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu8
6.  Pop : A function that deletes the head node of a listint_t linked list, and returns the head node's data (n).
- Prototype: `int pop_listint(listint_t **head);`
- If the linked list is empty return `0`.
- Compile the code this way: ` gcc -Wall -pedantic -Werror -Wextra -std=
7. . Get node at index : A function that returns the nth node of a listint_t linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Where `index` is the index of the node, starting at `0`.
- If the node does not exist, return `NULL`.
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu
8. Sum list : A function that returns the sum of all the data (n) of a listint_t linked list.
- Prototype: `int sum_listint(listint_t *head);`
- If the list is empty, return `0`.
- Compile the code thi way: `gcc -Wall -pedantic -Werror -Wextra -std=
9.  Insert : A function that inserts a new node at a given position.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- Where `idx` is the index of the list where the new node should be added. Index starts at `0`.
- Returns: the address of the new node, or `NULL` if it failed.
- If it is not possible to add a new node at index `idx`, do not add the new node and return `NULL`
- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=
10. 
