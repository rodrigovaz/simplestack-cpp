# Simple Stack

I use simple templates like this to avoid huge error messages from C++ STL and help me see what's happening in memory when testing algorithms functionality.

I also wrote the `#ifdef USE_MAIN` just to make clear where is the code snippet and where is the example of usage.

## Dependencies

- g++
- make
- docker

for ubuntu environment you may run:

```bash
sudo apt install make g++ docker.io
```

## How to run

The build proccess generates the `./main` binary which can be executed directly from shell.

```bash
#build inside a docker container
make dockerbuild

#building the first time
make build

#build and run
make run

#clean
make clean

#clean, build and run
make rerun
```