#pragma once
#include "ipen_state.h"



class ipen_ready : public ipen_state
{
    public:
        static ipen_ready *instance();
        ~ipen_ready();

        void handle();
        void enter_reading(ipen_state_chart * p_cxt);
        void enter_pending(ipen_state_chart * p_cxt);

    private:
        ipen_ready();
	    static ipen_ready * __m_sp_instance;
};