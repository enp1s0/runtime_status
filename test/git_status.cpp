#include <iostream>
#include <git_status.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::git::print_info(print_header);
}
