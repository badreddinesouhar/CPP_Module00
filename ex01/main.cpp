/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:59:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/06 15:41:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main() {
    PhoneBook phonebook;
    std::string input_line;

    while (std::cin) {
        std::cout << "Enter : ADD | SEARCH | EXIT : ";
        getline(std::cin, input_line);
        if (input_line == "ADD") {
            int all;
            all = phonebook.contacts[phonebook.contact.num % 8].fill_the_contact();
            if (phonebook.contact.num == 8) {
                phonebook.contact.p = 1;
            }
            if (all == 1)
                phonebook.contact.num++;
        } else if (input_line == "SEARCH") {
            phonebook.search();
        } else if (input_line == "EXIT") {
            return 0;
        }
    }
    return 0;
}
