for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        free(myFinalPtr[i][j]);
    }
    free(myFinalPtr[i]);
}
free(myFinalPtr);


void transform(struct Note **head)
{
    if ((*head)->next == NULL || *head == NULL)
    {
        return;
    }

    struct Note *previous = NULL;
    struct Note *end = *head;

    while (end->next != NULL)
    {
        previous = end;
        end = end->next;
    }

    previous->next = NULL;
    previous->next = *head;

    *head = end;
}