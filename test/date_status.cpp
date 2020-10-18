#include <iostream>
#include <runtime_status/date.hpp>

constexpr bool print_header = true;

int main() {
	mtk::runtime_status::date::print_info(print_header);
}
