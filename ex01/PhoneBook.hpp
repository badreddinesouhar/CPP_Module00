/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:28 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/06 15:25:51 by bsouhar          ###   ########.fr       */
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
    ~PhoneBook();

    Contact contacts[8];
    struct {
        int num;
        int p;
    } contact;
    void search();
    void searchContact(const std::string& searchTerm);
};

std::string strtrim(const std::string& s, const std::string& set);
int ft_stoi(std::string str);
int isDigit(std::string str);

#endif
