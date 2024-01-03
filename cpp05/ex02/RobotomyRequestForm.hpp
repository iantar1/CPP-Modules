/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:32 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 13:32:27 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

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

