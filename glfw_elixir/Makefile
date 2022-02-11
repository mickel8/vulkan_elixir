CC=gcc
CFLAGS=-fpic -shared -Wall
INCLUDE_FLAGS=-I"/home/michal/.asdf/installs/erlang/24.0/usr/include"

compile: c_src/glfw_nif.c
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) $< -o c_src/glfw_nif.so