/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:25 by iantar            #+#    #+#             */
/*   Updated: 2023/12/25 15:57:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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