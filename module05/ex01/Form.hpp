/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:39:18 by aramon            #+#    #+#             */
/*   Updated: 2024/01/13 16:39:19 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;

    Form();

public:
    Form( const std::string& name, int gradeToSign );
    Form( const std::string& name, int gradeToSign, int gradeToExecute );
    Form( const Form& src );
    ~Form();

    Form&   operator=( const Form& rhs );

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    /* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif // FORM_HPP
