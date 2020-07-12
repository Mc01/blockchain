#include <vector>
#include "blockchain/block.h"

Block::Block(
        int _number,
        const std::string& _previousHash,
        StringVector _dataVector ) {
    this->number = _number;
    this->previousHash = _previousHash;

    this->dataElements = std::make_shared<StringVector>(_dataVector);
    this->body = std::shared_ptr<std::string>(this->dataElements->data());

    this->elementsCount = _dataVector.size();
    this->hash = createHash();
}

void Block::getHeader() {
    std::cout << "Header: " << std::endl;
    std::cout << "-- Block number: " << this->number << std::endl;
    std::cout << "-- Previous hash: " << this->previousHash << std::endl;
}

void Block::getBody() {
    std::cout << "Body:" << std::endl;
    for (auto i = 0; i < this->elementsCount; i++) {
        std::cout << "-- Data element " << i + 1 << ": " << this->body.get()[i] << std::endl;
    }
}

void Block::getHash() {
    std::cout << "Hash: " << std::endl;
    std::cout << "-- " << this->hash << std::endl;
}

std::string Block::createHash() {
    std::string _hash = std::to_string(this->number) + this->previousHash;
    for (auto i = 0; i < this->elementsCount; i++) {
        _hash += this->body.get()[i];
    }
    return _hash;
}
