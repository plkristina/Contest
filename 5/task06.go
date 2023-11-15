type Box struct {
	kitty Cat
}

type Cat struct {
	Res int
}

func (box Box) open() Cat {
	box.kitty.Res = rand.Int() % 2
	return box.kitty
}

func (cat Cat) is_alive() bool {
	return cat.Res == 0
}
