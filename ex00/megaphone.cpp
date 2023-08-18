#include <iostream>
#include <cctype>

void print_err()
{
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

int main(int argc, char **argv)
{
    int i = 0;
    int ac = 1;
    std::string aa;

    if (argc < 2)
        print_err();
    else
    {
        while (ac < argc)
        {
            aa = "";
            i = 0;
            while (argv[ac][i])
            {
                aa += std::toupper(argv[ac][i]);
                i++;
            }
            std::cout << aa;
            ac++;
        }
    }
    std::cout << "\n";
}

