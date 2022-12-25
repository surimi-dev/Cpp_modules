#ifndef HARL_H
#define HARL_H
#include <string>

class Harl
{
private:
	void (Harl::*harl_complains[4])();
	std::string levels[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
	void harlFilter(const std::string& level);
	
	Harl( void );
	~Harl( void );
};

#endif
