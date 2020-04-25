#ifndef __RUNTIME_STATUS_HPP__
#define __RUNTIME_STATUS_HPP__
#include <iostream>
#include <cstdlib>

#ifndef RS_GIT_BRANCH
#define RS_GIT_BRANCH "NOT PROVIDED"
#endif
#ifndef RS_GIT_COMMIT
#define RS_GIT_COMMIT "NOT PROVIDED"
#endif

namespace mtk {
namespace runtime_status {
inline void print_git_info() {
	std::printf("%25s : %s\n", "commit at building", RS_GIT_COMMIT);
	std::printf("%25s : %s\n", "branch at building", RS_GIT_BRANCH);
}
} // namespace runtime_status
} // namespace mtk

#endif /* end of include guard */
