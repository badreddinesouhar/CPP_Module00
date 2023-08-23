/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/23 11:53:47 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() {
    // Initialize member variables or perform any necessary setup
}

void head()
{
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "first name | last name | nickname | phone number |" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
}

void search()
{
    head();
    // body
}

int main()
{
    PhoneBook phonebook;
    std::string input_line;
    int i = 0;
    
    while (std::cin)
    {
        getline(std::cin, input_line);
        if (input_line == "ADD")
            fill_the_contact(phonebook.contacts[i]);
        else if (input_line == "SEARCH")
            search();
        else if (input_line == "EXIT")
            return (0);
    }
    return (0);
}
