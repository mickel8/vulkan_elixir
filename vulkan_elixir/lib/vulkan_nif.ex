defmodule Vulkan.NIF do
  @on_load :__on_load__

  def __on_load__ do
    :ok = :erlang.load_nif("./c_src/vulkan_nif", 0)
  end

end
