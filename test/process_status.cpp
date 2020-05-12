#include <iostream>
#include <process_status.hpp>

int main() {
	mtk::runtime_status::process::print_info();
	mtk::runtime_status::process::print_using_memory_size();
}
