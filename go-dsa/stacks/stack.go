package main

import "fmt"

type Stack struct {
    items []string
}

func (s *Stack) Push(data string) {
    s.items = append(s.items, data)
}

func (s *Stack) Pop() {
    if s.IsEmpty() {
        return
    }
    s.items = s.items[:len(s.items)-1]
}

func (s *Stack) Top() (string, error) {
    if s.IsEmpty() {
        return "", fmt.Errorf("stack is empty")
    }
    return s.items[len(s.items) - 1], nil
}

func (s *Stack) IsEmpty() bool {
    if len(s.items) == 0 {
        return true
    }
    return false
}

func (s *Stack) Print() {
    for _, item := range s.items {
        fmt.Print(item, " ")
    }
    fmt.Println()
}


func minLength(s string) int {
        st := Stack{}
        for _, char := range s {
                    top, err := st.Top()
            if !st.IsEmpty() && err == nil && ((top == "A" && string(char) == "B") || (top == "C" && string(char) == "D")) {
                st.Pop()
            } else {
                	st.Push(string(char)) // Convert rune to string
            }

        }
        return len(st.items);
}

func main () {
	fmt.Println(minLength("ABFCACDB"))
}