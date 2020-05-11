#ifndef __PROCESS_STATUS_HPP__
#define __PROCESS_STATUS_HPP__

#include "proc-status/proc_status.hpp"

namespace mtk {
namespace runtime_status {
void print_process_info() {
	proc_status::proc_status proc_status;
	proc_status.load_self_info();

	std::printf("# process information\n");
	std::printf("%10s : %s\n", "Name", proc_status.get_Name().c_str());
}
} // namespace runtime_status
} // namespace mtk
#endif /* end of include guard */
