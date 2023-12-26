/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/25 16:05:26 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <fstream>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
private:
	std::string	Target;

public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string&);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm&  operator=(const ShrubberyCreationForm&);

	void execute(Bureaucrat const & executor) const;
};
