#include "Form.hpp"

#define MAX 2147483647

class RobotomyRequestForm : public Form
{
public:
	// Constructors
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);

	// Assignment operator overload
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	// Destructor
	~RobotomyRequestForm();

	void action(const Bureaucrat& executor) const;

private:

	RobotomyRequestForm();
};