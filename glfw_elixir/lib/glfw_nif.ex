defmodule GLFW.NIF do
  @on_load :__on_load__

  def __on_load__ do
    :ok = :erlang.load_nif("./c_src/glfw_nif", 0)
  end

  def glfw_init(), do: :erlang.nif_error(:undef)
end
