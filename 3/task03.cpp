#include <iostream> 
#include <stack> 

using namespace std;

struct BinaryOperation {
    char type;
    bool left_associative;
    bool right_associative;
    int priority;
};

const int len = 6;

bool FindInTheArrayOfOperators(BinaryOperation Operations[], char operation) {
    for (int i = 0; i < len; i++) {
        if (Operations[i].type == operation) {
            return true;
        }
    }

    return false;
}

int ReturnPriority(BinaryOperation Operations[], char operation) {
    int priority;

    for (int i = 0; i < len; i++) {
        if (Operations[i].type == operation) {
            return Operations[i].priority;
        }
    }

    return 7;
}

bool isLeftAssociative(char operation, BinaryOperation Operations[]) {
    for (int i = 0; i < len; i++) {
        if (Operations[i].type == operation) {
            return Operations[i].left_associative;
        }
    }

    return false;
}

string TranslationIntoReversePolishNotation(string sourceString) {
    string resultString = "";
    stack<char> stack;
    stack.push('#'); 

    BinaryOperation remain{ '%', true, false, 5 };
    BinaryOperation degree{ '^', false, true, 4 };
    BinaryOperation comp{ '*', true, false, 5 };
    BinaryOperation division{ '/', true, false , 5 };
    BinaryOperation sum{ '+', true, false, 6 };
    BinaryOperation diff{ '-', true, false, 6 };
    BinaryOperation binaryOperations[len]{ remain, degree, division, comp, sum, diff };

    for (int i = 0; i < sourceString.size(); i++) {

        if (sourceString[i] >= '0' && sourceString[i] <= '9') {
            resultString += sourceString[i];

            if (sourceString[i + 1] < '0' || sourceString[i + 1] > '9') {
                resultString += ' ';
            }
        }

        else if (sourceString[i] == '(') {
            stack.push('(');
        }

        else if (sourceString[i] == ')') {
            while (stack.size() != 1 && stack.top() != '(') {
                resultString += stack.top();
                resultString += ' ';
                stack.pop();
            }

            if (stack.size() != 1) {
                stack.pop();
            }
            else {
                return "Error!";
            }
        }

        else if (FindInTheArrayOfOperators(binaryOperations, sourceString[i])) { 
            while (ReturnPriority(binaryOperations, stack.top()) < ReturnPriority(binaryOperations, sourceString[i]) || (ReturnPriority(binaryOperations, stack.top()) == ReturnPriority(binaryOperations, sourceString[i]) && isLeftAssociative(stack.top(), binaryOperations))) {
                resultString += stack.top();
                resultString += ' ';
                stack.pop();
            }

            stack.push(sourceString[i]);
        }
    }

    while (stack.size() > 1) {
        if (stack.top() == '(') {
            return "Error!";
        }

        resultString += stack.top();
        resultString += ' ';
        stack.pop();
    }

    resultString.erase(resultString.size() - 1, resultString.size());

    return resultString;

}

int main() {

    string sourceString;
    cin >> sourceString;

    string resultString = TranslationIntoReversePolishNotation(sourceString);

    cout << resultString;
}
