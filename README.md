# Runtime status

## Supported

- [ ] CPU
- [ ] GPU
- [x] git
- [x] process

## Samples
### git

```cpp
#include <git_status.hpp>

int main() {
	mtk::runtime_status::git::print_info();
}
```

```bash
g++ -DRS_GIT_BRANCH="\"$(git branch | grep '\*' | sed -e 's/.* //')\"" -DRS_GIT_COMMIT="\"$(git rev-parse HEAD)\"" main.cpp -std=c++11
```

### process

```cpp
#include <process_status.hpp>

int main() {
	mtk::runtime_status::process::print_info();
}
```
