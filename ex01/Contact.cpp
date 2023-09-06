/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:37:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/06 16:02:49 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickName;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkSecret()const {
    return darkSecret;
}

int Contact::fill_the_contact() {
    firstName = "";
    while (firstName == "") {
        std::cout << "First name: ";
        getline(std::cin, firstName);
        if(firstName.empty())
            return 0;
        firstName = strtrim(firstName, " \t\v\f\r");
    }
    lastName = "";
    while (lastName == "") {
        std::cout << "Last name: ";
        getline(std::cin, lastName);
        if (lastName.empty())
            return 0;
        lastName = strtrim(lastName, " \t\v\f\r");
    }
    nickName = "";
    while (nickName == "") {
        std::cout << "Nickname: ";
        getline(std::cin, nickName);
        if (nickName.empty())
            return 0;
        nickName = strtrim(nickName, " \t\v\f\r");
    }
    phoneNumber = "";
    while (phoneNumber == "") {
        std::cout << "Phonenumber: ";
        getline(std::cin, phoneNumber);
         if (phoneNumber.empty())
            return 0;
        phoneNumber = strtrim(phoneNumber, " \t\v\f\r");
    }
    darkSecret = "";
    while (darkSecret == "") {
        std::cout << "Dark secret: ";
        getline(std::cin, darkSecret);
        if (darkSecret.empty())
            return 0;
        darkSecret = strtrim(darkSecret, " \t\v\f\r");
    }
    return (1);
}
