#include "blockchain/block.h"

Block::Block(
        int _number,
        const std::string& _previousHash,
        const std::shared_ptr<std::string>& _body,
        int _elementsCount ) {
    number = _number;
    previousHash = _previousHash;
    body = _body;
    elementsCount = _elementsCount;
    hash = createHash();
}

void Block::getHeader() {
    std::cout << "Header: " << std::endl;
    std::cout << "-- Block number: " << number << std::endl;
    std::cout << "-- Previous hash: " << previousHash << std::endl;
}

void Block::getBody() {
    std::cout << "Body:" << std::endl;
    for (auto i = 0; i < elementsCount; i++) {
        std::cout << "-- Data element " << i + 1 << ": " << body.get()[i] << std::endl;
    }
}

void Block::getHash() {
    std::cout << "Hash: " << std::endl;
    std::cout << "-- " << hash << std::endl;
}

std::string Block::createHash() {
    std::string _hash = std::to_string(number) + previousHash;
    for (auto i = 0; i < elementsCount; i++) {
        _hash += body.get()[i];
    }
    return _hash;
}
