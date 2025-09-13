bin/program : scr/main.cpp include/Foco.hpp include/EstadoFoco.hpp
	c++ srs/main.cpp -o bin/programa -I include

run: bin/programa
	./bin/programa

bin/memoria : src/memoria.cpp
	c++ src/memoria.cpp -o bin/memoria

runMemoria : bin/memoria
	./bin/memoria
