/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/24 23:05:02 by bsouhar          ###   ########.fr       */
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

std::string shortage(std::string input) {
    if (input.length() >= 10) {
        return input.substr(0, 10 - 1) + ".";
    } else {
        return input + std::string(10 - input.length(), ' ');
    }
}

void body(const PhoneBook& phonebook, int index) {
    std::cout << "| ";
    std::cout << index;
    std::cout << "        |";
    std::cout << shortage(phonebook.contacts[index].getFirstName());
    std::cout << "|";
    std::cout << shortage(phonebook.contacts[index].getLastName());
    std::cout << "|";
    std::cout << shortage(phonebook.contacts[index].getNickname());
    std::cout << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}


void idx_infos(const PhoneBook& phonebook, int idx) {
    std::cout << "First name: ";
    std::cout << phonebook.contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name: ";
    std::cout << phonebook.contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: ";
    std::cout << phonebook.contacts[idx].getNickname() << std::endl;
    std::cout << "Phone number: ";
    std::cout << phonebook.contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Dark secret: ";
    std::cout << phonebook.contacts[idx].getDarkSecret() << std::endl;
}

void PhoneBook::search() {
    head();
    for (int i = 0; i < contact.num; ++i) {
        body(*this, i);
    }
    int idx = -1;
    std::cout << "choose an index:";
    std::cin >> idx;
    if (0 <= idx && idx < contact.num) {
        idx_infos(*this, idx);
    } else {
        std::cout << "wrong input" << std::endl;
    }
}

int main() {
    PhoneBook phonebook;
    std::string input_line;

    while (std::cin) {
        getline(std::cin, input_line);
        if (input_line == "ADD") {
            phonebook.contacts[phonebook.contact.num % 8].fill_the_contact();
            phonebook.contact.num++;
        } else if (input_line == "SEARCH") {
            phonebook.search();
        } else if (input_line == "EXIT") {
            return 0;
        }
    }
    return 0;
}
