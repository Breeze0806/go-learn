package golang

import "container/heap"

type IntHeap []int

var n int

func (h IntHeap) Len() int           { return n }
func (h IntHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h IntHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *IntHeap) Push(x interface{}) {
	// Push and Pop use pointer receivers because they modify the slice's length,
	// not just its contents.
	if n == len(*h) {
		*h = append(*h, x.(int))
	} else {
		(*h)[n] = x.(int)
	}
	n++
}

func (h *IntHeap) Pop() interface{} {
	n--
	return (*h)[n]
}

func thirdMax(nums []int) int {
	h := &IntHeap{}
	n = 0
	m := make(map[int]int, 3)
	heap.Init(h)
	for _, v := range nums {
		if h.Len() < 3 {
			if _, ok := m[v]; !ok {
				heap.Push(h, v)
				m[v] = 1
			}
		} else {
			if (*h)[0] < v {
				if _, ok := m[v]; !ok {
					delete(m, heap.Pop(h).(int))
					m[v] = 1
					heap.Push(h, v)
				}
			}
		}
	}

	if h.Len() == 2 {
		return (*h)[1]
	} else {
		return (*h)[0]
	}
}
