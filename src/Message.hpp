#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <string>

using MessageType = unsigned int;

struct Message{
	Message(const MessageType& l_type) : m_type(l_type) {}

	MessageType m_type;
	int m_sender;
	int m_receiver;

    std::string m_payloadString;
};

#endif // MESSAGE_HPP
