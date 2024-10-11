package main

import (
	"fmt"
	"sort"
)

type Item struct {
    data     int
    priority int
}

type PriorityQueue struct {
    items []Item
}

func (pq *PriorityQueue) Sort() {
	sort.Slice(pq.items, func(i, j int) bool {
		return pq.items[i].priority < pq.items[j].priority
	})
}

func (pq *PriorityQueue) Enqueue(data Item) {
	pq.items = append(pq.items, data)
	pq.Sort()
}

func (pq *PriorityQueue) Dequeue() {
	pq.Sort()
	pq.items = pq.items[1:]
}

func (pq *PriorityQueue) Front() (Item, error) {
	if len(pq.items) == 0 {
		return Item{}, fmt.Errorf("queue is empty")
	}
	pq.Sort()
	return pq.items[0], nil
}

func (pq *PriorityQueue) IsEmpty() bool {
	if len(pq.items) == 0 {
		return true
	} else {
		return false
	}
}

func (pq *PriorityQueue) Print() {
	for _, item := range pq.items {
		fmt.Print(item, "")
	}
	fmt.Println()
}

func main() {
	myQueue := PriorityQueue{[]Item{}}
	myQueue.Print()
	fmt.Println(myQueue.IsEmpty())
	myQueue.Enqueue(Item{0, 1})
    myQueue.Enqueue(Item{1, 4})
    myQueue.Enqueue(Item{2, 3})
    myQueue.Enqueue(Item{3, 0})
    myQueue.Enqueue(Item{4, 2})

    myQueue.Print()
    myQueue.Dequeue()
    myQueue.Print()
}