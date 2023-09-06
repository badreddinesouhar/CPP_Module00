/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:17:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/03 14:28:58 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

int isDigit(std::string str) {
	std::string::size_type i = 0;
    while (i < str.length()) {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        }
        else if (str[i] < '0' || str[i] > '9' ) {
            return (1);
        }
    }
    return (0);
}

int ft_stoi(std::string str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    
    if (str[i] == '-') {
        sign *= -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sign;
}
