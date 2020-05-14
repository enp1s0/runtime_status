#include <iostream>
#include <process_status.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::process::print_info(print_header);
	mtk::runtime_status::process::print_using_memory_size(print_header);
}
