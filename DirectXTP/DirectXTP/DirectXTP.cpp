#include <iostream>

#include "Entity.h"
#include "Life.h"

int main()
{
    Entity* player = new Entity;
    player->Init("player");

    Life* lifeComponent = new Life;

    player->AddComponent(lifeComponent);

    Life* playerLife = player->GetComponent<Life>();
    
    std::cout << "Player life:" << player->GetComponent<Life>()->GetHP() << std::endl;
    playerLife->SetHP(50);
    std::cout << "Player life:" << playerLife->GetHP() <<std::endl;
    playerLife->DebugHp();
}