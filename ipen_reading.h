#pragma once
#include "ipen_state.h"



class ipen_reading : public ipen_state
{
    public:
        static ipen_reading *instance();
        ~ipen_reading();

        void handle();
        void enter_ready(ipen_state_chart * p_cxt);

    private:
        ipen_reading();
	    static ipen_reading * __m_sp_instance;
};