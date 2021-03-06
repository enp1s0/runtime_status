#ifndef __RUNTIME_STATUS_CUDA_HPP__
#define __RUNTIME_STATUS_CUDA_HPP__
#include <cuda_runtime_api.h>
#include <iostream>

namespace mtk {
namespace runtime_status {
namespace cuda {
inline void print_info(const bool print_header = false) {
	if (print_header) {
		std::printf("# CUDA information\n");
	}
	int num_device;
	const auto cuda_status = cudaGetDeviceCount(&num_device);
	if (cuda_status == cudaSuccess) {
		for(int i = 0; i < num_device; i++){
			cudaDeviceProp property;
			cudaGetDeviceProperties(&property, i);
			std::printf("## -- Device %d / %d\n", i, num_device);
			std::printf("%13s : %s\n", "Name", property.name);
			std::printf("%13s : %d.%d\n", "CC", property.major, property.minor);
			std::printf("%13s : %d [kHz]\n", "Clock", property.clockRate);
			std::printf("%13s : %e [GB]\n", "Memory", property.totalGlobalMem / static_cast<float>(1lu << 30));
		}
		std::printf("## -- NVCC\n");
		std::printf("%13s : ", "NVCC version");
#if defined(__CUDACC_VER_MAJOR__) && defined(__CUDACC_VER_MINOR__) && defined(__CUDACC_VER_BUILD__)
		std::printf("%d.%d.%d\n", __CUDACC_VER_MAJOR__, __CUDACC_VER_MINOR__, __CUDACC_VER_BUILD__);
#else
		std::printf("Not provided\n");
#endif
	} else {
		std::printf("%13s : %s\n", "[Warning]", "There are no CUDA devices");
	}
}

inline void print_current_device_id(const bool print_header = false) {
	if (print_header) {
		std::printf("# CUDA information\n");
	}
	std::printf("## -- Using GPU ID\n");
	int device_id;
	
	const auto cuda_status = cudaGetDevice(&device_id);
	if (cuda_status == cudaSuccess) {
		std::printf("%13s : %d\n", "ID", device_id);
	} else {
		std::printf("%13s : %s\n", "[Warning]", "There are no CUDA devices");
	}
}
} // namespace cuda
} // namespace runtime_status
} // namespace mtk

#endif /* end of include guard */
