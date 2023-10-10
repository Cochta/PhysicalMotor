#include "SDLApplication.h"
#include "../libs/Math922/include/Random.h"

int main(int argc, char *argv[])
{
    SDLApplication app("SDL Application", 800, 600);

    for (int i = 0; i < 15; ++i)
    {
        Circle c({static_cast<float>(Random::Range(100, app.Width - 100)),
                  static_cast<float>(Random::Range(100, app.Height - 100))},
                 Vec2F::Zero, 10, Red);
        app.AddCircle(c);
    }

    app.Run();

    return 0;
}