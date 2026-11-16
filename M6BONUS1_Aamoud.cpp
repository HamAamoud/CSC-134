#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    MOUNTAIN_PASS = 0,
    CAVE_ENTRANCE = 1,
    UNDERGROUND_LAKE = 2,
    SNAKE_PIT = 3,
    BOTTOMLESS_HOLE = 4,
    PASS_EXIT = 5,
    TREASURE_ROOM = 6,
    NUM_ROOMS = 7
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Mountain Pass",
        "Cave Entrance",
        "Underground Lake",
        "Snake Pit",
        "Bottomless Hole", 
        "Pass exit",
        "Treasure room"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "Wind whips around you as you traverse a ravine leading through ancient mountains. While traveling you find a small hole in the rock to shield from the wind",
        "A brief respite can be taken within the hollow space. From the corner you see an unfathomable darkness and hear the dripping of water.",
        "Before you lies a body of water reaching further than your eyes can see. Small waves inexplicably lap at the rocky shoreline.",
        "A rickety bridge hangs before you, suspended over a pit of writhing vipers.",
        "Upon entering the room you kick a rock into the dark. It bounces a few times before dropping out of sight. The sound of the rock striking teh bottom of the pit lags by several minutes.",
        "You continue on your pilgrimage, exiting the pass and emerging upon flowing plains where oxen can be seen grazing.",
        "You walk into the dark room and your foot knocks loose a pile on the floor. The sound of metal clinking fills your ears. Upon stepping further torches on the walls burst to flame revealing a room of vast treasures."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    connections[MOUNTAIN_PASS][NORTH] = PASS_EXIT;
    connections[MOUNTAIN_PASS][EAST] = CAVE_ENTRANCE;
    connections[MOUNTAIN_PASS][SOUTH] = -1;
    connections[MOUNTAIN_PASS][WEST] = -1;
    
    connections[CAVE_ENTRANCE][NORTH] = SNAKE_PIT;
    connections[CAVE_ENTRANCE][EAST] = UNDERGROUND_LAKE;
    connections[CAVE_ENTRANCE][SOUTH] = BOTTOMLESS_HOLE;
    connections[CAVE_ENTRANCE][WEST] = MOUNTAIN_PASS;
    
    connections[SNAKE_PIT][NORTH] = -1;
    connections[SNAKE_PIT][EAST] = TREASURE_ROOM;
    connections[SNAKE_PIT][SOUTH] = CAVE_ENTRANCE;
    connections[SNAKE_PIT][WEST] = -1;
    
    connections[UNDERGROUND_LAKE][NORTH] = TREASURE_ROOM;
    connections[UNDERGROUND_LAKE][EAST] = -1;
    connections[UNDERGROUND_LAKE][SOUTH] = -1;
    connections[UNDERGROUND_LAKE][WEST] = CAVE_ENTRANCE;
    
    connections[BOTTOMLESS_HOLE][NORTH] = CAVE_ENTRANCE;
    connections[BOTTOMLESS_HOLE][EAST] = -1;
    connections[BOTTOMLESS_HOLE][SOUTH] = -1;
    connections[BOTTOMLESS_HOLE][WEST] = -1;
    
    connections[PASS_EXIT][NORTH] = -1;
    connections[PASS_EXIT][EAST] = -1;
    connections[PASS_EXIT][SOUTH] = MOUNTAIN_PASS;
    connections[PASS_EXIT][WEST] = -1;

    connections[TREASURE_ROOM][NORTH] = -1;
    connections[TREASURE_ROOM][EAST] = -1;
    connections[TREASURE_ROOM][SOUTH] = UNDERGROUND_LAKE;
    connections[TREASURE_ROOM][WEST] = SNAKE_PIT;

    // Game state
    int currentRoom = MOUNTAIN_PASS; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}