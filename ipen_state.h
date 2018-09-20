#pragma once
#include "ipen_state_chart.h"


using namespace std;

class ipen_work;

class ipen_state
{
    public:
        ipen_state();
        ~ipen_state();
    public:
	    //virtual void get_cover() = 0;

        virtual void enter_pending(ipen_state_chart* pctx) {}
        virtual void enter_ready(ipen_state_chart* pctx) {}  
        virtual void enter_reading(ipen_state_chart* pctx) {}
        virtual void change_state(ipen_state *pst, ipen_state_chart *pcxt);

};