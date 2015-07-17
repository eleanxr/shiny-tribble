all: ./build ./build/out/Default/gridsolve

./build: gridsolve.gyp
	gyp gridsolve.gyp --depth=. -f make --generator-output=./build

./build/out/Default/gridsolve: ./build
	make -C ./build

clean:
	rm -rf ./build
