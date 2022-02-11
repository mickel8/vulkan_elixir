#include <stdio.h>
#include <erl_nif.h>
// #include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#define ERROR(env, msg)                                                        \
  ERL_NIF_TERM atom = enif_make_atom(env, "error");                            \
  ERL_NIF_TERM msg_term = enif_make_string(env, msg, ERL_NIF_LATIN1);          \
  return enif_make_tuple2(env, atom, msg_term);


static ERL_NIF_TERM glfwInit_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]) {
    if (!glfwInit()) {
        ERROR(env, "Couldn't initialize glfw")
    } else {
        return enif_make_atom(env, "ok");
    }
}

// static ERL_NIF_TERM glfwCreateWindow_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]) {

// }

static ErlNifFunc glfw_funcs[] = {
    {"glfw_init", 0, glfwInit_nif},
    // {"glfw_create_window", 0, glfwCreateWindow_nif}
};

ERL_NIF_INIT(Elixir.GLFW.NIF, glfw_funcs, NULL, NULL, NULL, NULL);