#include <iostream>
#include <runtime_status/git.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::git::print_info(print_header);
}
