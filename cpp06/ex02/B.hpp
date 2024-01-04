/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:00:04 by iantar            #+#    #+#             */
/*   Updated: 2024/01/04 15:45:15 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Base.hpp"

class B : public Base
{
private:

public:
	B();
	~B();
	B(const B&);
	B&  operator=(const B&);
};
