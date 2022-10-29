/*
** EPITECH PROJECT, 2022
** task
** File description:
** task01
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

int main()
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;
    sfTexture* texture;
    sfSprite* sprite;

    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    texture = sfTexture_createFromFile("./photo.png", NULL);
    if (!texture)
    return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);

    return EXIT_SUCCESS;
}
