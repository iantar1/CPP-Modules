/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:19:11 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 17:30:08 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ICharacter.hpp"

typedef struct s_lst
{
	struct s_lst*	next;
	AMateria*		addr;
}			t_lst;

class Character : public ICharacter
{
private:
	std::string	Name;
	AMateria*	slot[4];
	int			grb;

public:
	Character(/* args */);
	Character(std::string&);
	~Character();
	Character(Character&);
	Character&  operator=(Character&);

	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
	void	garbageCollector(AMateria*);
};
