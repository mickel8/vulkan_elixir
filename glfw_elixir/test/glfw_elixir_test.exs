defmodule GlfwElixirTest do
  use ExUnit.Case
  doctest GlfwElixir

  test "greets the world" do
    assert GlfwElixir.hello() == :world
  end
end
