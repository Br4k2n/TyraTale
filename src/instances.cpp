#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::setinstance(Vec2 pos, int id)
{
    auto& repo = engine->renderer.getTextureRepository();
    std::string path1, path2, path3, path4;
    std::string pathw1, pathw2, pathw3, pathw4;
    std::string pathwd1, pathwd2, pathwd3, pathwd4;
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

        pathw1 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_d_1.png");
        pathw2 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_r_1.png");
        pathw3 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_u_1.png");
        pathw4 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_l_1.png");

        pathwd1 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_d_3.png");
        pathwd2 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_r_3.png");
        pathwd3 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_u_3.png");
        pathwd4 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_l_3.png");
        instances[InstanceCount].ins_sprite.size = Vec2(64 * 2,64 * 2);
        instances[InstanceCount].direnable = true;
        instances[InstanceCount].walkanm = true;
    }
    instances[InstanceCount].id = id;
    instances[InstanceCount].texture = repo.add(path1);
    if (instances[InstanceCount].direnable)
    {
        instances[InstanceCount].texture1 = repo.add(path2);
        instances[InstanceCount].texture2 = repo.add(path3);
        instances[InstanceCount].texture3 = repo.add(path4);
    }
    if (instances[InstanceCount].walkanm)
    {
        instances[InstanceCount].MoveD1 = repo.add(pathw1);
        instances[InstanceCount].MoveR1 = repo.add(pathw2);
        instances[InstanceCount].MoveU1 = repo.add(pathw3);
        instances[InstanceCount].MoveL1 = repo.add(pathw4);

        instances[InstanceCount].MoveD2 = repo.add(pathwd1);
        instances[InstanceCount].MoveR2 = repo.add(pathwd2);
        instances[InstanceCount].MoveU2 = repo.add(pathwd3);
        instances[InstanceCount].MoveL2 = repo.add(pathwd4);
    }
    instances[InstanceCount].texture->addLink(instances[InstanceCount].ins_sprite.id);
    InstanceCount++;
}
void tale::setinstance(int posX, int posY, int id)
{
    auto& repo = engine->renderer.getTextureRepository();
    std::string path1, path2, path3, path4;
    std::string pathw1, pathw2, pathw3, pathw4;
    std::string pathwd1, pathwd2, pathwd3, pathwd4;
    instances[InstanceCount].Pos.x = posX;
    instances[InstanceCount].Pos.y = posY;
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

        pathw1 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_d_1.png");
        pathw2 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_r_1.png");
        pathw3 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_u_1.png");
        pathw4 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_l_1.png");

        pathwd1 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_d_3.png");
        pathwd2 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_r_3.png");
        pathwd3 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_u_3.png");
        pathwd4 = FileUtils::fromCwd("sprites/Characters/Toriel/spr_toriel_l_3.png");
        instances[InstanceCount].ins_sprite.size = Vec2(64 * 2,64 * 2);
        instances[InstanceCount].direnable = true;
        instances[InstanceCount].walkanm = true;
    }
    if (id == 2)
    {  
        path1 = FileUtils::fromCwd("sprites/instances/inst_button0.png");
        path2 = FileUtils::fromCwd("sprites/instances/inst_button1.png");
        path3 = FileUtils::fromCwd("sprites/instances/inst_button0.png");
        path4 = FileUtils::fromCwd("sprites/instances/inst_button1.png");
        instances[InstanceCount].direnable = true;
    }
    if (id == 3)
    {  
        path1 = FileUtils::fromCwd("sprites/instances/RuinsDoor.png");
        instances[InstanceCount].ins_sprite.size *= 2; 
        
    }
    if (id == 4)
    {  
        path1 = FileUtils::fromCwd("sprites/instances/switch0.png");
        path2 = FileUtils::fromCwd("sprites/instances/switch1.png");
        path3 = FileUtils::fromCwd("sprites/instances/switch0.png");
        path4 = FileUtils::fromCwd("sprites/instances/switch1.png");
        instances[InstanceCount].direnable = true;
        instances[InstanceCount].ins_sprite.size /= 2; 
    }
    if (id == 5)
    {  
        path1 = FileUtils::fromCwd("sprites/Characters/dummy/dummy_ins.png");
    }
    if (id == 6)
    {  
        path1 = FileUtils::fromCwd("sprites/instances/sign.png");
    }
    instances[InstanceCount].id = id;
    instances[InstanceCount].texture = repo.add(path1);
    instances[InstanceCount].dir = 0;
    if (instances[InstanceCount].direnable)
    {
        instances[InstanceCount].texture1 = repo.add(path2);
        instances[InstanceCount].texture2 = repo.add(path3);
        instances[InstanceCount].texture3 = repo.add(path4);
    }
    if (instances[InstanceCount].walkanm)
    {
        instances[InstanceCount].MoveD1 = repo.add(pathw1);
        instances[InstanceCount].MoveR1 = repo.add(pathw2);
        instances[InstanceCount].MoveU1 = repo.add(pathw3);
        instances[InstanceCount].MoveL1 = repo.add(pathw4);

        instances[InstanceCount].MoveD2 = repo.add(pathwd1);
        instances[InstanceCount].MoveR2 = repo.add(pathwd2);
        instances[InstanceCount].MoveU2 = repo.add(pathwd3);
        instances[InstanceCount].MoveL2 = repo.add(pathwd4);
    }
    instances[InstanceCount].texture->addLink(instances[InstanceCount].ins_sprite.id);
    InstanceCount++;
}
void tale::removeinstances()
{
    for (int i = 0; i < InstanceCount; i++)
    {
        instances[i].Pos = Vec2(0,0);
        instances[i].id = -1;
        auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
        rem->removeLinkById(instances[i].ins_sprite.id);
        instances[i].texture->addLink(instances[i].ins_sprite.id);
        engine->renderer.getTextureRepository().free(instances[i].texture);
        if (instances[InstanceCount].direnable)
        {
            engine->renderer.getTextureRepository().free(instances[i].texture1);
            engine->renderer.getTextureRepository().free(instances[i].texture2);
            engine->renderer.getTextureRepository().free(instances[i].texture3);
        }
        if (instances[InstanceCount].walkanm)
        {
            engine->renderer.getTextureRepository().free(instances[i].MoveR1);
            engine->renderer.getTextureRepository().free(instances[i].MoveL1);
            engine->renderer.getTextureRepository().free(instances[i].MoveU1);
            engine->renderer.getTextureRepository().free(instances[i].MoveD1);
            engine->renderer.getTextureRepository().free(instances[i].MoveR2);
            engine->renderer.getTextureRepository().free(instances[i].MoveL2);
            engine->renderer.getTextureRepository().free(instances[i].MoveU2);
            engine->renderer.getTextureRepository().free(instances[i].MoveD2);
        }
        instances[i].direnable = false;
        instances[i].walkanm = false;
        instances[i].dir = 0;
        instances[i].ins_sprite.size = Vec2(32 * 2,32 * 2);
    }
    InstanceCount = 0;
}
void tale::drawinstances()
{
    if (mapid == mapcons){
    auto& ren = engine->renderer.renderer2D;
    for (int i = 0; i < InstanceCount; i++)
    {
        if (instances[i].dir != instances[i].dircons && !instances[i].movingX && !instances[i].movingY)
        {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].texture->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].texture1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].texture2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].texture3->addLink(instances[i].ins_sprite.id);
            instances[i].dircons = instances[i].dir;

        }
        if (!instances[i].movingX && !instances[i].movingY && instances[i].movingcons) 
        {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            instances[i].dircons = 999;
            instances[i].movingcons = false;
            instances[i].anmcount = 0;
        }
        else if ((instances[i].movingX || instances[i].movingY) && instances[i].walkanm)
        {
            if (instances[i].dir != instances[i].dircons)
            {
                instances[i].anmcount = -1;
                instances[i].dircons = instances[i].dir;
            }
            if (instances[i].anmcount == 0)
            {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].MoveD1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].MoveR1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].MoveU1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].MoveL1->addLink(instances[i].ins_sprite.id);
            }
            else if (instances[i].anmcount == 10)
            {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].texture->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].texture1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].texture2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].texture3->addLink(instances[i].ins_sprite.id);
            }
            else if (instances[i].anmcount == 20)
            {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].MoveD2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].MoveR2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].MoveU2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].MoveL2->addLink(instances[i].ins_sprite.id);
            }
            else if (instances[i].anmcount == 30)
            {
            auto* rem = engine->renderer.getTextureRepository().getBySpriteId(instances[i].ins_sprite.id);
            rem->removeLinkById(instances[i].ins_sprite.id);
            if (instances[i].dir == 0) instances[i].texture->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 1) instances[i].texture1->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 2) instances[i].texture2->addLink(instances[i].ins_sprite.id);
            if (instances[i].dir == 3) instances[i].texture3->addLink(instances[i].ins_sprite.id);
            }
            
            if (instances[i].anmcount >= 40) {instances[i].anmcount = -1;}
        }
        instances[i].ins_sprite.position.x = map1.position.x + (instances[i].Pos.x + 256);
        instances[i].ins_sprite.position.y = map1.position.y + (instances[i].Pos.y + 256);
        
        if (instances[i].id == 0)
        {
            if (TEvent <= 1) {draw_instance(i);}
        }
        else if (instances[i].id == 1 && mapid == 1)
        {
            draw_instance(i);
        }
        else if (instances[i].id == 3 && mapid == 3)
        {
            if (TEvent < 8 && mapanmcount < 5) draw_instance(i);
        }
        else if (instances[i].id == 5 && mapid == 5)
        {
            if (TL_Dummy != 1) draw_instance(i);
        }
        else draw_instance(i);
    }
    ren.render(player);
    }
}
bool tale::instmoveX(int id, int X1, int X2)
{
    if (!action)
    {
        for (int i = 0; i < InstanceCount; i++)
        {
            if (instances[i].id == id)
            {

                if (X1 > 0) 
                {
                    if (instances[i].Pos.x < X2)
                    {
                    instances[i].Pos.x += X1;
                    instances[i].dir = 1;
                    instances[i].movingX = true;
                    instances[i].anmcount++;
                    }
                    else
                    {
                    instances[i].movingX = false;
                    return true;
                    }
                }
                else if (X1 < 0) 
                {
                    if (instances[i].Pos.x > X2)
                    {
                    instances[i].Pos.x += X1;
                    instances[i].dir = 3;
                    instances[i].movingX = true;
                    instances[i].anmcount++;
                    }
                    else
                    {
                    instances[i].movingX = false;
                    return true;
                    }
                }
            }
        }
    }
    return false;
}
bool tale::instmoveY(int id, int Y1, int Y2)
{
    if (!action)
    {
        for (int i = 0; i < InstanceCount; i++)
        {
            if (instances[i].id == id)
            {

                if (Y1 > 0) 
                {
                    if (instances[i].Pos.y < Y2)
                    {
                    instances[i].Pos.y += Y1;
                    instances[i].dir = 0;
                    instances[i].movingY = true;
                    instances[i].anmcount++;
                    }
                    else
                    {
                    instances[i].movingY = false;
                    return true;
                    }
                }
                else if (Y1 < 0) 
                {
                    if (instances[i].Pos.y > Y2)
                    {
                    instances[i].Pos.y += Y1;
                    instances[i].dir = 2;
                    instances[i].movingY = true;
                    instances[i].anmcount++;
                    }
                    else
                    {
                    instances[i].movingY = false;
                    return true;
                    }
                }
            }
        }
    }
    return false;
}
void tale::instmove(int id, int dir)
{
    if (!action)
    {
        for (int i = 0; i < InstanceCount; i++)
        {
            if (instances[i].id == id)
            {
                if (instances[i].direnable) instances[i].dir = dir;
            }
        }
    }
}
void tale::inst_conditionmove()
{
    if (mapid == 1 && TEvent == 2) 
    {
    if (instmoveY(1, -4, 0))
    {
        instfadeout(1);
    }
    }
    if (mapid == 2) 
    {
        if (TEvent == 3 && instmoveY(1, -4, 284)) instmove(1, 0);
        if (TEvent == 4 ) 
        {
            bool Yt = instmoveY(1, -4, 76);
            bool Xt = instmoveX(1, 4, 150);
            if (Yt && Xt) instmove(1, 0);
        }
        if (TEvent == 5 ) 
        {
            bool Yt = instmoveY(1, -4, -100);
            bool Xt = instmoveX(1, 4, 234);
            if (Yt && Xt) instmove(1, 0);
        }
        if (TEvent == 6 ) 
        {
            bool Xt = instmoveX(1, -4, 35);
            if (Xt) 
            {
                instmove(1, 2); 
                instfadeout(1);
            }
        }
    }
    if (mapid == 3)
    {
        if (TEvent == 7 ) 
        {
            
            if (mapanmcount == 0)
            {
            bool Xt = instmoveX(1, 4, 178); 
            if (instances[8].Pos.x > 70) instances[4].dir = 1;
            if (instances[8].Pos.x > 140) instances[5].dir = 1;
            Pstop = true;
            if (Xt) mapanmcount = 1;

            }
            if (mapanmcount == 1)
            {
            bool Yt = instmoveY(1, -4, -140);
            if (Yt) mapanmcount = 2;
            }
            if (mapanmcount == 2)
            {
            bool Xt = instmoveX(1, -4, 92);
            if (instances[8].Pos.x < 110) instances[1].dir = 1;
            if (instances[8].Pos.x < 186) instances[2].dir = 1;
            if (Xt) mapanmcount = 3;
            }
            if (mapanmcount == 3)
            {
            bool Yt = instmoveY(1, -4, -180);
            if (Yt) mapanmcount = 4;
            }
            if (mapanmcount == 4)
            {
            bool Xt = instmoveX(1, 4, 150);
                if (Xt) 
                {
                    mapanmcount = 5;
                    instmove(1, 2);
                }
            }
            if (mapanmcount == 5)
            {
            bool shakin = mapshake();
            instances[7].dir = 1;

            if (!shakin)
            mapanmcount = 6;
            }
            if (mapanmcount == 6)
            {
            bool Xt = instmoveX(1, -4, 0);
                if (Xt) 
                {
                    mapanmcount = 7;
                }
            }
            if (mapanmcount == 7)
            {
            bool Yt = instmoveY(1, 4, -88);
                if (Yt) 
                {
                    mapanmcount = 0;
                    event(7);
                    Pstop = false;
                }
            }
        }
        if (TEvent == 8 ) 
        {
            bool Yt = instmoveY(1, -4, -200);
            if (Yt) 
            {
                instfadeout(1);
            }
        }
    }
    if (mapid == 4)
    {
        if (TEvent == 9)
            {
            bool Xt = instmoveX(1, 4, 654);
                if (Xt) 
                {
                    instmove(1, 3);
                }
            }
        if (TEvent == 10 ) 
        {
            bool Xt = instmoveX(1, 4, 1094);
            if (Xt) 
            {
                instmove(1, 3);
            }
        }
        if (TEvent == 11 )
        {
                Pstop = true;
                bool shakin = mapshake();
                if (!shakin) 
                {
                    event(11);
                }
        }
        if (TEvent == 12 ) 
        {
            mapanmcount = 0;
            Pstop = false;
            instmoveX(1, 4, 1500);

        }
    }
    if (mapid == 5)
    {
        if (TEvent == 13 ) 
        {
            if (mapanmcount == 0)
            {
            bool check = instmoveY(1, -4, -170);
            if (check) {mapanmcount = 1; instmove(1, 0);}
            }

        }
        if (TEvent == 14 && GameState == 0)
        {
            event(14);
        }
        if (TEvent == 15)
        {
            bool check = instmoveY(1, -4, -200);
            if (check) { instfadeout(1); }
        }
    }
}
void tale::instfadeout(int id)
{
    for (int i = 0; i < InstanceCount; i++)
    {
        if (instances[i].id == id)
        {
            instances[i].ins_sprite.color.a -= 6;
            if (instances[i].ins_sprite.color.a < 0) instances[i].ins_sprite.color.a = 0;
        }
    }
}

void tale::draw_instance(int ID)
{
    engine->renderer.renderer2D.render(instances[ID].ins_sprite);
}
}