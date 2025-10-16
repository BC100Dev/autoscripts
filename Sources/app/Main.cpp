#include <iostream>
#include <filesystem>

#include <unistd.h>

int main(int argc, char** argv) {
    if (argc == 1) {
        std::cout << "usage: " << argv[0] << " [options]\n" << std::endl;
        std::cout << "options:" << std::endl;
        std::cout << "   --startup         Launches startup scripts" << std::endl;
        std::cout << "   --shutdown        Launches scripts for shutdown" << std::endl;
        std::cout << "   --login           Launches scripts on login" << std::endl;
        std::cout << "   --logout          Launches scripts on logout" << std::endl;
        std::cout << "   --suspend         Launches scripts, when system suspends" << std::endl;
        std::cout << "   --sleep           Launches scripts, when the system is going to sleep" << std::endl;
        std::cout << "   --hibernate       Launches scripts, when the system is going to hibernate" << std::endl;
        std::cout << "   --invoke [label]  Launches specific scripts with the given label\n" << std::endl;
        std::cout << "AutoScripts, developed by BC100Dev, version 1.0" << std::endl;
        return 0;
    }

    if (argc == 3 && getppid() == 1) {
        std::string a1 = argv[1];
        std::string a2 = argv[2];

        if (a1 == "pre")
    }

    return 0;
}