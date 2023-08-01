#include "lists.h"
#include "stdio.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: specifier for linked list to search for
 *
 * Return: node address from which the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
