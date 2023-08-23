/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:28 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/23 21:49:33 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    Contact contacts[8];
    struct {
        int num;
    } contact;
    void fill_the_contact(Contact& contact);
    void search();
    void searchContact(const std::string& searchTerm);
};

#endif
