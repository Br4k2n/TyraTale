#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::setinstance(Vec2 pos, int id)
{
    auto& repo = engine->renderer.getTextureRepository();
    std::string path1, path2, path3, path4;
    instances[InstanceCount].Pos.x = pos.x;
    instances[InstanceCount].Pos.y = pos.y;
    if (id == 0)
    {  
        path1 = FileUtils::fromCwd("sprites/Characters/Flowey/f0.png");
    }
    if (id == 1)
    {  
        path1 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_d_0.png");
        path2 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_r_0.png");
        path3 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_u_0.png");
        path4 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_l_0.png");
        if (widescreenmode) instances[InstanceCount].ins_sprite.size = Vec2(48 * 2,64 * 2);
        else instances[InstanceCount].ins_sprite.size = Vec2(64 * 2,64 * 2);
        instances[InstanceCount].direnable = true;
    }
    instances[InstanceCount].id = id;
    instances[InstanceCount].texture = repo.add(path1);
    if (instances[InstanceCount].direnable)
    {
        instances[InstanceCount].texture1 = repo.add(path2);
        instances[InstanceCount].texture2 = repo.add(path3);
        instances[InstanceCount].texture3 = repo.add(path4);
    }
    instances[InstanceCount].texture->addLink(instances[InstanceCount].ins_sprite.id);
    TYRA_LOG
    (
        "Instance ", InstanceCount, "proprietis: ", 
        "X: ", instances[InstanceCount].Pos.x,
        " Y: ", instances[InstanceCount].Pos.y,
        "end"
    );
    InstanceCount++;
}
void tale::removeinstances()
{
    for (int i = 0; i < InstanceCount; i++)
    {
        instances[i].Pos = Vec2(0,0);
        instances[i].id = -1;
        engine->renderer.getTextureRepository().free(instances[i].texture);
        if (instances[InstanceCount].direnable)
        {
            engine->renderer.getTextureRepository().free(instances[i].texture1);
            engine->renderer.getTextureRepository().free(instances[i].texture2);
            engine->renderer.getTextureRepository().free(instances[i].texture3);
        }
        instances[i].direnable = false;
        instances[i].dir = 0;
        if (widescreenmode) instances[i].ins_sprite.size = Vec2(24 * 2,32 * 2);
        else instances[i].ins_sprite.size = Vec2(32 * 2,32 * 2);
    }
    InstanceCount = 0;
}
void tale::drawinstances()
{
    if (mapid == mapcons){
    auto& ren = engine->renderer.renderer2D;
    auto& pad = engine->pad.getClicked();
    for (int i = 0; i < InstanceCount; i++)
    {
        if (instances[i].dir != instances[i].dircons)
        {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].texture->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].texture1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].texture2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].texture3->addLink(instances[i].ins_sprite.id);
            instances[i].dircons = instances[i].dir;

        }
        instances[i].ins_sprite.position.x = map1.position.x + (instances[i].Pos.x + 256);
        instances[i].ins_sprite.position.y = map1.position.y + (instances[i].Pos.y + 256);
        if(pad.Cross) TYRA_LOG("Intance ", i,":",instances[i].ins_sprite.position.x, ", ", instances[i].ins_sprite.position.y);
        
        if (instances[i].id == 0)
        {
            if (TEvent <= 1) {draw_instance(i);}
        }
        else if (instances[i].id == 1 && mapid == 1)
        {
            draw_instance(i);
        }
        else draw_instance(i);
    }
    ren.render(player);
    }
}
void tale::instmove(int id, int X1, int Y1)
{
    if (!action)
    {
        for (int i = 0; i < InstanceCount; i++)
        {
            if (instances[i].id == id)
            {
                instances[i].Pos += Vec2(X1, Y1);
                if (instances[i].direnable)
                {
                    if (Y1 < 0 && Y1 < X1 && -Y1 > X1)
                    {
                        instances[i].dir = 2;
                    }
                    if (Y1 > 0 && Y1 < X1 && -Y1 > X1)
                    {
                        instances[i].dir = 0;
                    }
                    if (X1 > 0 && Y1 > X1 && Y1 < -X1)
                    {
                        instances[i].dir = 1;
                    }
                    if (X1 < 0 && Y1 > X1 && Y1 < -X1)
                    {
                        instances[i].dir = 3;
                    }
                }
            }
        }
    }
}

void tale::draw_instance(int ID)
{
    engine->renderer.renderer2D.render(instances[ID].ins_sprite);
}
}