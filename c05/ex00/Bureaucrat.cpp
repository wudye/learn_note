/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:17:23 by mwu               #+#    #+#             */
/*   Updated: 2024/08/20 14:17:25 by mwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 0)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else 
    {    
        this->_grade = grade;
    }
    
}

Bureaucrat::Bureaucrat() : _name("default name"), _grade(150)
{
    std::cout << "default constructor Bureaucrat called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int value) : _name(name)
{
    setGrade(value);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "default destructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oper) 
{
    if (this != &oper)
    {
        this->_grade = oper._grade;
        //     setGrade(oper._grade);

        // this->_name = oper._name;
        // this->_name = oper.getName();
    }


    return *this;
}


const std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}

// void Bureaucrat::setName(const std::string name) const
// {
//     this->_name = name;
// }

void Bureaucrat::increaseGrade()
{
    int grade = this->_grade;
    grade -= 1;
    this->setGrade(grade);

}

void Bureaucrat::decreaseGrade()
{
    int grade = this->_grade;
    grade += 1;
    this->setGrade(grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low"; 
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat *a)
{
    ost <<a->getName() << ", bureaucrat grade " << a->getGrade() << "."<< std::endl;
    return ost;
}