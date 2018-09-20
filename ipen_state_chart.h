#pragma once
#include <iostream>

using namespace std;

class ipen_state;
class ipen_pending;
class ipen_ready;
class ipen_reading;

class ipen_state_chart
{
    friend class ipen_state; 
    public:
        ipen_state_chart();
        ~ipen_state_chart();

        void enter_pending_state();
        void enter_ready_state();
        void enter_reading_state();

    protected:  
    //    void change_state(ipen_state *pstate);      //状态切换  
    private:  
        ipen_state *__m_pstate;     //维护一个State基类指针
};
