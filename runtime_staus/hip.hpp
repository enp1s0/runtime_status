#ifndef __RUNTIME_STATUS_CUDA_HPP__
#define __RUNTIME_STATUS_CUDA_HPP__
#include <iostream>

namespace mtk {
namespace runtime_status {
namespace hip {
inline void print_info(const bool print_header = false) {
	if (print_header) {
		std::printf("# HIP information\n");
	}
	int num_device;
	hipGetDeviceCount(&num_device);
	for(int i = 0; i < num_device; i++){
		hipDeviceProp property;
		hipGetDeviceProperties(&property, i);
		std::printf("## -- Device %d\n", i);
		std::printf("%10s : %s\n", "Name", property.name);
		std::printf("%10s : %d [kHz]\n", "Clock", property.clockRate);
		std::printf("%10s : %e [GB]\n", "Memory", property.totalGlobalMem / static_cast<float>(1lu << 30));
	}
}
} // namespace hip
} // namespace runtime_status
} // namespace mtk

#endif /* end of include guard */
