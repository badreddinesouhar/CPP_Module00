/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/23 22:15:02 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    contact.num = 0;
}

void head() {
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "| index    |first name| last name| nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void body(const PhoneBook& phonebook, int index) {
    std::cout << "| ";
    std::cout << index;
    std::cout << "        |";
    std::cout << phonebook.contacts[index].getFirstName();
    std::cout << " |";
    std::cout << phonebook.contacts[index].getLastName();
    std::cout << " |";
    std::cout << phonebook.contacts[index].getNickname();
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::search() {
    head();
    for (int i = 0; i < contact.num; ++i) {
        body(*this, i);
    }
}

int main() {
    PhoneBook phonebook;
    std::string input_line;

    while (std::cin) {
        getline(std::cin, input_line);
        if (input_line == "ADD")
        {
            fill_the_contact(phonebook.contacts[phonebook.contact.num]);
            phonebook.contact.num++;
        }
        else if (input_line == "SEARCH")
            phonebook.search();
        else if (input_line == "EXIT")
            return 0;
    }
    return 0;
}


