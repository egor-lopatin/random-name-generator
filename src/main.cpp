#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]) {
    string adjectives[] = {
            "Adorable", "Adventurous", "Affable", "Affectionate", "Ambitious",
            "Amiable", "Amicable", "Amusing", "Appreciative", "Articulate",
            "Assured", "Attentive", "Attractive", "Benevolent", "Blissful",
            "Bold", "Brave", "Bright", "Brilliant", "Buoyant",
            "Calm", "Capable", "Caring", "Cheerful", "Clear-headed",
            "Clever", "Colorful", "Comfortable", "Compassionate", "Confident",
            "Congenial", "Considerate", "Content", "Cooperative", "Courageous",
            "Courteous", "Creative", "Cultured", "Daring", "Dashing",
            "Dazzling", "Decisive", "Delightful", "Dependable", "Determined",
            "Devoted", "Diligent", "Dynamic", "Eager", "Earnest",
            "Easygoing", "Effervescent", "Efficient", "Elegant", "Eloquent",
            "Empathetic", "Energetic", "Engaging", "Enthusiastic", "Enterprising",
            "Entertaining", "Enthusiastic", "Exuberant", "Fair-minded", "Faithful",
            "Fantastic", "Fearless", "Felicific", "Forgiving", "Friendly",
            "Fruitful", "Funny", "Generous", "Gentle", "Genuine",
            "Glowing", "Good-hearted", "Good-natured", "Gracious", "Grateful",
            "Gregarious", "Happy", "Hardworking", "Harmonious", "Helpful",
            "Honest", "Honorable", "Hopeful", "Humorous", "Idealistic",
            "Imaginative", "Impressive", "Industrious", "Innovative", "Inspirational",
            "Intelligent", "Intuitive", "Inventive", "Joyful", "Kind",
            "Knowledgeable", "Lighthearted", "Likable", "Lively", "Loving",
            "Loyal", "Magnanimous", "Mature", "Methodical", "Mindful",
            "Modest", "Motivated", "Neat", "Neighborly", "Nice",
            "Nurturing", "Observant", "Optimistic", "Organized", "Original",
            "Passionate", "Patient", "Peaceful", "Perceptive", "Persistent",
            "Playful", "Polite", "Positive", "Practical", "Precise",
            "Productive", "Progressive", "Punctual", "Purposeful", "Rational",
            "Realistic", "Reflective", "Reliable", "Resourceful", "Respectful",
            "Responsible", "Responsive", "Sagacious", "Self-confident", "Self-disciplined",
            "Sensible", "Sensitive", "Serene", "Sincere", "Skillful",
            "Sociable", "Steadfast", "Steady", "Supportive", "Sympathetic",
            "Tactful", "Thoughtful", "Thrifty", "Tolerant", "Tranquil",
            "Trustworthy", "Understanding", "Upbeat", "Upstanding", "Versatile",
            "Vivacious", "Warmhearted", "Well-behaved", "Well-informed", "Well-mannered",
            "Wholesome", "Wise", "Witty", "Wonderful", "Youthful",
            "Zealous"
    };

    string animals[] = {
            "Aardvark", "Albatross", "Alligator", "Alpaca", "Ant",
            "Anteater", "Antelope", "Ape", "Armadillo", "Donkey",
            "Baboon", "Badger", "Barracuda", "Bat", "Bear",
            "Beaver", "Bee", "Bison", "Boar", "Buffalo",
            "Butterfly", "Camel", "Capybara", "Caribou", "Cassowary",
            "Cat", "Caterpillar", "Cattle", "Chamois", "Cheetah",
            "Chicken", "Chimpanzee", "Chinchilla", "Chough", "Clam",
            "Cobra", "Cockroach", "Cod", "Cormorant", "Coyote",
            "Crab", "Crane", "Crocodile", "Crow", "Curlew",
            "Deer", "Dinosaur", "Dog", "Dogfish", "Dolphin",
            "Dotterel", "Dove", "Dragonfly", "Duck", "Dugong",
            "Dunlin", "Eagle", "Echidna", "Eel", "Eland",
            "Elephant", "Elk", "Emu", "Falcon", "Ferret",
            "Finch", "Fish", "Flamingo", "Fly", "Fox",
            "Frog", "Gaur", "Gazelle", "Gerbil", "Giraffe",
            "Gnat", "Gnu", "Goat", "Goldfinch", "Goldfish",
            "Goose", "Gorilla", "Goshawk", "Grasshopper", "Grouse",
            "Guanaco", "Gull", "Hamster", "Hare", "Hawk",
            "Hedgehog", "Heron", "Herring", "Hippopotamus", "Hornet",
            "Horse", "Human", "Hummingbird", "Hyena", "Ibex",
            "Ibis", "Jackal", "Jaguar", "Jay", "Jellyfish",
            "Kangaroo", "Kingfisher", "Koala", "Kookabura", "Kouprey",
            "Kudu", "Lapwing", "Lark", "Lemur", "Leopard",
            "Lion", "Llama", "Lobster", "Locust", "Loris",
            "Louse", "Lyrebird", "Magpie", "Mallard", "Manatee",
            "Mandrill", "Mantis", "Marten", "Meerkat", "Mink",
            "Mole", "Mongoose", "Monkey", "Moose", "Mosquito",
            "Mouse", "Mule", "Narwhal", "Newt", "Nightingale",
            "Octopus", "Okapi", "Opossum", "Oryx", "Ostrich",
            "Otter", "Owl", "Oyster", "Panther", "Parrot",
            "Partridge", "Peafowl", "Pelican", "Penguin", "Pheasant",
            "Pig", "Pigeon", "Pony", "Porcupine", "Porpoise",
            "Quail", "Quelea", "Quetzal", "Rabbit", "Raccoon",
            "Rail", "Ram", "Rat", "Raven", "Red deer",
            "Red panda", "Reindeer", "Rhinoceros", "Rook", "Salamander",
            "Salmon", "Sand Dollar", "Sandpiper", "Sardine", "Scorpion",
            "Seahorse", "Seal", "Shark", "Sheep", "Shrew",
            "Skunk", "Snail", "Snake", "Sparrow", "Spider",
            "Spoonbill", "Squid", "Squirrel", "Starling", "Stingray",
            "Stinkbug", "Stork", "Swallow", "Swan", "Tapir",
            "Tarsier", "Termite", "Tiger", "Toad", "Trout",
            "Turkey", "Turtle", "Viper", "Vulture", "Wallaby",
            "Walrus", "Wasp", "Weasel", "Whale", "Wildcat",
            "Wolf", "Wolverine", "Wombat", "Woodcock", "Woodpecker",
            "Worm", "Wren", "Yak", "Zebra"
    };

    unsigned int seed = static_cast<unsigned int>(time(nullptr));
    seed ^= static_cast<unsigned int>(reinterpret_cast<std::uintptr_t>(&seed));
    srand(seed);

    int adjective_index = rand() % (sizeof(adjectives) / sizeof(adjectives[0]));
    int animal_index = rand() % (sizeof(animals) / sizeof(animals[0]));

    string name = adjectives[adjective_index] + " " + animals[animal_index];

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            string arg = argv[i];

            for (int char_index = 0; char_index < arg.length(); char_index++) {
                if (arg[char_index] == 'u') {
                    for (int j = 0; j < name.length(); j++) {
                        name[j] = toupper(name[j]);
                    }
                } else if (arg[char_index] == 'l') {
                    for (int j = 0; j < name.length(); j++) {
                        name[j] = tolower(name[j]);
                    }
                } else if (arg[char_index] == 'c') {
                    name[0] = toupper(name[0]);
                } else if (arg[char_index] == 'x') {
                    for (int j = 0; j < name.length(); j++) {
                        if (name[j] == ' ' or name[j] == '-') {
                            name[j] = '_';
                        }
                    }
                } else if (arg[char_index] == 'h') {
                    printf("Usage: %s [-u | -l | -c | -x | -h]\n", argv[0]);
                    printf("Options:\n");
                    printf("  -u\t\tPrints the name in upper case\n");
                    printf("  -l\t\tPrints the name in lower case\n");
                    printf("  -c\t\tPrints the name in capitalized case\n");
                    printf("  -x\t\tPrints the name in Unix style\n");
                    printf("  -h\t\tPrints this help message\n");
                    return 0;
                } else if (arg[char_index] != '-') {
                    printf("Invalid option: %c\n", arg[char_index]);
                    return 1;
                }
            }
        }
    }

    printf("%s\n", name.c_str());

    return 0;
}
