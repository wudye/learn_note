/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:17:48 by mwu               #+#    #+#             */
/*   Updated: 2024/08/20 14:17:50 by mwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

void testNormal()
{
    std::cout << "test create  should not throw anything" << std::endl;
    // std::string test = "hello";
    // test = "aa";
    // const string test1 ="hhh";
    // test1 = "bbb";
    try
    {  
        Bureaucrat a("dd", 11);
        Bureaucrat b("cc", 19);
        b = a;
        std::cout << b.getName() << std::endl;
            std::cout << b.getGrade() << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void testTooLow()
{

        try
        {

            Bureaucrat *nn = new Bureaucrat("dd", 150000);
            std::cout << nn;

        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
}

void testTooHigh()
{

        try
        {

            Bureaucrat *nn = new Bureaucrat("dd", -1);
            std::cout << nn;

        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

}

void    testIncrease()
{
    try
    {    Bureaucrat aa("test", 0);
        aa.increaseGrade();
        }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}

void    testDecrease()
{
    try
{    Bureaucrat aa("test", 150);
    aa.decreaseGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}
void testInDeGrade()
{
    Bureaucrat *t = new Bureaucrat("tes", 100);
    for (int i = 0; i < 50; i++)
    {
        t->increaseGrade();
        t->decreaseGrade();
    }
    std::cout << t << std::endl;
    delete t;
}


int main()
{
    testNormal();

    std::cout << "\ntest assignment and grade too low \n" << std::endl;
    testTooLow();

    std::cout << "\ntes grade too high \n" << std::endl;
    testTooHigh();

    std::cout << "\ntest  increase grade too high" << std::endl;
    testIncrease();

    std::cout << "\ntest  increase grade too low" << std::endl;

    testDecrease();
    std::cout << "\ntest  normal in and decrease grade " << std::endl;
    testInDeGrade();
    return (0);
}


