type Water struct {
	Temperature int
}

type Teapot struct {
	Temp int
}

func NewWater(t int) Water {
	var water Water
	water.Temperature = t
	return water
}

func NewTeapot(water Water) Teapot {
	var teapot Teapot
	teapot.Temp = water.Temperature
	return teapot
}

func (teapot Teapot) is_boiling() bool {
	return teapot.Temp >= 100
}

func (teapot *Teapot) heat_up(hp int) int {
	teapot.Temp = teapot.Temp + hp
	return 0
}
