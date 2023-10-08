#pragma GCC optimize('O3')

class Solution {
public:
    std::string interpret(std::string command) {
        size_t pos = command.find("()");
        while (pos != std::string::npos) {
            command.replace(pos, 2, "o");
            pos = command.find("()", pos);
        }
        pos = command.find("(al)");
        while (pos != std::string::npos) {
            command.replace(pos, 4, "al");
            pos = command.find("(al)", pos);
        }

        return command;
    }
};
