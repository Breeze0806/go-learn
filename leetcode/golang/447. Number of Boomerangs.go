package golang

func distance(point1 []int, point2 []int) int {
	return (point1[0]-point2[0])*(point1[0]-point2[0]) + (point1[1]-point2[1])*(point1[1]-point2[1])
}

func numberOfBoomerangs(points [][]int) int {
	if len(points) < 3 {
		return 0
	}

	sum := 0

	for i := 0; i < len(points); i++ {
		dist_map := make(map[int]int, len(points))
		for j := 0; j < len(points); j++ {
			if i == j {
				continue
			}
			dist := distance(points[i], points[j])
			if _, ok := dist_map[dist]; !ok {
				dist_map[dist] = 1
			} else {
				dist_map[dist]++
			}

		}
		for _, v := range dist_map {
			sum += v * (v - 1)
		}
	}

	return sum
}
