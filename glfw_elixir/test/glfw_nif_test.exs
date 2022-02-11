defmodule GLFW.NIF.Test do
  use ExUnit.Case

  test "" do
    :ok = GLFW.NIF.glfw_init()
  end
end
