# Runtime status

## Supported

- [ ] CPU
- [x] GPU (CUDA, HIP)
- [x] git
- [x] process

## Samples
### git

```cpp
#include <runtime_status/git.hpp>

int main() {
	mtk::runtime_status::git::print_info();
}
```

```bash
g++ -DRS_GIT_BRANCH="\"$(git branch | grep '\*' | sed -e 's/.* //')\"" -DRS_GIT_COMMIT="\"$(git rev-parse HEAD)\"" main.cpp -std=c++11
```

### process

```cpp
#include <runtime_status/process.hpp>

int main() {
	mtk::runtime_status::process::print_info();
	mtk::runtime_status::process::print_using_memory_size();
}

```

### GPU (CUDA)

```cpp
#include <runtime_status/cuda.hpp>

int main() {
	mtk::runtime_status::cuda::print_info();
}
```

### GPU (HIP)

```cpp
#include <runtime_status/hip.hpp>

int main() {
	mtk::runtime_status::hip::print_info();
}
```
