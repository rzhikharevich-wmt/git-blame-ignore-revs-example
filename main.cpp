#include <iostream>

int lines_merged_by_formatting_change() {
    return 42;
}

void lines_split_by_formatting_change() { std::cerr << "Hello, World!\n"; }

int main() {
    lines_merged_by_formatting_change();
}
