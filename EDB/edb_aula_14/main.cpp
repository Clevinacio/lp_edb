#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <cctype>

int calculate(std::string expression);
bool isoperator(char);
int priority(char);
int process(int l, int r, char op);

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        std::cout << "Informe a expressão" << '\n';

        return 0;
    }

    std::string expression = argv[1];

    int result = calculate(expression);

    std::cout << expression << '=' << result << '\n';

    return 0;
}

int calculate(std::string expression)
{
    std::stack<int> operands;
    std::stack<char> operators;

    for (size_t i = 0; i < expression.size(); ++i)
    {
        char c = expression[i];

        if (isdigit(c))
        {
            int digit = static_cast<int>(c - 48);
            operands.push(digit);
        }
        else if (isoperator(c))
        {
            if (operators.empty())
            {
                operators.push(c);
            }
            else
            {
                int p = priority(c);
                if (p > priority(operands.top()))
                {
                    operators.push(c);
                }
                else
                {
                    while (!operators.empty() && priority(operators.top()) > p)
                    {
                        int r = operands.top();
                        operands.pop();

                        int l = operands.top();
                        operands.pop();

                        int result = process(l, r, operators.top());
                        operands.push(result);
                        operators.pop();
                    }
                    operators.push(c);
                }
            }
        }
    }

    while (!operators.empty())
    {
        int r = operands.top();
        operands.pop();

        int l = operands.top();
        operands.pop();

        int result = process(l, r, operators.top());
        operands.push(result);
        operators.pop();
    }
    return operands.top();
}

bool isoperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int priority(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }

    return 0;
}

int process(int l, int r, char op)
{
    switch (op)
    {
    case '+':
        return l + r;
        break;
    case '-':
        return l - r;
        break;
    case '*':
        return l * r;
        break;
    case '/':
        return l / r;
        break;
    default:
        return 0;
        break;
    }
}