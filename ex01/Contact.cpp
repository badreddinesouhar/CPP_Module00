/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:37:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/23 11:26:22 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PhoneBook.hpp"
#include "Contact.hpp"


Contact::Contact() {
    // Initialize member variables or perform any necessary setup
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
