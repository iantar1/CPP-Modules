/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:58:32 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 21:30:20 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain(/* args */);
    ~Brain();
    Brain(const Brain&);
    Brain&  operator=(const Brain&);

    const std::string& getIdea(int index) const;
    void        setIdea(int index, const std::string& str);

    
};

