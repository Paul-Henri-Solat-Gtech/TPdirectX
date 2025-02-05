#include <iostream>

#include "Entity.h"
#include "LifeComponent.h"

int main()
{
    Entity* player = new Entity;
    player->Init("player");

    LifeComponent* lifeComponent = new LifeComponent;

    player->AddComponent(lifeComponent);

    LifeComponent* playerLife = player->GetComponent<LifeComponent>();
    
    std::cout << "Player life:" << player->GetComponent<LifeComponent>()->GetHP() << std::endl;
    playerLife->SetHP(50);
    std::cout << "Player life:" << playerLife->GetHP() <<std::endl;
    playerLife->DebugHp();

    Entity* slime = new Entity;
    slime->Init("slime");

    LifeComponent* slimeLife = new LifeComponent;
    slime->AddComponent(slimeLife);
    LifeComponent* slimeLifeComp = slime->GetComponent<LifeComponent>();
    
    slimeLifeComp->DebugHp();
    slime->AddComponent(slimeLifeComp); // test dajout en trop
}