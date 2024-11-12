#include <iostream>
#include <format>

int main() {
	std::cout << "AND lógico (&&)\n"
		<< std::format("false && false: {}\n", false && false)
		<< std::format("false && true: {}\n", false && true)
		<< std::format("true && false: {}\n", true && false)
		<< std::format("true && true: {}\n\n", true && true);

	std::cout << "OR lógico (||)\n"
		<< std::format("false || false: {}\n", false || false)
		<< std::format("false || true: {}\n", false || true)
		<< std::format("true || false: {}\n", true || false)
		<< std::format("true || true: {}\n\n", true || true);

	std::cout << "NOT lógico (!)\n"
		<< std::format("!false: {}\n", !false)
		<< std::format("!true: {}\n", !true);


	return 0;
}
