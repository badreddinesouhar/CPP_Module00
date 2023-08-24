/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:37:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/24 23:03:15 by bsouhar          ###   ########.fr       */
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

void Contact::fill_the_contact()
{
    std::cout << "First name: ";
    std::cin >> first_name; 
    std::cout << "Last name: ";
    std::cin >> last_name;
    std::cout << "Nickname: ";
    std::cin >> nickname; 
    std::cout << "Phone number: ";
    std::cin >> phone_number; 
    std::cout << "Dark secret: ";
    std::cin >> dark_secret;
}
