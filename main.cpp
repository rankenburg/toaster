#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    time_t start_time = time(NULL);
    int random_time = rand() % 31;
    if (random_time == 0) {
        random_time = random_time + 1;
    }

    std::cout << "Toasting toast..." << std::endl;

    while ((time(NULL) - start_time) < random_time) {
        continue;
    }

    std::cout << "Toast is ready! It took " << (time(NULL) - start_time) << " seconds." << std::endl;

    return 0;
}