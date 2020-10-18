#include <iostream>
#include <runtime_status/cuda.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::cuda::print_info(print_header);
	mtk::runtime_status::cuda::print_current_device_id(print_header);
}
