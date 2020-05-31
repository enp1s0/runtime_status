#include <iostream>
#include <runtime_staus/hip_status.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::hip::print_info(print_header);
}
