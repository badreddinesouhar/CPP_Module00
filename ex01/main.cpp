/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:29:13 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/19 15:29:14 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string input_line;

    while (std::cin)
    {
        getline(std::cin, input_line);
        if (input_line == "ADD")
            std::cout << "ASFDGAS" << std::endl;
        else if (input_line == "SEARCH")
            std::cout << "sedddrchii" << std::endl ;
        else if (input_line == "EXIT")
            return (0);
    }
    return (0);
}
