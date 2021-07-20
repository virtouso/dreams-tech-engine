#include "MessageBus.cpp"
#include "TestComponents.cpp"



//
//
//int main() {
//
//
//
//}





//Test For message Bus and Components
 
int main()
{
    MessageBus messageBus;
    ComponentA compA(&messageBus);
    ComponentB compB(&messageBus);

    // This is supposed to act like a game loop.
    for (int ctr = 0; ctr < 50; ctr++) {
        compA.update();
        compB.update();
        messageBus.notify();
    }

    return 0;
}