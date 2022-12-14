/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    Zombie_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{

    std::string line_name;
    char num[2];

    if (N <= 0)
        return NULL;
    Zombie* Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        num[0] = (i + 1) + '0';
        num[1] = '\0';
        line_name = name + " " + num;
        Horde[i].setName(line_name);
    }
    return (Horde);
}
