MH.png : MH.dat MH.py
	python MH.py
MH.dat : MH.x
	./MH.x > MH.dat
MH.x : MH.cpp
	c++ MH.cpp -o MH.x

clean : 
	rm MH.x MH.dat MH.png