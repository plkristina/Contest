Any::Any(int* data) {
    this->data = data;
    this->type = Type::INT;
}

Any::Any(double* data) {
    this->data = data;
    this->type = Type::DOUBLE;
}

Any::Any(std::string* data) {
    this->data = data;
    this->type = Type::STRING;
}

Any::Any(std::vector<Any*>* data) {
    this->data = data;
    this->type = Type::VECTOR_ANY_PTR;
}

Any::~Any() {
    if (this->type == Type::VECTOR_ANY_PTR) {
        delete[] this->data;
    }
    else {
        delete this->data;
    }
}

Any::operator int() {
    if (this->type != Type::INT) {
        throw "";
    }
    return *static_cast<int*>(this->data);
}
Any::operator double() {
    if (this->type != Type::DOUBLE) {
        throw "";
    }
    return *static_cast<double*>(this->data);
}
Any::operator std::string() {
    if (this->type != Type::STRING) {
        throw "";
    }
    return *static_cast<std::string*>(this->data);
}

Any::operator std::vector<Any*>* () {
    if (this->type != Type::VECTOR_ANY_PTR) {
        throw "";
    }
    return static_cast<std::vector<Any*>*>(this->data);
}

std::ostream& operator<<(std::ostream& out, const Any& result) {
    if (result.type == Any::Type::INT) {
        out << *static_cast<int*>(result.data);
    }
    else if (result.type == Any::Type::DOUBLE) {
        out << *static_cast<double*>(result.data);
    }
    else if (result.type == Any::Type::STRING) {
        out << *static_cast<std::string*>(result.data);
    }
    else {
        std::vector<Any*> vec = *static_cast<std::vector<Any*>*>(result.data);
        for (auto obj : vec) {
            out << *obj << " ";
        }
    }
    return out;
}
