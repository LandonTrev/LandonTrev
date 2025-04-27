SHOWS = [
    "Avatar: The Last Airbender",
    "Ben 10",
    "Arthur",
    " SpongeBob SquarePants",
    "The Magic School Bus",
    "Dora the Explorer",
    "Blue's Clues",
    "The Backyardigans",
]


def main():
    cleaned_shows = []
    for show in SHOWS:
        cleaned_shows.append(show.strip().title())

    
    print(', '.join(cleaned_shows))

main()