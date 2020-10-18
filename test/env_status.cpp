#include <iostream>
#include <runtime_status/env.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::env::print_runtime_env("PATH");
}
