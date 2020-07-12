#include "blockchain/blockchain.h"

int main() {
    std::cout << " -------------------- " << std::endl;
    std::cout << "Start of blockchain node" << std::endl;
    std::cout << " -------------------- " << std::endl;

    Blockchain blockchain = Blockchain();

    blockchain.addDataElement("Hello");
    blockchain.addDataElement("World");
    blockchain.createBlock();

    blockchain.addDataElement("Bye");
    blockchain.addDataElement("World");
    blockchain.createBlock();

    blockchain.getBlock(0);
    blockchain.getBlock(1);

    std::cout << " -------------------- " << std::endl;
    std::cout << "End of blockchain node" << std::endl;
    std::cout << " -------------------- " << std::endl;
    return 0;
}
