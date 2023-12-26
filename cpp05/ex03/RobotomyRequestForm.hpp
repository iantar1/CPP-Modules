/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:32 by iantar            #+#    #+#             */
/*   Updated: 2023/12/25 15:58:38 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string Target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm&    operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;    
};

