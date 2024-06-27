all: build execute

configure:
	cmake --preset=unix-debug

build:
	cmake --build --preset=unix-debug

execute:
	./build/unix-debug/src/musizualizer/musizualizer
