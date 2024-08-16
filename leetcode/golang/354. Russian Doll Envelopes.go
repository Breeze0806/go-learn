package golang

import "sort"

func maxEnvelopes(envelopes [][]int) int {
	type envelope struct {
		w int
		h int
	}
	var ea []envelope
	for i := range envelopes {
		ea = append(ea, envelope{
			w: envelopes[i][0],
			h: envelopes[i][1],
		})
	}

	sort.Slice(ea, func(i, j int) bool {
		return ea[i].w < ea[j].w || (ea[i].w == ea[j].w && ea[i].h > ea[j].h)
	})

	var ans []int
	for _, v := range ea {
		x := sort.SearchInts(ans, v.h)
		if x == len(ans) {
			ans = append(ans, v.h)
		} else {
			ans[x] = v.h
		}
	}

	return len(ans)
}
