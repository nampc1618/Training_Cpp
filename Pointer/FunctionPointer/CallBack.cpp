#include <iostream>

typedef void (*EventCallback)(void*);

typedef struct
{
    void* data;
    EventCallback callback;
}Event;

void process_event(Event event)
{
    event.callback(event.data);
}

void handle_mouse_click(void* data)
{
    int* coords = (int*)data;
    std::cout << "Mouse click at " << coords[0] << "," << coords[1] << std::endl;
}
void handle_keyboard_press(void* data)
{
    int key = *(int*)data;
    std::cout << "Keyboard key pressed: " << key << std::endl;
}


int main()
{
    int mouse_coords[] = {10, 20};
    int key = 27;
    Event mouse_event = {mouse_coords, handle_mouse_click};
    process_event(mouse_event);

    Event keyboard_event = {&key, handle_keyboard_press};
    process_event(keyboard_event);

    return 0;
}