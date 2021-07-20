#include <string>

#pragma once

class Message
{
public:
	Message(const std::string event)
	{
		messageEvent = event;
	}

	std::string getEvent()
	{
		return messageEvent;
	}
private:
	std::string messageEvent;
};