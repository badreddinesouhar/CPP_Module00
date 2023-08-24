/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:37:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/24 22:27:51 by bsouhar          ###   ########.fr       */
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

void fill_the_contact(Contact& contact)
{
    std::cout << "First name: ";
    std::cin >> contact.first_name; 
    std::cout << "Last name: ";
    std::cin >> contact.last_name;
    std::cout << "Nickname: ";
    std::cin >> contact.nickname; 
    std::cout << "Phone number: ";
    std::cin >> contact.phone_number; 
    std::cout << "Dark secret: ";
    std::cin >> contact.dark_secret;
}
