#include <iostream>
#include <process_status.hpp>

int main() {
	mtk::runtime_status::print_process_info();
	mtk::runtime_status::print_process_using_memory();
}
