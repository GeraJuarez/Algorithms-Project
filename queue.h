#ifndef __QUEUE_H_INCLUDED__
#define __QUEUE_H_INCLUDED__

template <typename E> class Queue{
    private:
        struct node{
            E *e;
            node *next;
        };
        int size;
        node *top;
        node *bot;
    public:
        Queue(int arr_size);
        ~Queue();
        bool is_empty();
        int get_size();
        void enqueue();
        E * dequeue();
};

template <typename E>
Queue<E>::Queue(int arr_size){
    this->size = 0;
    this->bot = this->top = NULL;
}
template <typename E>
Queue<E>::~Queue(){
    for(node *tmp = bot, *next = NULL; tmp != NULL; tmp = next){
        next = tmp->next;
        delete tmp;
    }
}
template <typename E>
bool Queue<E>::is_empty(){
    return this->size == 0;
}
template <typename E>
void Queue<E>::get_size(){
    return this->size;
}
template <typename E>
void Queue<E>::enqueue(E *value){
    node *n = new node;
    node->next = NULL;
    node->e = value;
    if(this->top != NULL)
        this->top->next = n;
    else
        this->bot = n;
    this->top = n;
    ++this->size;
}
template <typename E>
E * Queue<E>::dequeue(E *e){
    if(this->is_empty()) return NULL;
    E *e = this->bot->e;
    node to_del = this->bot;
    this->bot = this->bot->next;
    if(this->bot == NULL)
        this->top = NULL;
    delete to_del;
    --this->size;
    return e;
}

#endif
