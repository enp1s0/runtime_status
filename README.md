# Runtime status

## Supported

- [ ] CPU
- [ ] GPU
- [x] git

## Samples
### git

```cpp
#include <runtime_states.hpp>

int main() {
	mtk::runtime_status::print_git_info();
}
```

```
g++ -DRS_GIT_BRANCH="\"$(shell git branch | grep '\*' | sed -e 's/.* //')\"" -DRS_GIT_COMMIT="\"$(shell git rev-parse HEAD)\"" main.cpp -std=c++11
```
