#include "MessageBus.cpp"
#include "Component.cpp"

class ComponentA : public Component
{
public:
	ComponentA(MessageBus* messageBus) : Component(messageBus) {}

private:
	void onNotify(Message message)
	{
		std::cout << "I received: " << message.getEvent() << std::endl;
	}
};

// This class will send a message to ComponentA.
class ComponentB : public Component
{
public:
	ComponentB(MessageBus* messageBus) : Component(messageBus) {}

	void update()
	{
		Message greeting("Hi!");
		send(greeting);
	}

private:
	void onNotify(Message message)
	{
		std::cout << "I received: " << message.getEvent() << std::endl;
	}
};