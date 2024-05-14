#include "room.h"
#include "roomdata.h"
#include "../../functions/AnsiPrint/AnsiPrint.h"

// read data to the Room class
Room::Room(RoomData data) : roomID(data.id), roomName(data.name), roomDescription(data.description), playerInitialPosition(data.playerInitialPosition){
    Position playerInitialPosition = data.playerInitialPosition;
    for(int i = 0; i < GAME_WINDOW_SIZE_Y; i++){
        for(int j = 0; j < GAME_WINDOW_SIZE_X; j++){
            defaultRoomObjectMap[i][j] = static_cast<RoomState::RoomObject>(defaultRoomObjectMap[i][j]);
        }
    }
}

Room::~Room(){};

// add your code to implement the Room class here

bool Room::walkable(Position position){
    int X = position.getX();
    int Y = position.getY();
    if(Y >= 20 || X >= 35 || Y <= 0 || X <= 0){
        return false;
    }
    if(defaultRoomObjectMap[Y][X] == OBJECT_ROCK || defaultRoomObjectMap[Y][X] == OBJECT_WALL || defaultRoomObjectMap[Y][X] == OBJECT_WATER){
        return false;
    }
    return true;
}

// render
void Room::render(Position position) {
    switch(this->defaultRoomObjectMap[position.getY()][position.getX()]) {
        case OBJECT_NONE:
            AnsiPrint("  ", black, black);
            break;
        case OBJECT_DOOR:
            AnsiPrint("DR", yellow, black);
            break;
        case OBJECT_WALL:
            AnsiPrint("██", white, black);
            break;
        case OBJECT_GRASS:
            AnsiPrint("WW", green, black);
            break;
        case OBJECT_ROCK:
            AnsiPrint("▲▲", yellow, black);
            break;
        case OBJECT_WATER:
            if(rand() % 2 == 0) {
                AnsiPrint("~~", cyan, blue);
            } else {
                AnsiPrint("……", cyan, blue);
            }
            break;
    }
}
