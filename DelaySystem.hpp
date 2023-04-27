// ######################################
// ## 
// ## File Name: DelaySystem.hpp
// ## @author: Estenio Garcia
// ## @License: MIT
// ## 
// ######################################

#pragma once 

class DelaySystem
{
    private:
        float timeTarget = 1.f;
        float deltaTime  = 0.016f;
        float counter    = 0.f;

    public:
        DelaySystem(float time):timeTarget(time){}
        DelaySystem(float time, float deltaTime):timeTarget(time), deltaTime(deltaTime){}
        DelaySystem(){}
        ~DelaySystem(){}

    public:
        void SetTime(float time){this->timeTarget = time;}
        void SetDeltaTime(float deltaTime){this->deltaTime = deltaTime;}
        void Reset(){this->counter = 0;}
        bool Delay(){return this->ExecuteDelay(this->timeTarget);}
        bool Delay(float time){return this->ExecuteDelay(time);}

    private:
        bool ExecuteDelay(float target)
        {
            this->counter += this->deltaTime;

            if(this->counter >= target)
            {
                this->counter = 0;
                return true;
            }

            return false;
        }
};