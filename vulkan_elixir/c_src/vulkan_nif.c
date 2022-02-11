#include <stdio.h>
#include <erl_nif.h>
#include <vulkan/vulkan.h>


static ErlNifFunc vulkan_funcs[] = {

};

ERL_NIF_INIT(Elixir.Vulkan.NIF, vulkan_funcs, NULL, NULL, NULL, NULL);