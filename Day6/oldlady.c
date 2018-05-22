#include <cs50.h>
#include <stdio.h>

void i_know(string what, string why);
void swallowed_fly(void);
void swallowed_spider(void);
void swallowed_bird(void);
void swallowed_cat(void);
void swallowed_dog(void);
void swallowed_goat(void);
void swallowed_cow(void);

int main(void)
{

    i_know("fly", "I don't know why she swallowed the fly");
    printf("Perhaps she'll die\n\n");

    printf("I know an old lady who swallowed a spider\n");
    swallowed_spider();

    i_know("bird", "How absurd to swallow a bird");
    swallowed_bird();

    i_know("cat", "Imagine that. She swallowed a cat.");
    swallowed_cat();

    i_know("dog", "What a hog to swallow a dog!");
    swallowed_dog();

    i_know("goat", "Opened her throat and down went the goat!");
    swallowed_goat();

    i_know("cow", "I don't know how she swallowed the cow");
    swallowed_cow();

    i_know("horse", "She's alive and well of course!");
}

void i_know(string what, string why) {
    printf("I know an old lady who swallowed a %s\n%s\n", what, why);
}

void swallowed_spider() {
    printf("That wriggled and jiggled and tickled inside her\n");
    printf("She swallowed the spider to catch the fly\n");
    swallowed_fly();
}

void swallowed_fly() {
    printf("But I don't know why she swallowed the fly\n");
    printf("Perhaps she'll die\n\n");
}

void swallowed_bird(void)
{
    // write this
}

void swallowed_cat(void)
{
    // write this
}

void swallowed_dog(void)
{
    // write this
}

void swallowed_goat(void)
{
    // write this
}

void swallowed_cow(void)
{
    // write this
}