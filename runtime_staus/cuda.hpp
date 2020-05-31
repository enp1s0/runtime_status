#ifndef __RUNTIME_STATUS_CUDA_HPP__
#define __RUNTIME_STATUS_CUDA_HPP__
#include <cuda_runtime_api.h>
#include <iostream>
#include <vector>

namespace mtk {
namespace runtime_status {
namespace cuda {
inline void print_info(const bool print_header = false) {
	if (print_header) {
		std::printf("# CUDA information\n");
	}
	int num_device;
	cudaGetDeviceCount(&num_device);
	for(int i = 0; i < num_device; i++){
		cudaDeviceProp property;
		cudaGetDeviceProperties(&property, i);
		std::printf("## -- Device %d\n", i);
		std::printf("%10s : %s\n", "Name", property.name);
		std::printf("%10s : %d.%d\n", "CC", property.major, property.minor);
		std::printf("%10s : %d [kHz]\n", "Clock", property.clockRate);
		std::printf("%10s : %e [GB]\n", "Memory", property.totalGlobalMem / static_cast<float>(1lu << 30));
	}
}
} // namespace cuda
} // namespace runtime_status
} // namespace mtk

#endif /* end of include guard */
