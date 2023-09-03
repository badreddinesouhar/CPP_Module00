 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/03 12:02:36 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    contact.num = 0;
    contact.p = 0;
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

int ft_stoi(std::string str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    
    if (str[i] == '-') {
        sign *= -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sign;
}

void PhoneBook::search() {
    head();
    if (contact.p == 0) {
        for (int i = 0; i < contact.num; ++i) {
            body(*this, i);
        }
    }
    else if (contact.p == 1) {
        for (int i = 0; i < 8; ++i) {
            body(*this, i);
        }
    }
    std::string sIdx;
    std::cout << "choose an index:";
    std::cin >> sIdx;
    int idx = ft_stoi(sIdx);
    if (contact.p == 0) {
        if (0 <= idx && idx < contact.num) {
            idx_infos(*this, idx);
        } else {
            std::cout << "wrong input" << std::endl;
        }
    }
    else if (contact.p == 1) {
        if (0 <= idx && idx < 8) {
            idx_infos(*this, idx);
        } else {
            std::cout << "wrong input" << std::endl;
        }
    }
}

int main() {
    PhoneBook phonebook;
    std::string input_line;

    while (std::cin) {
        getline(std::cin, input_line);
        if (input_line == "ADD") {
            phonebook.contacts[phonebook.contact.num % 8].fill_the_contact();
            if (phonebook.contact.num == 8) {
                phonebook.contact.p = 1;
            }
            phonebook.contact.num++;
        } else if (input_line == "SEARCH") {
            phonebook.search();
        } else if (input_line == "EXIT") {
            return 0;
        }
    }
    return 0;
}
