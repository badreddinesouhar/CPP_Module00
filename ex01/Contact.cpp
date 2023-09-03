/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:37:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/03 12:47:07 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

std::string Contact::getFirstName() const {
    return first_name;
}

std::string Contact::getLastName() const {
    return last_name;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phone_number;
}

std::string Contact::getDarkSecret()const {
    return dark_secret;
}

bool char_in_set(const std::string& set, char c) {
    for (size_t i = 0; i < set.length(); ++i) {
        if (set[i] == c) {
            return true;
        }
    }
    return false;
}

std::string strtrim(const std::string& s, const std::string& set) {
    size_t i = 0;
    size_t j = s.length() - 1;

    while (i < s.length()) {
        if (!char_in_set(set, s[i])) {
            break;
        }
        i++;
    }

    while (j >= i) {
        if (!char_in_set(set, s[j])) {
            break;
        }
        j--;
    }

    return s.substr(i, j - i + 1);
}

void Contact::fill_the_contact() {
    while (first_name == "") {
        std::cout << "First name: ";
        getline(std::cin, first_name);
        first_name = strtrim(first_name, " \t");
    }
    while (last_name == "") {
        std::cout << "Last name: ";
        getline(std::cin, last_name);
        last_name = strtrim(last_name, " \t");
    }
    while (nickname == "") {
        std::cout << "Nickname: ";
        getline(std::cin, nickname);
        nickname = strtrim(nickname, " \t");
    }
    while (phone_number == "") {
        std::cout << "Phonenumber: ";
        getline(std::cin, phone_number);
        phone_number = strtrim(phone_number, " \t");
    }
    while (dark_secret == "") {
        std::cout << "Dark secret: ";
        getline(std::cin, dark_secret);
        dark_secret = strtrim(dark_secret, " \t");
    }
}
