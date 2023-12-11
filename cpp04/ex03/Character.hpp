/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:19:11 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 13:10:55 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ICharacter.hpp"
# include "AMateria.hpp"

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
	static	int	grb;
	static	t_lst	*firstAddr;
	static	t_lst	*lastAddr;

public:
	Character();
	Character(const std::string&);
	~Character();
	Character(Character&);
	Character&  operator=(Character&);

	std::string const & getName() const;
	void 	equip(AMateria* m);
	void 	unequip(int idx);
	void 	use(int idx, ICharacter& target);

	static	void	garbageCollector(AMateria*);
};
