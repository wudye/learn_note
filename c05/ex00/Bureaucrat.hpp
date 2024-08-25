/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:17:37 by mwu               #+#    #+#             */
/*   Updated: 2024/08/20 14:17:38 by mwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int value);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &oper);

        const std::string getName();
        int getGrade();

        // void setName(const std::string name) const;
        void setGrade(int grade);

        void increaseGrade();
        void decreaseGrade();

        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &ost, Bureaucrat *a);

#endif
