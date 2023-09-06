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

PhoneBook::~PhoneBook() {}

void head() {
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "| index    |first name| last name| nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

std::string shortage(std::string input) {
    if (input.length() >= 10) {
        return input.substr(0, 9) + ".";
    } 
    else {
        return (input);
    }
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

void body(const PhoneBook& phoneBook, int index) {
    (void)phoneBook;
    std::cout << "|" << std::setw(10) << std::right << index;
    std::cout << "|" << std::setw(10) << std::right << shortage(phoneBook.contacts[index].getFirstName());
    std::cout << "|" << std::setw(10) << std::right << shortage(phoneBook.contacts[index].getLastName());
    std::cout << "|" << std::setw(10) << std::right << shortage(phoneBook.contacts[index].getNickname());
    std::cout << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
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
    while (sIdx == "") {
        std::cout << "choose an index:";
        getline(std::cin, sIdx);
        if (sIdx.empty())
            return ;
        sIdx = strtrim(sIdx, " \t");
    }
    if (isDigit(sIdx) == 1) {
        std::cout << "wrong input" << std::endl;
        return ;
    }
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
