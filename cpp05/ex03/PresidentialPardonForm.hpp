/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:25 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 15:46:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string Target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm&    operator=(const PresidentialPardonForm&);
	~PresidentialPardonForm();


	void execute(Bureaucrat const & executor) const;
};