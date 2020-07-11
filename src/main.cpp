#include "blockchain/blockchain.h"

int main() {
    std::cout << " -------------------- " << std::endl;
    std::cout << "Start of blockchain node" << std::endl;
    std::cout << " -------------------- " << std::endl;

    Blockchain blockchain = Blockchain();
    blockchain.addDataElement("Hello");
    blockchain.addDataElement("World");
    blockchain.createBlock();

    std::cout << " -------------------- " << std::endl;
    std::cout << "End of blockchain node" << std::endl;
    std::cout << " -------------------- " << std::endl;
    return 0;
}
